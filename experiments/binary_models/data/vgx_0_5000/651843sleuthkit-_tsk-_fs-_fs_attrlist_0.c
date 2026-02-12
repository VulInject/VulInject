int
tsk_fs_attrlist_get_len(const TSK_FS_ATTRLIST * a_fs_attrlist)
{
TSK_FS_ATTR *fs_attr_cur;
int len = 0;

if (!a_fs_attrlist) {
tsk_error_reset();
tsk_error_set_errno(TSK_ERR_FS_ARG);
tsk_error_set_errstr("tsk_fs_attrlist_get_len: Null list pointer");
return 0;
}

for (fs_attr_cur = a_fs_attrlist->head; fs_attr_cur;
fs_attr_cur = fs_attr_cur->next) {
if (fs_attr_cur->flags & TSK_FS_ATTR_INUSE)
len++;
}
return len;
}