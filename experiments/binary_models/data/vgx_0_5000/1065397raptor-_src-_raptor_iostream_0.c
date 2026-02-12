int
raptor_iostream_write_bytes(const void *ptr, size_t size, size_t nmemb,
raptor_iostream *iostr)
{
int nobj;

if(iostr->flags & RAPTOR_IOSTREAM_FLAGS_EOF)
return -1;
if(!iostr->handler->write_bytes)
return -1;
if(!(iostr->mode & RAPTOR_IOSTREAM_MODE_WRITE))
return -1;

nobj = iostr->handler->write_bytes(iostr->user_data, ptr, size, nmemb);
if(nobj > 0)
iostr->offset += (size * nobj);

return nobj;
}