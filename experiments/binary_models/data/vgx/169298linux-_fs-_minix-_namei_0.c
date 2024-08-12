static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR5, umode_t VAR6, dev_t VAR7)
{
struct VAR3 *VAR3;

if (!FUN2(VAR7))
return -VAR8;

VAR3 = FUN3(VAR4, VAR6);
if (FUN4(VAR3))
return FUN5(VAR3);

FUN6(VAR3, VAR7);
FUN7(VAR3);
return FUN8(VAR5, VAR3);
}