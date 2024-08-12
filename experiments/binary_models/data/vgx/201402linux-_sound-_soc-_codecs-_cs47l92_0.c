static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR4 = VAR3;
struct VAR5 *VAR6 = &VAR4->VAR7;
struct VAR8 *VAR8 = VAR6->VAR8;
int VAR9;

VAR9 = FUN2(&VAR6->VAR10[0]);
if (VAR9 == -VAR11) {
FUN3(VAR8->VAR12, "");
return VAR13;
}

return VAR14;
}