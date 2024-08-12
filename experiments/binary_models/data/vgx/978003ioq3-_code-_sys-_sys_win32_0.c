char *FUN1( void )
{
static char VAR1[1024];
unsigned long VAR2 = sizeof( VAR1 );

if( !FUN2( VAR1, &VAR2 ) )
strcpy( VAR1, "" );

if( !VAR1[0] )
{
strcpy( VAR1, "" );
}

return VAR1;
}