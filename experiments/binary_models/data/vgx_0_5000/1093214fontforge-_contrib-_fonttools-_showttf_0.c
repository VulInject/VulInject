static void show_contextkerndata(uint8_t *entry,struct statetable *st,struct ttfinfo *info, FILE *ttf) {
int flags = (entry[2]<<8)|entry[3];
int offset = flags&0x3fff;
int i, k;

printf( "\t   Flags %04x ", (unsigned int)(flags) );
if ( flags&0x8000 )
printf( "Add to Kern Stack | ");
if ( flags&0x4000 )
printf( "Don't Advance Glyph" );
else
printf( "Advance Glyph" );
printf( ",  ValueOffset = %d\n", offset );
if ( offset!=0 ) {
printf( "Offset=%d, len=%d\n", offset, st->len );
fseek(ttf,offset+st->state_start,SEEK_SET);
printf( "Kerns: " );
for ( i=0; i<8; ++i ) {
printf( "%d ", (k = (short) getushort(ttf)) & ~1 );
if ( k&1 )	
break;
}
printf( "\n" );
}
}