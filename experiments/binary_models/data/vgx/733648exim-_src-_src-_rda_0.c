static int
FUN1(VAR1 *VAR2, VAR1 **VAR3)
{
int VAR4, VAR5;
struct stat VAR6;
VAR1 * VAR7;

if ((VAR4 = FUN2(VAR2, &VAR6)) >= 0) return VAR8;
VAR5 = VAR9;

VAR7 = FUN3(VAR2);
VAR10 = VAR11;

if (VAR5 == VAR12)
{
VAR1 * VAR13 = FUN4(VAR7, '');
FUN5(VAR13+1, VAR14"");

FUN6(30);
VAR4 = FUN2(VAR7, &VAR6);
if (VAR4 != 0 && VAR9 == VAR15 && !VAR10)
{
*VAR13 = 0;
VAR4 = FUN2(VAR7, &VAR6);
}
VAR5 = VAR9;
FUN7(0);

FUN8(VAR16) FUN9("", VAR7, VAR4);
}

if (VAR10 || VAR4 != 0)
{
*VAR3 = FUN10("", VAR7,
VAR10?  "" : strerror(VAR5));
return VAR17;
}

*VAR3 = FUN10("", VAR2);
FUN8(VAR16) FUN9("", *VAR3);
return VAR18;
}