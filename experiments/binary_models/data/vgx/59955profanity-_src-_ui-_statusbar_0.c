void
FUN1(void)
{
if (VAR1) {
FUN2(VAR1);
}
if (VAR2) {
if (VAR2->VAR3) {
FUN3(VAR2->VAR3);
}
if (VAR2->VAR4) {
free(VAR2->VAR4);
}
if (VAR2->VAR5) {
free(VAR2->VAR5);
}
if (VAR2->VAR6) {
FUN4(VAR2->VAR6);
}
free(VAR2);
}
}