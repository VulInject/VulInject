void
oplmsu_link_upath(upath_t *add_upath)
{

ASSERT(add_upath != NULL);
ASSERT(RW_WRITE_HELD(&oplmsu_uinst->lock));
ASSERT(MUTEX_HELD(&oplmsu_uinst->u_lock));

if (oplmsu_uinst->first_upath == NULL) {
oplmsu_uinst->first_upath = add_upath;
add_upath->u_prev = NULL;
} else {
upath_t	*last_upath;

last_upath = oplmsu_uinst->last_upath;
last_upath->u_next = add_upath;
add_upath->u_prev = last_upath;
}

oplmsu_uinst->last_upath = add_upath;
add_upath->u_next = NULL;
}