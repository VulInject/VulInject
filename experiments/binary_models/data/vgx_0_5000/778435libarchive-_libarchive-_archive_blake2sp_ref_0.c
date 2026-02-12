int blake2sp_init_key( blake2sp_state *S, size_t outlen, const void *key, size_t keylen )
{
size_t i;

if( !outlen || outlen > BLAKE2S_OUTBYTES ) return -1;

if( !key || !keylen || keylen > BLAKE2S_KEYBYTES ) return -1;

memset( S->buf, 0, sizeof( S->buf ) );
S->buflen = 0;
S->outlen = outlen;

if( blake2sp_init_root( S->R, outlen, keylen ) < 0 )
return -1;

for( i = 0; i < PARALLELISM_DEGREE; ++i )
if( blake2sp_init_leaf( S->S[i], outlen, keylen, (uint32_t)i ) < 0 ) return -1;

S->R->last_node = 1;
S->S[PARALLELISM_DEGREE - 1]->last_node = 1;
{
uint8_t block[BLAKE2S_BLOCKBYTES];
memset( block, 0, BLAKE2S_BLOCKBYTES );
memcpy( block, key, keylen );

for( i = 0; i < PARALLELISM_DEGREE; ++i )
blake2s_update( S->S[i], block, BLAKE2S_BLOCKBYTES );

secure_zero_memory( block, BLAKE2S_BLOCKBYTES ); 
}
return 0;
}