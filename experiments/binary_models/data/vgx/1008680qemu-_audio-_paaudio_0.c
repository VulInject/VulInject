static void FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4 = (VAR3 *) VAR2;

if (VAR4->VAR5) {
VAR6 *VAR7 = VAR4->VAR8->VAR9;

FUN2(VAR7->VAR10);
FUN3(VAR7, VAR4->VAR5);
VAR4->VAR5 = NULL;
FUN4(VAR7->VAR10);
}
}