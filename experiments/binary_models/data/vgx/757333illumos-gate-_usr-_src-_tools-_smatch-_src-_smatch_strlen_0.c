static void FUN1(const char *VAR1, struct VAR2 *VAR3, void *VAR4)
{
struct VAR2 *VAR5;
struct VAR2 *VAR6;
sval_t VAR7;

VAR5 = FUN2(VAR3->VAR8, 0);
VAR6 = FUN2(VAR3->VAR8, 1);

if (!FUN3(VAR6, &VAR7))
return;

if (VAR7.VAR9 <= 0)
return;

FUN4(VAR10, VAR5, FUN5(VAR7.VAR9 - 1));
}