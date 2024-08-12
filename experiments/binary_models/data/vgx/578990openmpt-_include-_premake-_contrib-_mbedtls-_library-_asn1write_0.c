int FUN1( unsigned char **VAR1, unsigned char *VAR2, size_t VAR3 )
{
if( VAR3 < 0x80 )
{
if( *VAR1 - VAR2 < 1 )
return( VAR4 );

*--(*VAR1) = (unsigned char) VAR3;
return( 1 );
}

if( VAR3 <= 0xFF )
{
if( *VAR1 - VAR2 < 2 )
return( VAR4 );

*--(*VAR1) = (unsigned char) VAR3;
*--(*VAR1) = 0x81;
return( 2 );
}

if( VAR3 <= 0xFFFF )
{
if( *VAR1 - VAR2 < 3 )
return( VAR4 );

*--(*VAR1) = ( VAR3       ) & 0xFF;
*--(*VAR1) = ( VAR3 >>  8 ) & 0xFF;
*--(*VAR1) = 0x82;
return( 3 );
}

if( VAR3 <= 0xFFFFFF )
{
if( *VAR1 - VAR2 < 4 )
return( VAR4 );

*--(*VAR1) = ( VAR3       ) & 0xFF;
*--(*VAR1) = ( VAR3 >>  8 ) & 0xFF;
*--(*VAR1) = ( VAR3 >> 16 ) & 0xFF;
*--(*VAR1) = 0x83;
return( 4 );
}

if( VAR3 <= 0xFFFFFFFF )
{
if( *VAR1 - VAR2 < 5 )
return( VAR4 );

*--(*VAR1) = ( VAR3       ) & 0xFF;
*--(*VAR1) = ( VAR3 >>  8 ) & 0xFF;
*--(*VAR1) = ( VAR3 >> 16 ) & 0xFF;
*--(*VAR1) = ( VAR3 >> 24 ) & 0xFF;
*--(*VAR1) = 0x84;
return( 5 );
}

return( VAR5 );
}