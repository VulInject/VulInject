static void
FUN1(const char *VAR1)
{
VAR2 *VAR3;

VAR3 = fopen(VAR1, "");
assert(VAR3 != NULL);
FUN2(5, fwrite("", 1, 5, VAR3));
fclose(VAR3);
}