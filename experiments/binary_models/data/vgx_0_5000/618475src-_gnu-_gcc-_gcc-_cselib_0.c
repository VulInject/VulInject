new_cselib_val (unsigned int value, enum machine_mode mode)
{
cselib_val *e = pool_alloc (cselib_val_pool);

gcc_assert (value);

e->value = value;

e->u.val_rtx = pool_alloc (value_pool);
memset (e->u.val_rtx, 0, RTX_HDR_SIZE);
PUT_CODE (e->u.val_rtx, VALUE);
PUT_MODE (e->u.val_rtx, mode);
CSELIB_VAL_PTR (e->u.val_rtx) = e;
e->addr_list = 0;
e->locs = 0;
e->next_containing_mem = 0;
return e;
}