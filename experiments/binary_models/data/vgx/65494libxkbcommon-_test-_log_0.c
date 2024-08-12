int
main(void)
{
darray_char VAR1;
struct VAR2 *VAR3;
int VAR4;

VAR4 = setenv("", "", 1);
assert(VAR4 == 0);
VAR4 = setenv("", "", 1);
assert(VAR4 == 0);
VAR3 = FUN1(0);
assert(VAR3);

FUN2(VAR1);
FUN3(VAR3, &VAR1);
FUN4(VAR3, VAR5);

FUN5(VAR3, "", 87);
FUN6(VAR3, "");
FUN7(VAR3, "", "");
FUN8(VAR3, "", 115415UL);
FUN9(VAR3, 5, "");

FUN10(VAR3, VAR6);
FUN5(VAR3, "", 87);
FUN7(VAR3, "", "", "");
FUN6(VAR3, "");
FUN8(VAR3, "", 115415UL);
FUN9(VAR3, 6, "");

FUN11(VAR3, 0);
FUN10(VAR3, VAR7);
FUN5(VAR3, "", 87);
FUN7(VAR3, "", "", "");
FUN6(VAR3, "");
FUN8(VAR3, "", 115415UL);
FUN9(VAR3, 0, "");

FUN12("", VAR1.VAR8);

assert(FUN13(VAR1.VAR8,
""
""
""
""
""
""
""));

FUN14(VAR3);
FUN15(VAR1);
return 0;
}