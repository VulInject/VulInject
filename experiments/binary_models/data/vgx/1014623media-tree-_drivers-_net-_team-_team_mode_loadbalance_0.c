static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR6->VAR5;
struct VAR7 *VAR7 = FUN2(VAR5);

VAR3->VAR8.VAR9.VAR10 = &VAR7->VAR11.VAR12;
VAR3->VAR8.VAR9.VAR13 = sizeof(struct VAR14);
return 0;
}