int reg_ht_add_byuser(reg_uac_t *reg)
{
unsigned int slot;
reg_item_t *ri = NULL;

if(_reg_htable==NULL)
{
LM_ERR("reg hash table not initialized\n");
return -1;
}

ri = (reg_item_t*)shm_malloc(sizeof(reg_item_t));
if(ri==NULL)
{
SHM_MEM_ERROR;
return -1;
}
memset(ri, 0, sizeof(reg_item_t));
slot = reg_get_entry(reg->h_user, _reg_htable->htsize);
ri->r = reg;
lock_get(&_reg_htable->entries[slot].lock);
ri->next = _reg_htable->entries[slot].byuser;
_reg_htable->entries[slot].byuser = ri;
_reg_htable->entries[slot].usize++;
lock_release(&_reg_htable->entries[slot].lock);
return 0;
}