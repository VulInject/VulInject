static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;

if (!VAR2 || !VAR4)
return -VAR9;
if (VAR4->VAR6)
return 0;

VAR8 = &VAR4->VAR8;
VAR8->VAR2 = VAR2;
if (VAR4->VAR10) {
VAR8->VAR11 = true;
VAR8->VAR12 = 1000;
} else {
VAR8->VAR11 = false;
}
VAR8->VAR13 = false;
VAR8->VAR14 = VAR15;

VAR6 = FUN2(VAR8, VAR4->VAR16);
if (FUN3(VAR6)) {
FUN4(VAR2, "",
VAR4->VAR16, FUN5(VAR6));
return FUN5(VAR6);
}

VAR4->VAR6 = VAR6;
return 0;
}