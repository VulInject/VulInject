static void FUN1(struct VAR1 *VAR2,
const char *VAR3,
const char *VAR4)
{
FUN2(VAR3, VAR4, VAR2->VAR5, VAR2->VAR6);
if (VAR2->VAR7)
FUN1(VAR2->VAR7, VAR3, VAR4);
}