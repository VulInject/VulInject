static void FUN1(const char *VAR1, struct VAR2 *VAR3, void *VAR4)
{
struct VAR2 *VAR5;
struct VAR2 *VAR6;
int VAR7;

VAR5 = FUN2(VAR3->VAR8, 0);
VAR6 = FUN2(VAR3->VAR8, 1);

VAR7 = FUN3(VAR6);
if (VAR7 == 0)
return;

FUN4(VAR9, VAR5, FUN5(VAR7 - 1));
}