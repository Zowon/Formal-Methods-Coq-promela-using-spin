#define rand	pan_rand
#define pthread_equal(a,b)	((a)==(b))
#if defined(HAS_CODE) && defined(VERBOSE)
	#ifdef BFS_PAR
		bfs_printf("Pr: %d Tr: %d\n", II, t->forw);
	#else
		cpu_printf("Pr: %d Tr: %d\n", II, t->forw);
	#endif
#endif
	switch (t->forw) {
	default: Uerror("bad forward move");
	case 0:	/* if without executable clauses */
		continue;
	case 1: /* generic 'goto' or 'skip' */
		IfNotBlocked
		_m = 3; goto P999;
	case 2: /* generic 'else' */
		IfNotBlocked
		if (trpt->o_pm&1) continue;
		_m = 3; goto P999;

		 /* PROC Consumer */
	case 3: // STATE 1 - p22-9349_pc.pml:10 - [((isFull>0))] (8:0:1 - 1)
		IfNotBlocked
		reached[1][1] = 1;
		if (!((now.isFull>0)))
			continue;
		/* merge: isFull = (isFull-1)(0, 2, 8) */
		reached[1][2] = 1;
		(trpt+1)->bup.oval = now.isFull;
		now.isFull = (now.isFull-1);
#ifdef VAR_RANGES
		logval("isFull", now.isFull);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 4: // STATE 5 - p22-9349_pc.pml:10 - [((mutex>0))] (9:0:1 - 1)
		IfNotBlocked
		reached[1][5] = 1;
		if (!((now.mutex>0)))
			continue;
		/* merge: mutex = (mutex-1)(0, 6, 9) */
		reached[1][6] = 1;
		(trpt+1)->bup.oval = now.mutex;
		now.mutex = (now.mutex-1);
#ifdef VAR_RANGES
		logval("mutex", now.mutex);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 5: // STATE 9 - p22-9349_pc.pml:40 - [buffer?item] (0:0:1 - 1)
		reached[1][9] = 1;
		if (q_len(now.buffer) == 0) continue;

		XX=1;
		(trpt+1)->bup.oval = ((P1 *)_this)->item;
		;
		((P1 *)_this)->item = qrecv(now.buffer, XX-1, 0, 1);
#ifdef VAR_RANGES
		logval("Consumer:item", ((P1 *)_this)->item);
#endif
		;
		
#ifdef HAS_CODE
		if (readtrail && gui) {
			char simtmp[32];
			sprintf(simvals, "%d?", now.buffer);
		sprintf(simtmp, "%d", ((P1 *)_this)->item); strcat(simvals, simtmp);		}
#endif
		;
		_m = 4; goto P999; /* 0 */
	case 6: // STATE 10 - p22-9349_pc.pml:41 - [printf('Consumed by Consumer %d: %d\\n',_pid,item)] (0:0:0 - 1)
		IfNotBlocked
		reached[1][10] = 1;
		Printf("Consumed by Consumer %d: %d\n", ((int)((P1 *)_this)->_pid), ((P1 *)_this)->item);
		_m = 3; goto P999; /* 0 */
	case 7: // STATE 11 - p22-9349_pc.pml:11 - [((mutex<5))] (18:0:1 - 1)
		IfNotBlocked
		reached[1][11] = 1;
		if (!((now.mutex<5)))
			continue;
		/* merge: mutex = (mutex+1)(0, 12, 18) */
		reached[1][12] = 1;
		(trpt+1)->bup.oval = now.mutex;
		now.mutex = (now.mutex+1);
#ifdef VAR_RANGES
		logval("mutex", now.mutex);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 8: // STATE 15 - p22-9349_pc.pml:11 - [((isEmpty<5))] (19:0:1 - 1)
		IfNotBlocked
		reached[1][15] = 1;
		if (!((now.isEmpty<5)))
			continue;
		/* merge: isEmpty = (isEmpty+1)(0, 16, 19) */
		reached[1][16] = 1;
		(trpt+1)->bup.oval = now.isEmpty;
		now.isEmpty = (now.isEmpty+1);
#ifdef VAR_RANGES
		logval("isEmpty", now.isEmpty);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 9: // STATE 19 - p22-9349_pc.pml:47 - [sync!1] (0:0:0 - 1)
		IfNotBlocked
		reached[1][19] = 1;
		if (q_full(now.sync))
			continue;
#ifdef HAS_CODE
		if (readtrail && gui) {
			char simtmp[64];
			sprintf(simvals, "%d!", now.sync);
		sprintf(simtmp, "%d", 1); strcat(simvals, simtmp);		}
#endif
		
		qsend(now.sync, 0, 1, 1);
		_m = 2; goto P999; /* 0 */
	case 10: // STATE 20 - p22-9349_pc.pml:49 - [sync?1] (0:0:0 - 1)
		reached[1][20] = 1;
		if (q_len(now.sync) == 0) continue;

		XX=1;
		if (1 != qrecv(now.sync, 0, 0, 0)) continue;
		
#ifndef BFS_PAR
		if (q_flds[((Q0 *)qptr(now.sync-1))->_t] != 1)
			Uerror("wrong nr of msg fields in rcv");
#endif
		;
		qrecv(now.sync, XX-1, 0, 1);
		
#ifdef HAS_CODE
		if (readtrail && gui) {
			char simtmp[32];
			sprintf(simvals, "%d?", now.sync);
		sprintf(simtmp, "%d", 1); strcat(simvals, simtmp);		}
#endif
		;
		_m = 4; goto P999; /* 0 */
	case 11: // STATE 27 - p22-9349_pc.pml:52 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[1][27] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */

		 /* PROC Producer */
	case 12: // STATE 1 - p22-9349_pc.pml:16 - [item = 1] (0:0:1 - 1)
		IfNotBlocked
		reached[0][1] = 1;
		(trpt+1)->bup.oval = ((P0 *)_this)->item;
		((P0 *)_this)->item = 1;
#ifdef VAR_RANGES
		logval("Producer:item", ((P0 *)_this)->item);
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 13: // STATE 2 - p22-9349_pc.pml:16 - [((item<100))] (5:0:1 - 1)
		IfNotBlocked
		reached[0][2] = 1;
		if (!((((P0 *)_this)->item<100)))
			continue;
		/* merge: item = (item+1)(0, 3, 5) */
		reached[0][3] = 1;
		(trpt+1)->bup.oval = ((P0 *)_this)->item;
		((P0 *)_this)->item = (((P0 *)_this)->item+1);
#ifdef VAR_RANGES
		logval("Producer:item", ((P0 *)_this)->item);
#endif
		;
		/* merge: .(goto)(0, 6, 5) */
		reached[0][6] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 14: // STATE 8 - p22-9349_pc.pml:10 - [((isEmpty>0))] (15:0:1 - 1)
		IfNotBlocked
		reached[0][8] = 1;
		if (!((now.isEmpty>0)))
			continue;
		/* merge: isEmpty = (isEmpty-1)(0, 9, 15) */
		reached[0][9] = 1;
		(trpt+1)->bup.oval = now.isEmpty;
		now.isEmpty = (now.isEmpty-1);
#ifdef VAR_RANGES
		logval("isEmpty", now.isEmpty);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 15: // STATE 12 - p22-9349_pc.pml:10 - [((mutex>0))] (16:0:1 - 1)
		IfNotBlocked
		reached[0][12] = 1;
		if (!((now.mutex>0)))
			continue;
		/* merge: mutex = (mutex-1)(0, 13, 16) */
		reached[0][13] = 1;
		(trpt+1)->bup.oval = now.mutex;
		now.mutex = (now.mutex-1);
#ifdef VAR_RANGES
		logval("mutex", now.mutex);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 16: // STATE 16 - p22-9349_pc.pml:20 - [buffer!item] (0:0:0 - 1)
		IfNotBlocked
		reached[0][16] = 1;
		if (q_full(now.buffer))
			continue;
#ifdef HAS_CODE
		if (readtrail && gui) {
			char simtmp[64];
			sprintf(simvals, "%d!", now.buffer);
		sprintf(simtmp, "%d", ((P0 *)_this)->item); strcat(simvals, simtmp);		}
#endif
		
		qsend(now.buffer, 0, ((P0 *)_this)->item, 1);
		_m = 2; goto P999; /* 0 */
	case 17: // STATE 17 - p22-9349_pc.pml:21 - [printf('Produced by Producer %d: %d\\n',_pid,item)] (0:0:0 - 1)
		IfNotBlocked
		reached[0][17] = 1;
		Printf("Produced by Producer %d: %d\n", ((int)((P0 *)_this)->_pid), ((P0 *)_this)->item);
		_m = 3; goto P999; /* 0 */
	case 18: // STATE 18 - p22-9349_pc.pml:11 - [((mutex<5))] (25:0:1 - 1)
		IfNotBlocked
		reached[0][18] = 1;
		if (!((now.mutex<5)))
			continue;
		/* merge: mutex = (mutex+1)(0, 19, 25) */
		reached[0][19] = 1;
		(trpt+1)->bup.oval = now.mutex;
		now.mutex = (now.mutex+1);
#ifdef VAR_RANGES
		logval("mutex", now.mutex);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 19: // STATE 22 - p22-9349_pc.pml:11 - [((isFull<5))] (26:0:1 - 1)
		IfNotBlocked
		reached[0][22] = 1;
		if (!((now.isFull<5)))
			continue;
		/* merge: isFull = (isFull+1)(0, 23, 26) */
		reached[0][23] = 1;
		(trpt+1)->bup.oval = now.isFull;
		now.isFull = (now.isFull+1);
#ifdef VAR_RANGES
		logval("isFull", now.isFull);
#endif
		;
		_m = 3; goto P999; /* 1 */
	case 20: // STATE 26 - p22-9349_pc.pml:27 - [sync!1] (0:0:0 - 1)
		IfNotBlocked
		reached[0][26] = 1;
		if (q_full(now.sync))
			continue;
#ifdef HAS_CODE
		if (readtrail && gui) {
			char simtmp[64];
			sprintf(simvals, "%d!", now.sync);
		sprintf(simtmp, "%d", 1); strcat(simvals, simtmp);		}
#endif
		
		qsend(now.sync, 0, 1, 1);
		_m = 2; goto P999; /* 0 */
	case 21: // STATE 27 - p22-9349_pc.pml:29 - [sync?1] (0:0:0 - 1)
		reached[0][27] = 1;
		if (q_len(now.sync) == 0) continue;

		XX=1;
		if (1 != qrecv(now.sync, 0, 0, 0)) continue;
		
#ifndef BFS_PAR
		if (q_flds[((Q0 *)qptr(now.sync-1))->_t] != 1)
			Uerror("wrong nr of msg fields in rcv");
#endif
		;
		qrecv(now.sync, XX-1, 0, 1);
		
#ifdef HAS_CODE
		if (readtrail && gui) {
			char simtmp[32];
			sprintf(simvals, "%d?", now.sync);
		sprintf(simtmp, "%d", 1); strcat(simvals, simtmp);		}
#endif
		;
		_m = 4; goto P999; /* 0 */
	case 22: // STATE 34 - p22-9349_pc.pml:32 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[0][34] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */
	case  _T5:	/* np_ */
		if (!((!(trpt->o_pm&4) && !(trpt->tau&128))))
			continue;
		/* else fall through */
	case  _T2:	/* true */
		_m = 3; goto P999;
#undef rand
	}

