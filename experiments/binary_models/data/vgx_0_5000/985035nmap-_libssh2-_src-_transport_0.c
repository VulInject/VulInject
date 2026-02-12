static int
decrypt(LIBSSH2_SESSION * session, unsigned char *source,
unsigned char *dest, int len)
{
struct transportpacket *p = &session->packet;
int blocksize = session->remote.crypt->blocksize;


assert((len % blocksize) == 0);

while(len >= blocksize) {
if(session->remote.crypt->crypt(session, source, blocksize,
&session->remote.crypt_abstract)) {
LIBSSH2_FREE(session, p->payload);
return LIBSSH2_ERROR_DECRYPT;
}


memcpy(dest, source, blocksize);

len -= blocksize;       
dest += blocksize;      
source += blocksize;    
}
return LIBSSH2_ERROR_NONE;         
}