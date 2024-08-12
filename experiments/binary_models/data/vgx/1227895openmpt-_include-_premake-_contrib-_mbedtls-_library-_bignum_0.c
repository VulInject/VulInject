int FUN1( int VAR1 )
{
int VAR2, VAR3;
mbedtls_mpi VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;

FUN2( &VAR4 ); FUN2( &VAR5 ); FUN2( &VAR6 ); FUN2( &VAR7 );
FUN2( &VAR8 ); FUN2( &VAR9 ); FUN2( &VAR10 );

FUN3( FUN4( &VAR4, 16,
"" \
"" \
"" \
"" ) );

FUN3( FUN4( &VAR5, 16,
"" \
"" \
"" \
"" ) );

FUN3( FUN4( &VAR6, 16,
"" \
"" \
"" ) );

FUN3( FUN5( &VAR7, &VAR4, &VAR6 ) );

FUN3( FUN4( &VAR9, 16,
"" \
"" \
"" \
"" \
"" \
"" \
"" ) );

if( VAR1 != 0 )
FUN6( "" );

if( FUN7( &VAR7, &VAR9 ) != 0 )
{
if( VAR1 != 0 )
FUN6( "" );

VAR2 = 1;
goto VAR11;
}

if( VAR1 != 0 )
FUN6( "" );

FUN3( FUN8( &VAR7, &VAR8, &VAR4, &VAR6 ) );

FUN3( FUN4( &VAR9, 16,
"" ) );

FUN3( FUN4( &VAR10, 16,
"" \
"" \
"" ) );

if( VAR1 != 0 )
FUN6( "" );

if( FUN7( &VAR7, &VAR9 ) != 0 ||
FUN7( &VAR8, &VAR10 ) != 0 )
{
if( VAR1 != 0 )
FUN6( "" );

VAR2 = 1;
goto VAR11;
}

if( VAR1 != 0 )
FUN6( "" );

FUN3( FUN9( &VAR7, &VAR4, &VAR5, &VAR6, NULL ) );

FUN3( FUN4( &VAR9, 16,
"" \
"" \
"" ) );

if( VAR1 != 0 )
FUN6( "" );

if( FUN7( &VAR7, &VAR9 ) != 0 )
{
if( VAR1 != 0 )
FUN6( "" );

VAR2 = 1;
goto VAR11;
}

if( VAR1 != 0 )
FUN6( "" );

FUN3( FUN10( &VAR7, &VAR4, &VAR6 ) );

FUN3( FUN4( &VAR9, 16,
"" \
"" \
"" ) );

if( VAR1 != 0 )
FUN6( "" );

if( FUN7( &VAR7, &VAR9 ) != 0 )
{
if( VAR1 != 0 )
FUN6( "" );

VAR2 = 1;
goto VAR11;
}

if( VAR1 != 0 )
FUN6( "" );

if( VAR1 != 0 )
FUN6( "" );

for( VAR3 = 0; VAR3 < VAR12; VAR3++ )
{
FUN3( FUN11( &VAR7, VAR13[VAR3][0] ) );
FUN3( FUN11( &VAR8, VAR13[VAR3][1] ) );

FUN3( FUN12( &VAR4, &VAR7, &VAR8 ) );

if( FUN13( &VAR4, VAR13[VAR3][2] ) != 0 )
{
if( VAR1 != 0 )
FUN6( "", VAR3 );

VAR2 = 1;
goto VAR11;
}
}

if( VAR1 != 0 )
FUN6( "" );

VAR11:

if( VAR2 != 0 && VAR1 != 0 )
FUN6( "", (unsigned int) VAR2 );

FUN14( &VAR4 ); FUN14( &VAR5 ); FUN14( &VAR6 ); FUN14( &VAR7 );
FUN14( &VAR8 ); FUN14( &VAR9 ); FUN14( &VAR10 );

if( VAR1 != 0 )
FUN6( "" );

return( VAR2 );
}