static void 
FUN1( VAR1 *VAR2,
int VAR3, int VAR4, int VAR5, int VAR6, void *VAR7 )
{
int VAR8 = *((int *) VAR7); 
int VAR9 = VAR2->VAR10;

if( VAR3 >= 0 &&
VAR3 < VAR2->VAR11 ) {
VAR12 *VAR13 = (VAR12 *) FUN2( VAR2, 0, VAR3 ) + VAR8;

if( VAR4 >=0 &&
VAR4 < VAR2->VAR14 )
VAR13[VAR4 * VAR9] += 1;
if( VAR5 >=0 &&
VAR5 < VAR2->VAR14 )
VAR13[VAR5 * VAR9] += 1;
}
}