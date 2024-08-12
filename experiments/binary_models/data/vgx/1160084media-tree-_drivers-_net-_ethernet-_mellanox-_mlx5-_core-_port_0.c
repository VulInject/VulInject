static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
int VAR5)
{
u32 VAR6[FUN2(VAR7)];

if (!FUN3(VAR2, VAR8))
return -VAR9;

memset(VAR6, 0, sizeof(VAR6));
return FUN4(VAR2, VAR6, sizeof(VAR6), VAR4, VAR5,
VAR10, 0, 0);
}