void
FUN1(VAR1 *VAR2, enum pcmk__alert_keys_e VAR3,
const char *VAR4)
{
for (const char **VAR5 = VAR6[VAR3]; *VAR5; VAR5++) {
FUN2("", *VAR5, VAR4);
if (VAR4) {
FUN3(VAR2, strdup(*VAR5), strdup(VAR4));
} else {
FUN4(VAR2, *VAR5);
}
}
}