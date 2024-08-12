void FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;

struct VAR4 *VAR5 = VAR3->VAR5;
struct VAR6 *VAR7 = FUN2(VAR5);
struct VAR8 *VAR9 = &VAR7->VAR10;

VAR9->VAR11 = false;

VAR9->VAR12 = VAR13;
VAR9->VAR14 = VAR13;
}