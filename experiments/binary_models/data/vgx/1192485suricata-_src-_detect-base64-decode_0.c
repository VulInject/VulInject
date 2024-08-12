static int FUN1(void)
{
ThreadVars VAR1;
VAR2 *VAR3 = NULL;
VAR4 *VAR5 = NULL;
VAR6 *VAR7 = NULL;
int VAR8 = 0;

uint8_t VAR9[] = {
'', '', '', '', '', '', '', '',
'', '', '', '', '', '', '', '',
'', '', '', '', '', '', '', '',
};
char VAR10[] = "";

memset(&VAR1, 0, sizeof(VAR1));

if ((VAR3 = FUN2()) == NULL) {
goto VAR11;
}

VAR3->VAR12 = FUN3(VAR3,
""base64 VAR13\""
""
"");
if (VAR3->VAR12 == NULL) {
goto VAR11;
}
FUN4(VAR3);
FUN5(&VAR1, (void *)VAR3, (void *)&VAR5);

VAR7 = FUN6(VAR9, sizeof(VAR9), VAR14);
if (VAR7 == NULL) {
goto VAR11;
}

FUN7(&VAR1, VAR3, VAR5, VAR7);
if (VAR5->VAR15 != (int)strlen(VAR10)) {
goto VAR11;
}
if (memcmp(VAR5->VAR16, VAR10, strlen(VAR10))) {
goto VAR11;
}

VAR8 = 1;
VAR11:
if (VAR5 != NULL) {
FUN8(&VAR1, VAR5);
}
if (VAR3 != NULL) {
FUN9(VAR3);
FUN10(VAR3);
FUN11(VAR3);
}
if (VAR7 != NULL) {
FUN12(VAR7);
}
return VAR8;
}