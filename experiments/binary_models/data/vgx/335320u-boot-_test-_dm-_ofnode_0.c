static int FUN1(struct VAR1 *VAR2)
{
const char **VAR3;
const char *VAR4;
ofnode VAR5;

VAR5 = FUN2("");
FUN3(FUN4(VAR5));


FUN5(1, FUN6(VAR5, ""));
FUN7(FUN8(VAR5, "", 0, &VAR4));
FUN9("", VAR4);
FUN5(0, FUN10(VAR5, "",
""));
FUN5(1, FUN11(VAR5, "", &VAR3));
FUN9("", VAR3[0]);
FUN12(VAR3[1]);
free(VAR3);


FUN5(5, FUN6(VAR5, ""));
FUN7(FUN8(VAR5, "", 0,
&VAR4));
FUN9("", VAR4);
FUN5(0, FUN10(VAR5, "",
""));
FUN5(5, FUN11(VAR5, "",
&VAR3));
FUN9("", VAR3[0]);
FUN9("", VAR3[1]);
FUN9("", VAR3[2]);
FUN9("", VAR3[3]);
FUN9("", VAR3[4]);
FUN12(VAR3[5]);
free(VAR3);

FUN7(FUN8(VAR5, "", 4,
&VAR4));
FUN9("", VAR4);
FUN5(4, FUN10(VAR5, "",
""));

return 0;
}