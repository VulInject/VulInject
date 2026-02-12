static int
trysend_req(door_arg_t *dargp, void *data_ptr, size_t data_size,
door_desc_t *desc_ptr, uint_t desc_num, void *rbuf, size_t rsize,
unsigned int trycount)
{
int	err;
int	write_locked;

write_locked = 0;
(void) rw_rdlock(&picl_lock);
if (refcnt == 0) {
(void) rw_unlock(&picl_lock);	
return (PICL_NOTINITIALIZED);
}

while ((err = post_req(dargp, data_ptr, data_size, desc_ptr, desc_num,
rbuf, rsize)) == PICL_NORESPONSE) {
if (trycount == 0)	
break;

if (write_locked == 1) {	
(void) close(door_handle);
if ((door_handle = open(PICLD_DOOR, O_RDONLY)) < 0) {
err = PICL_NORESPONSE;
break;
}
--trycount;
continue;
}

(void) rw_unlock(&picl_lock);
(void) rw_wrlock(&picl_lock);


if (refcnt == 0) {
err =  PICL_NOTINITIALIZED;
break;
}
write_locked = 1;
continue;
}
(void) rw_unlock(&picl_lock);	
return (err);
}