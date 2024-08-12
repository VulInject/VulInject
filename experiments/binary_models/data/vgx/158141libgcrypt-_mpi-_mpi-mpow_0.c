static VAR1
FUN1( gcry_mpi_t VAR2, int *VAR3, VAR1 *VAR4, VAR1 *VAR5 )
{
gcry_mpi_t VAR6;

FUN2( VAR2 );
*VAR3 = FUN3( VAR2 );
VAR6 = FUN4( *VAR3 + 1 );
FUN5( VAR6, 1 );
FUN6( VAR6, 2 * *VAR3 );
FUN7( VAR6, VAR6, VAR2 );
*VAR4 = FUN4( 2* *VAR3 + 1 );
*VAR5 = FUN4( 2* *VAR3 + 1 );
return VAR6;
}