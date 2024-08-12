FUN1 (double *VAR1, double VAR2, int VAR3)
{	int		VAR4, VAR5 ;
double	VAR6 = 0.0 ;

VAR5 = VAR7 ;

for (VAR4 = 0 ; VAR4 < VAR3 ; VAR4++)
{	if (VAR4 <= VAR5)
VAR6 = VAR2 * VAR4 / ((double) VAR5) ;
else if (VAR4 > VAR3 - VAR5)
VAR6 = VAR2 * (VAR3 - VAR4) / ((double) VAR5) ;

VAR1 [VAR4] = VAR6 * (0.4 * FUN2 (33.3 * 2.0 * VAR8 * ((double) (VAR4+1)) / ((double) VAR9))
+ 0.3 * FUN3 (201.1 * 2.0 * VAR8 * ((double) (VAR4+1)) / ((double) VAR9))) ;
} ;

return ;
}