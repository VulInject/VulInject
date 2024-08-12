static void FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = (VAR3*)VAR2->VAR4->VAR5;
int VAR6;


VAR6 = VAR2->VAR4->VAR7 - 1;
if (VAR6 > 0) {
--VAR2->VAR4->VAR7;
memmove(VAR4, VAR4+1, sizeof(VAR3) * VAR2->VAR4->VAR7);
}
}