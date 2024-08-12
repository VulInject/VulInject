static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
unsigned int VAR5, VAR6;
u8 VAR7, VAR8;

if (!(FUN2(VAR2, 0) && FUN2(VAR2, 1) &&
FUN3(VAR2, 0) && FUN4(VAR2, 0)))
return -VAR9;

VAR6 = FUN5(VAR2, 0);
VAR5 = FUN5(VAR2, 1);
VAR7 = FUN6(VAR2, 0);
VAR8 = FUN7(VAR2, 0);

if (FUN8(VAR5, VAR6, VAR7, VAR8))
return -VAR10;

return 0;
}