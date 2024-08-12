static void FUN1(const char *VAR1, struct VAR2 *VAR3,
void *VAR4)
{
char *VAR5;
struct VAR6 *VAR7;

VAR5 = FUN2(VAR3->VAR8, &VAR7);
if (!VAR5 || !VAR7)
goto free;
if (VAR7->VAR9.VAR10 & 
(VAR11 | VAR12 | VAR13))
goto free;
FUN3(&VAR14, VAR15, VAR5, VAR7);
free:
FUN4(VAR5);
}