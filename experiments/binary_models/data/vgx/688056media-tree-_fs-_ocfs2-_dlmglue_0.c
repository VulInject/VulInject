static int FUN1(struct VAR1 *VAR2,
int VAR3)
{
struct VAR4 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8;

VAR4 = FUN2(VAR2);
VAR6 = VAR4->VAR9;

if (FUN3(VAR4->VAR10)) {
VAR8 = FUN4(VAR4);
VAR8->VAR11++;
FUN5(0, "", VAR8->VAR11);
goto VAR12;
}

if (!FUN6(VAR4->VAR10))
goto VAR12;


FUN7(VAR6, 0, 0, 0);

if (FUN8(VAR6)) {
FUN5(VAR13, "",
(unsigned long long)FUN4(VAR4)->VAR14);
}
FUN9(VAR6);
if (VAR3 == VAR15) {
FUN10(VAR6, 0);
} else {

FUN11(VAR6);
}

FUN12(VAR4);

VAR12:
return VAR16;
}