int
main(int argc, char *argv[])
{
const char *VAR1 = FUN1(argv[0]);
struct VAR2 *VAR3;

VAR3 = FUN2(VAR1);
if (VAR3 == NULL) {
FUN3(VAR4, "");
}


assert(FUN4(VAR1));

FUN5(VAR3);


if (!FUN4(VAR1)) {
FUN6(VAR4, "");
}


if (FUN7(VAR1) != 0) {
FUN3(VAR4, "");
}


if (FUN4(VAR1)) {
FUN6(VAR4, "");
}

(void) FUN8("", VAR1);
return (VAR5);
}