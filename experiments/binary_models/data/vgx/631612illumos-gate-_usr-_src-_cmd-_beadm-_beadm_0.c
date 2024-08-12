int
main(int argc, char **argv)
{
const char *VAR1;

(void) FUN1(VAR2, "");
(void) FUN2(VAR3);

if (argc < 2)
VAR1 = "";
else
VAR1 = argv[1];


FUN3(VAR4);

return (FUN4(VAR1, --argc, ++argv));
}