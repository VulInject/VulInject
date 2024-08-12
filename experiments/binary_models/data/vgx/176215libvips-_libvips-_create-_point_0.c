static int
FUN1( VAR1 *or, void *VAR2, void *VAR3, void *VAR4,
VAR5 *VAR6 )
{
VAR7 *VAR8 = (VAR7 *) VAR3;
VAR9 *class = FUN2( VAR8 ); 
VAR10 *VAR11 = &or->VAR12;

int VAR13, VAR14;

for( VAR14 = 0; VAR14 < VAR11->VAR15; VAR14++ ) {
int VAR16 = VAR11->VAR17 + VAR14;
float *VAR18 = (float *) FUN3( or, VAR11->VAR19, VAR16 ); 

for( VAR13 = 0; VAR13 < VAR11->VAR20; VAR13++ ) 
VAR18[VAR13] = class->FUN4( VAR8, VAR11->VAR19 + VAR13, VAR16 ); 
}

return( 0 );
}