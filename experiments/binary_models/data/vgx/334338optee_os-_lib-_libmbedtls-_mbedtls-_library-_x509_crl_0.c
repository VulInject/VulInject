int FUN1( VAR1 *VAR2, const unsigned char *VAR3, size_t VAR4 )
{
int VAR5 = VAR6;
size_t VAR7 = 0;
mbedtls_pem_context VAR8;
int VAR9 = 0;

if( VAR2 == NULL || VAR3 == NULL )
return( VAR10 );

do
{
FUN2( &VAR8 );



if( VAR4 == 0 || VAR3[VAR4 - 1] != '' )
VAR5 = VAR11;
else
VAR5 = FUN3( &VAR8,
"",
"",
VAR3, NULL, 0, &VAR7 );

if( VAR5 == 0 )
{

VAR9 = 1;

VAR4 -= VAR7;
VAR3 += VAR7;

if( ( VAR5 = FUN4( VAR2,
VAR8.VAR3, VAR8.VAR4 ) ) != 0 )
{
FUN5( &VAR8 );
return( VAR5 );
}
}
else if( VAR9 )
{
FUN5( &VAR8 );
return( VAR5 );
}

FUN5( &VAR8 );
}

while( VAR9 && VAR4 > 1 );

if( VAR9 )
return( 0 );
else
return( FUN4( VAR2, VAR3, VAR4 ) );
}