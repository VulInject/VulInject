static void
FUN1(struct VAR1 *VAR2)
{
while(VAR2 != NULL) {
if (VAR2->VAR3 == VAR4) {
if (*VAR2->VAR5.VAR6)
free(*VAR2->VAR5.VAR6);
*VAR2->VAR5.VAR6 = NULL;
}
VAR2 = VAR2->VAR7;
}
}