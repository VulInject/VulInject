static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;

FUN2(VAR2);
if (VAR4->VAR6)
FUN3(VAR4->VAR6);
if (VAR4->VAR7)
FUN3(VAR4->VAR7);

memset(VAR4, 0, sizeof(struct VAR3));
FUN3(VAR4);
}