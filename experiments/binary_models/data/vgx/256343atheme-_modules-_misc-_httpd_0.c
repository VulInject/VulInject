static void
FUN1(struct VAR1 *VAR2)
{
VAR2->VAR3[0] = '';
VAR2->VAR4[0] = '';
if (VAR2->VAR5 != NULL)
{
FUN2(VAR2->VAR5);
VAR2->VAR5 = NULL;
}
if (VAR2->VAR6 != NULL)
{
FUN2(VAR2->VAR6);
VAR2->VAR6 = NULL;
}
VAR2->VAR7 = 0;
VAR2->VAR8 = 0;
VAR2->VAR9 = false;
VAR2->VAR10 = false;
VAR2->VAR11 = false;
}