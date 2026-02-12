boolean_t
nvf_node_data_set(char *name, void *data, uint_t dsize)
{
int		rval;

ASSERT(name != NULL);
ASSERT(data != NULL);

rw_enter(&nvf_list_lock, RW_WRITER);

if (nvf_list == NULL) {
rw_exit(&nvf_list_lock);
return (B_FALSE);
}


rval = nvlist_add_byte_array(nvf_list, name, (uchar_t *)data, dsize);
if (rval == 0) {

nvf_update();
} else {
cmn_err(CE_NOTE, "!iscsi persistent store failed "
"to store %s name (%d)", name, rval);
}

rw_exit(&nvf_list_lock);
return (rval == 0 ? B_TRUE : B_FALSE);
}