static void
FUN1(int VAR1, const void *VAR2, size_t VAR3, off_t VAR4)
{
size_t VAR5 = VAR3;
ssize_t VAR6 = 0;

VAR6 = FUN2(VAR1, VAR2, VAR3, VAR4);
if (VAR6 < 0) {
FUN3("");
FUN4(VAR7);
}

VAR5 -= VAR6;
if (VAR5 != 0) {
(void) fprintf(VAR8, ""
"",
(VAR3 - VAR5), VAR3);
}
}