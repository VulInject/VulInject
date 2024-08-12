static int FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;

if (FUN2(VAR4, VAR7, VAR2->VAR8))
return -VAR9;

VAR6 = FUN3(VAR4, VAR10, VAR2->VAR8 *
sizeof(struct VAR11));
if (VAR6 == NULL)
return -VAR9;

memcpy(FUN4(VAR6), VAR2->VAR12, FUN5(VAR6));

return 0;
}