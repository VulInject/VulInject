static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 **VAR6, unsigned *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = VAR9->VAR12->VAR11;
struct VAR3 *VAR13;
unsigned int VAR14;
int VAR15;

*VAR6 = NULL;
*VAR7 = 0;
VAR14 = 0;

FUN3(VAR4, VAR13) {
VAR15 = FUN4(VAR2, VAR13, VAR6, VAR7,
&VAR14);
if (VAR15 < 0) {
FUN5(VAR13);
goto VAR16;
}
}


if (*VAR7 == 0) {
VAR15 = FUN4(VAR2, VAR4, VAR6, VAR7,
&VAR14);
if (VAR15 < 0)
goto VAR16;
}

if (*VAR7)
return 0;

FUN6(VAR11, "", VAR4->VAR17);
VAR15 = -VAR18;

VAR16:
if (VAR15 < 0)
FUN7(VAR2, *VAR6, *VAR7);

return VAR15;
}