static void
FUN1(int VAR1, int VAR2,
VAR3 *VAR4, VAR3 *VAR5)
{
VAR5[0] = (VAR3)VAR1;
bcopy(VAR4, &VAR5[1], VAR2);
}