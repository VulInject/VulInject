static void
FUN1(VAR1 * VAR2, VAR3 * VAR4)
{
if (VAR2 == NULL)
return;
if (VAR4 && VAR4->VAR5) {
FUN2((VAR6 **) VAR4->VAR5);
VAR4->VAR5 = NULL;
VAR4->VAR7 = 0;
VAR4->VAR8 = 0;
}
}