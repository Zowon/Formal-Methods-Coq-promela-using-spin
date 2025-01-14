#define BUFFER_SIZE 5

int isFull = 0;
int isEmpty = BUFFER_SIZE;
int mutex = 1;

chan buffer = [BUFFER_SIZE] of { int };
chan sync = [1] of { int };  // Synchronization channel to ensure lock-step execution

inline P(s) { atomic { s > 0 -> s--; } }
inline V(s) { atomic { s < BUFFER_SIZE -> s++; } }

active [2] proctype Producer() {
    int item;
    do
    :: select(item : 1..100);
       P(isEmpty);
       P(mutex);
       
       buffer!item;
       printf("Produced by Producer %d: %d\n", _pid, item);
       
       V(mutex);
       V(isFull);
       
       // Synchronize with Consumer to ensure lock-step execution
       sync!1;  // Signal Consumer to proceed
       if
       :: sync?1 -> skip;  // Wait for the signal from Consumer to proceed
       fi
    od
}

active [2] proctype Consumer() {
    int item;
    do
    :: P(isFull);
       P(mutex);
       
       buffer?item;
       printf("Consumed by Consumer %d: %d\n", _pid, item);
       
       V(mutex);
       V(isEmpty);
       
       // Synchronize with Producer to ensure lock-step execution
       sync!1;  // Signal Producer to proceed
       if
       :: sync?1 -> skip;  // Wait for the signal from Producer to proceed
       fi
    od
}

