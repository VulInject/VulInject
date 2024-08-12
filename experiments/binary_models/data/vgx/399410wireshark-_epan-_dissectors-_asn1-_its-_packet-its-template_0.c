static void
FUN1(VAR1 *VAR2, guint32 VAR3)
{
if (VAR3 == 1023) {
snprintf(VAR2, VAR4, "", VAR3);
} else if (VAR3 == 1022) {
snprintf(VAR2, VAR4, "", VAR3);
} else {
snprintf(VAR2, VAR4, "", VAR3 * 0.1, VAR3);
}
}