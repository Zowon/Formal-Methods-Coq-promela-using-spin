	switch (t->back) {
	default: Uerror("bad return move");
	case  0: goto R999; /* nothing to undo */

		 /* PROC Consumer */

	case 3: // STATE 2
		;
		now.isFull = trpt->bup.oval;
		;
		goto R999;

	case 4: // STATE 6
		;
		now.mutex = trpt->bup.oval;
		;
		goto R999;

	case 5: // STATE 9
		;
		XX = 1;
		unrecv(now.buffer, XX-1, 0, ((P1 *)_this)->item, 1);
		((P1 *)_this)->item = trpt->bup.oval;
		;
		;
		goto R999;
;
		;
		
	case 7: // STATE 12
		;
		now.mutex = trpt->bup.oval;
		;
		goto R999;

	case 8: // STATE 16
		;
		now.isEmpty = trpt->bup.oval;
		;
		goto R999;

	case 9: // STATE 19
		;
		_m = unsend(now.sync);
		;
		goto R999;

	case 10: // STATE 20
		;
		XX = 1;
		unrecv(now.sync, XX-1, 0, 1, 1);
		;
		;
		goto R999;

	case 11: // STATE 27
		;
		p_restor(II);
		;
		;
		goto R999;

		 /* PROC Producer */

	case 12: // STATE 1
		;
		((P0 *)_this)->item = trpt->bup.oval;
		;
		goto R999;

	case 13: // STATE 3
		;
		((P0 *)_this)->item = trpt->bup.oval;
		;
		goto R999;

	case 14: // STATE 9
		;
		now.isEmpty = trpt->bup.oval;
		;
		goto R999;

	case 15: // STATE 13
		;
		now.mutex = trpt->bup.oval;
		;
		goto R999;

	case 16: // STATE 16
		;
		_m = unsend(now.buffer);
		;
		goto R999;
;
		;
		
	case 18: // STATE 19
		;
		now.mutex = trpt->bup.oval;
		;
		goto R999;

	case 19: // STATE 23
		;
		now.isFull = trpt->bup.oval;
		;
		goto R999;

	case 20: // STATE 26
		;
		_m = unsend(now.sync);
		;
		goto R999;

	case 21: // STATE 27
		;
		XX = 1;
		unrecv(now.sync, XX-1, 0, 1, 1);
		;
		;
		goto R999;

	case 22: // STATE 34
		;
		p_restor(II);
		;
		;
		goto R999;
	}

