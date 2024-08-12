int
main(int argc, char ** argv)
{
if (argc == 1) {
FUN1("", *argv);
return 1;
}
while (--argc > 0) {
char * VAR1 = *(++argv);
VAR2 * VAR3 = FUN2(VAR1);
if (VAR3 == NULL) {
FUN1("",
VAR1, VAR4, strerror(VAR4));
} else {
int VAR5 = 0;
FUN1("", VAR1, VAR3->VAR6);
do {
FUN1("", VAR5+1, VAR3->VAR7[VAR5]);
} while (++VAR5 < VAR3->VAR6);
free(VAR3);
}
}
return 0;
}