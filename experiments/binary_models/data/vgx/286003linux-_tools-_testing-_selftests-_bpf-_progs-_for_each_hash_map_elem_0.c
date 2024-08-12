int FUN1(struct VAR1 *VAR2)
{
struct callback_ctx VAR3;

VAR3.VAR4 = VAR2;
VAR3.VAR5 = 10;
VAR3.VAR6 = 0;
VAR7 = FUN2(&VAR8, VAR9, &VAR3, 0);
VAR10 = VAR3.VAR6;

VAR11 = FUN2(&VAR12, VAR13,
(void *)0, 0);
return 0;
}