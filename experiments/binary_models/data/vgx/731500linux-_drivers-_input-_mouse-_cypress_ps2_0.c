int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;

VAR3 = FUN2(sizeof(struct VAR2), VAR4);
if (!VAR3)
return -VAR5;

VAR1->private = VAR3;
VAR1->VAR6 = 8;

FUN3(VAR1);

if (FUN4(VAR1)) {
FUN5(VAR1, "");
goto VAR7;
}

if (FUN6(VAR1)) {
FUN5(VAR1, "");
goto VAR7;
}

if (FUN7(VAR1->VAR8, VAR3) < 0) {
FUN5(VAR1, "");
goto VAR7;
}

VAR1->VAR9 = 1;
VAR1->VAR10 = VAR11;
VAR1->VAR12 = VAR13;
VAR1->VAR14 = VAR15;
VAR1->VAR16 = VAR17;
VAR1->VAR18 = VAR19;
VAR1->VAR20 = 0;

return 0;

VAR7:

FUN3(VAR1);

VAR1->private = NULL;
FUN8(VAR3);

return -1;
}