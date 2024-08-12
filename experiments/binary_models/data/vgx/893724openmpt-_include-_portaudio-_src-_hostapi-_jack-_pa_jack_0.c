static void FUN1( void *VAR1 )
{
VAR2 *VAR3 = (VAR2 *)VAR1;
VAR4 *VAR5 = VAR3->VAR6;

FUN2(( "", VAR7 ));
for( ; VAR5; VAR5 = VAR5->VAR8 )
{
VAR5->VAR9 = 0;
}


FUN3( pthread_mutex_lock( &VAR3->VAR10 ), 0 );
VAR3->VAR11 = 1;
FUN3( FUN4( &VAR3->VAR12 ), 0 );
FUN3( pthread_mutex_unlock( &VAR3->VAR10 ), 0 );

}