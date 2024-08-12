static void
FUN1(char *VAR1, VAR2 **VAR3, int VAR4, int VAR5)
{
boolean	VAR6;
int	VAR7;	

if (!FUN2(VAR1)) {
VAR6 = VAR8;
VAR7 = VAR9;
} else {
VAR6 = FUN3(VAR5, VAR3, VAR4);
VAR7 = FUN4(VAR1);
}

if (VAR7 != VAR9)
VAR10[VAR4] = VAR11;

if (VAR6 && (VAR7 == VAR9))
return;

FUN5(VAR1, VAR7, VAR3, VAR4, VAR6, VAR5);

if (VAR7 == VAR12) {

FUN6(1);
}
}