static void FUN1( void *VAR1, int VAR2,
const char *VAR3, int VAR4,
const char *VAR5 )
{
long int VAR6 = (long int) FUN2();

FUN3( &VAR7 );

((void) VAR2);
FUN4( (VAR8 *) VAR1, "",
VAR3, VAR4, VAR6, VAR5 );
FUN5(  (VAR8 *) VAR1  );

FUN6( &VAR7 );
}

typedef struct {
mbedtls_net_context VAR9;
int VAR10;
const VAR11 *VAR12;
} VAR13;

typedef struct {
int VAR14;
thread_info_t   VAR15;
pthread_t       VAR16;
} VAR17;