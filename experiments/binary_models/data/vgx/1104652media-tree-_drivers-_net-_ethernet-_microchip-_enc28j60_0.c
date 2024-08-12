static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;

if (FUN2(VAR2))
return -VAR6;
if (!FUN3(VAR5->VAR7))
return -VAR8;

memcpy(VAR2->VAR9, VAR5->VAR7, VAR2->VAR10);
return FUN4(VAR2);
}