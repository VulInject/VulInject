const char *
FUN1(
time_t	VAR1,
long	VAR2,
int	VAR3
)
{
char *		VAR4;
u_int		VAR5;
u_time		VAR6;
u_int		VAR7;
long		VAR8;
int		VAR9;	
ldiv_t		VAR10;

FUN2(VAR3 != 0);

FUN3(VAR4);
VAR6 = (VAR11)VAR1;


VAR9 = (VAR3 < 0);
VAR5 = FUN4(VAR3);

for (VAR8 = 10, VAR7 = 1; VAR7 < VAR5; VAR7++) {
FUN5(VAR8 < VAR8 * 10);
VAR8 *= 10;
}


if (VAR2 < 0 || VAR2 >= VAR8) {
VAR10 = FUN6(VAR2, VAR8);
if (VAR10.VAR12 < 0) {
VAR10.VAR13--;
VAR10.VAR12 += VAR8;
}
VAR6 += (VAR14)VAR10.VAR13;
VAR2 = VAR10.VAR12;
}


VAR9 = VAR9 || ((VAR14)VAR6 >= 0);
if (!VAR9) {
VAR6 = ~VAR6;
if (0 == VAR2)
VAR6++;
else
VAR2 = VAR8 - VAR2;
}


snprintf(VAR4, VAR15, "" VAR16 "",
VAR9? "" : "", VAR6, VAR5, VAR2);

return VAR4;
}