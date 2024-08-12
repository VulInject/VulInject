char *
FUN1( VAR1 *VAR2 )
{
struct VAR3		*VAR4;
char			*VAR5;
int			VAR6;
struct sockaddr_in	VAR7;

(void)memset( (char *)&VAR7, 0, sizeof( struct VAR8 ));
VAR6 = sizeof( VAR7 );
if ( FUN2( VAR2->VAR9, (struct VAR10 *)&VAR7, &VAR6 ) == -1 ) {
return( NULL );
}


if (( VAR4 = gethostbyaddr((char *) &VAR7.VAR11, 
sizeof( VAR7.VAR11 ), VAR12)) != NULL ) {
if ( VAR4->VAR13 != NULL ) {
return( FUN3( VAR4->VAR13 ));
}
}

return( NULL );
}