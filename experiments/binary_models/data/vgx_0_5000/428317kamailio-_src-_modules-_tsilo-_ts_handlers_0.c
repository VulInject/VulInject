int ts_set_tm_callbacks(struct cell *t, sip_msg_t *req, ts_transaction_t *ts)
{
ts_transaction_t* ts_clone;

if(t==NULL)
return -1;

if ( (ts_clone=clone_ts_transaction(ts)) == NULL ) {
LM_ERR("failed to clone transaction\n");
return -1;
}

if ( _tmb.register_tmcb( req, t,TMCB_DESTROY,
ts_onreply, (void*)ts_clone, free_ts_transaction)<0 ) {
LM_ERR("failed to register TMCB for transaction %d:%d\n", t->hash_index, t->label);
return -1;
}
LM_DBG("registered TMCB for transaction %d:%d\n", ts_clone->tindex, ts_clone->tlabel);

return 0;
}