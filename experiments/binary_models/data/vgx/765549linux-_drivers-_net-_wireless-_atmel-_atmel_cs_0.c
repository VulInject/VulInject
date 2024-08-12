static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = ((struct VAR5 *)VAR2->VAR6)->VAR7;

FUN2(&VAR2->VAR4, "");

if (VAR4)
FUN3(VAR4);
((struct VAR5 *)VAR2->VAR6)->VAR7 = NULL;

FUN4(VAR2);
}