static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(&VAR4->VAR7);
struct VAR8 *VAR9 = VAR6->VAR10;
struct VAR11 *VAR12;
int VAR13;

VAR12 = VAR2->VAR7.VAR14;
if (!VAR12) {
FUN4(&VAR2->VAR7, "");
return -VAR15;
}


VAR9->VAR16 = VAR12->VAR16;

if (FUN5(VAR12->VAR16)) {
VAR13 = FUN6(&VAR2->VAR7,
VAR12->VAR16, VAR17,
"");
if (VAR13) {
FUN4(&VAR2->VAR7, "");
return VAR13;
}
}

return 0;
}