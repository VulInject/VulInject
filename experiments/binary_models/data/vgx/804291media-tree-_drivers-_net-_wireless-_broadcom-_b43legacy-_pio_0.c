static void FUN1(struct VAR1 *VAR2,
int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;

if (VAR2->VAR6) {
if (VAR3)
FUN2(VAR2->VAR6);
else
FUN3(VAR2->VAR6);
}
FUN4(&VAR2->VAR7, &VAR5->VAR8);
VAR5->VAR9++;
}