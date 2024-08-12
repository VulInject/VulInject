static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
unsigned long VAR5;

if (!VAR4)
return -VAR6;

VAR5 = FUN2(VAR2, VAR7);

FUN3(VAR5, VAR4);

FUN4("",
VAR4->VAR8, VAR4->VAR9, VAR4->VAR10, VAR4->VAR11,
VAR4->VAR12, VAR4->VAR13, VAR4->VAR14);

return 0;
}