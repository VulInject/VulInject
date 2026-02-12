




}





static leakyBucket_t buckets[ MAX_BUCKETS ];
static leakyBucket_t *bucketHashes[ MAX_HASHES ];
leakyBucket_t outboundLeakyBucket;


static long SVC_HashForAddress( netadr_t address ) {
byte 		*ip = NULL;
size_t	size = 0;
int			i;
long		hash = 0;

switch ( address.type ) {
case NA_IP:  ip = address.ip;  size = 4; break;
case NA_IP6: ip = address.ip6; size = 16; break;
default: break;
}

for ( i = 0; i < size; i++ ) {
hash += (long)( ip[ i ] ) * ( i + 119 );
}

hash = ( hash ^ ( hash >> 10 ) ^ ( hash >> 20 ) );
hash &= ( MAX_HASHES - 1 );

return hash;
}