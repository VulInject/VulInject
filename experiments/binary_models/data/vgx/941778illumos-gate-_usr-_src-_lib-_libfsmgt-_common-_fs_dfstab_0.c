static void
FUN1(VAR1 *VAR2, int *VAR3)
{
VAR4 *VAR5;		

if ((VAR5 = fopen(VAR6, "")) != NULL) {
char *VAR7;
if ((VAR7 = FUN2(VAR2, NULL, VAR3)) != NULL) {
(void) FUN3(&VAR8);
fprintf(VAR5, "", VAR7);
fclose(VAR5);
(void) FUN4(&VAR8);
free(VAR7);
} else {
*VAR3 = VAR9;
}
} else {
*VAR3 = VAR9;
}

}