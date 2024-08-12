bool FUN1(void) {
RStrBuf VAR1;
const char *VAR2 = FUN2 (&VAR1, "", "", 42);
FUN3 (VAR2, "");
FUN4 (VAR2, FUN5 (&VAR1), "");
FUN6 (FUN5 (&VAR1), "", "");
FUN7 (&VAR1);
VAR3;
}