static int FUN1(struct VAR1 *VAR2,
char *VAR3,
u32 VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR8 = &VAR2->VAR9.VAR8;
struct VAR10 *VAR11 = VAR8->VAR11;
u32 VAR12;
int VAR13;

if (!VAR11)
return -VAR14;

VAR12 = VAR4;
VAR13 = FUN2(VAR11, VAR3, &VAR12);
if (!VAR13 && !(FUN3(VAR12) & VAR6->VAR15)) {
FUN4(VAR2, "", VAR3);
return -VAR16;
}

return VAR12;
}