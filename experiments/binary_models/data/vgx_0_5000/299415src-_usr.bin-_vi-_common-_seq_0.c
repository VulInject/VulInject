free(qp->input);
mem3:		free(qp->name);
mem2:		free(qp);
mem1:		errno = sv_errno;
msgq(sp, M_SYSERR, NULL);
return (1);
}
qp->olen = olen;


qp->stype = stype;
qp->flags = flags;


if (lastqp == NULL) {
LIST_INSERT_HEAD(&sp->gp->seqq, qp, q);
} else {
LIST_INSERT_AFTER(lastqp, qp, q);
}


if (qp->input[0] < MAX_BIT_SEQ)
bit_set(sp->gp->seqb, qp->input[0]);

return (0);
}