static void
FUN1(unsigned VAR1) {
size_t VAR2[3];
size_t VAR3;

VAR3 = sizeof(VAR2)/sizeof(VAR4);
FUN2(FUN3("", VAR2, &VAR3), 0,
"");
VAR2[1] = (VAR4)VAR1;
FUN2(FUN4(VAR2, VAR3, NULL, NULL, NULL, 0), 0,
"");
}