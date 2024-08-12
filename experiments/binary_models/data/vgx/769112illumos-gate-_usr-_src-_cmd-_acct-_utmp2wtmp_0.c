int
main(int argc, char **argv)
{
struct VAR1 *VAR1;
VAR2 *VAR3;

VAR3 = fopen(VAR4, "");
if (VAR3 == NULL) {
fprintf(VAR5, "", argv[0],
VAR4, strerror(VAR6));
FUN1(1);
}

while ((VAR1 = FUN2()) != NULL) {
if ((VAR1->VAR7 == VAR8) && !(FUN3(*VAR1))) {
FUN4(&VAR1->VAR9);
fwrite(VAR1, sizeof (*VAR1), 1, VAR3);
}
}
fclose(VAR3);
FUN1(0);
}