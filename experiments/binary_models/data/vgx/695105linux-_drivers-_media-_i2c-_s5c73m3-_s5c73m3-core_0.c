static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR5;
const struct VAR7 *VAR8;
int VAR9;
char VAR10[20];

snprintf(VAR10, sizeof(VAR10), "",
VAR4->VAR11);
VAR9 = FUN3(&VAR8, VAR10, &VAR6->VAR12);
if (VAR9 < 0) {
FUN4(VAR2, "", VAR10);
return -VAR13;
}

FUN5(VAR2, "", VAR10, VAR8->VAR14);

VAR9 = FUN6(VAR4, VAR8->VAR15, VAR8->VAR14, 64);

if (VAR9 >= 0)
VAR4->VAR16 = 1;
else
FUN4(VAR2, "");

FUN7(VAR8);

return VAR9;
}