static int FUN1(struct VAR1 *VAR2, const void *VAR3)
{
struct VAR4 *VAR5;

if (!FUN2(VAR6)) {
if (!VAR7)
return -VAR8;
FUN3(&VAR2->VAR9, "");
}

VAR10 = FUN4(VAR2);
if (!VAR10) {
FUN5(&VAR2->VAR9, "");
return -VAR8;
}

VAR5 = FUN6(&VAR2->VAR9, "", VAR2,
&VAR11, NULL);

return FUN7(VAR5);
}