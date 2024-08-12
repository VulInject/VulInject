int FUN1( VAR1 *VAR2,
const unsigned char *VAR3,
size_t VAR4 )
{
int VAR5 = 0, VAR6 = 0, VAR7 = 0;
int VAR8 = VAR9;


if( VAR2 == NULL || VAR3 == NULL )
return( VAR10 );


if( VAR4 != 0 && VAR3[VAR4 - 1] == '' &&
strstr( (const char *) VAR3, "" ) != NULL )
{
VAR8 = VAR11;
}

if( VAR8 == VAR9 )
return FUN2( VAR2, VAR3, VAR4 );
return FUN2( VAR2, VAR3, VAR4 );

if( VAR8 == VAR11 )
{
int VAR12 = VAR13;
mbedtls_pem_context VAR14;


while( VAR4 > 1 )
{
size_t VAR15;
FUN3( &VAR14 );


VAR12 = FUN4( &VAR14,
"",
"",
VAR3, NULL, 0, &VAR15 );

if( VAR12 == 0 )
{

VAR4 -= VAR15;
VAR3 += VAR15;
}
else if( VAR12 == VAR16 )
{
return( VAR12 );
}
else if( VAR12 != VAR17 )
{
FUN5( &VAR14 );


VAR4 -= VAR15;
VAR3 += VAR15;

if( VAR6 == 0 )
VAR6 = VAR12;

VAR7++;
continue;
}
else
break;

VAR12 = FUN2( VAR2, VAR14.VAR3, VAR14.VAR4 );

FUN5( &VAR14 );

if( VAR12 != 0 )
{

if( VAR12 == VAR18 )
return( VAR12 );

if( VAR6 == 0 )
VAR6 = VAR12;

VAR7++;
continue;
}

VAR5 = 1;
}
}

if( VAR5 )
return( VAR7 );
else if( VAR6 )
return( VAR6 );
else
return( VAR19 );
}