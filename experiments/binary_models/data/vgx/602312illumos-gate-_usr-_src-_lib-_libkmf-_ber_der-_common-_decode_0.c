void
FUN1(struct VAR1 *VAR2)
{
if (VAR2 != NULL) {
if (VAR2->VAR3 != NULL) {
free(VAR2->VAR3);
}
free((char *)VAR2);
}
}