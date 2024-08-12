long double VAR1
FUN1(long double VAR2, long double _Complex VAR3)
{
long double _Complex	VAR4 = 0;
long double		VAR5, VAR6, VAR7;

VAR5 = ((long double *)&VAR3)[0];
VAR6 = ((long double *)&VAR3)[1];
VAR7 = VAR2 / (VAR5 * VAR5 + VAR6 * VAR6);
((long double *)&VAR4)[0] = VAR7 * VAR5;
((long double *)&VAR4)[1] = VAR7 * -VAR6;
return (VAR4);
}