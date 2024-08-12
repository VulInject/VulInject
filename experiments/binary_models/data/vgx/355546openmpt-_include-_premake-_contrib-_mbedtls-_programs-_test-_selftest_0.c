int main( int argc, char *argv[] )
{
const VAR1 *VAR2;
char **VAR3;
int VAR4 = 1; 
int VAR5 = 0;
int VAR6 = 0, VAR7 = 0;
unsigned char VAR8[1000000];
void *VAR9;


memset( &VAR9, 0, sizeof( void * ) );
if( VAR9 != NULL )
{
FUN1( "" );
FUN2( VAR10 );
}


if( FUN3() != 0 )
{
FUN1( "" );
FUN2( VAR10 );
}

for( VAR3 = argv + ( argc >= 1 ? 1 : argc ); *VAR3 != NULL; ++VAR3 )
{
if( strcmp( *VAR3, "" ) == 0 ||
strcmp( *VAR3, "" ) == 0 )
{
VAR4 = 0;
}
else if( strcmp( *VAR3, "" ) == 0 ||
strcmp( *VAR3, "" ) == 0 )
{
VAR5 = 1;
}
else
break;
}

if( VAR4 != 0 )
FUN1( "" );


FUN4( VAR8, sizeof(VAR8) );

if( *VAR3 != NULL && VAR5 == 0 )
{

for( ; *VAR3 != NULL; VAR3++ )
{
for( VAR2 = VAR11; VAR2->VAR12 != NULL; VAR2++ )
{
if( !strcmp( *VAR3, VAR2->VAR12 ) )
{
if( VAR2->FUN5( VAR4 )  != 0 )
{
VAR7++;
}
VAR6++;
break;
}
}
if( VAR2->VAR12 == NULL )
{
FUN1( "", *VAR3 );
VAR7++;
}
}
}
else
{

for( VAR2 = VAR11; VAR2->VAR12 != NULL; VAR2++ )
{
if( VAR5 )
{
char **VAR13;
for( VAR13 = VAR3; *VAR13 != NULL; ++VAR13 )
{
if( !strcmp( *VAR13, VAR2->VAR12 ) )
break;
}
if( *VAR13 )
{
if( VAR4 )
FUN1( "", VAR2->VAR12 );
continue;
}
}
if( VAR2->FUN5( VAR4 )  != 0 )
{
VAR7++;
}
VAR6++;
}
}

(void) VAR5;
FUN1( "" );

if( VAR4 != 0 )
{
FUN1( "", VAR6 );

if( VAR7 > 0)
{
FUN1( "", VAR7 );
}
else
{
FUN1( "" );
}
FUN1( "" );
FUN6( VAR14 ); getchar();
}

if( VAR7 > 0)
FUN2( VAR10 );

FUN2( VAR15 );
}