static void
FUN1(krb5_context VAR1, VAR2 *VAR3)
{
unsigned int VAR4;

for (VAR4 = 0; VAR3[VAR4]; VAR4++) {
fprintf(VAR5, "", (int) VAR3[VAR4]);
if (VAR3[VAR4 + 1])
fprintf(VAR5, "");
}
fprintf(VAR5, "");
}