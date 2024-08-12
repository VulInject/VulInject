void FUN1(void)
{


VAR1 *VAR2;
git_str VAR3 = VAR4, VAR5 = VAR4, VAR6 = VAR4;
const char **VAR7;
int VAR8;
static const char *VAR9[] = {
"", "", "", "", "", "",
"", "", "", "", NULL
};
static const char *VAR10[] = {
"", NULL
};

FUN2("");

FUN3(FUN4("", 0777));
FUN3(FUN4("", 0777));

for (VAR7 = VAR9; *VAR7 != NULL; VAR7++) {
FUN5(&VAR3, "", *VAR7);
if (FUN6(VAR3.VAR11)) {
FUN5(&VAR3, "", *VAR7);
FUN5(&VAR5, "", *VAR7);
if (strchr(*VAR7, ''))
FUN7(VAR5.VAR11, 0777);
FUN8(FUN9(VAR3.VAR11, VAR5.VAR11) == 0, strerror(VAR12));
}
}
for (VAR7 = VAR10; *VAR7 != NULL; VAR7++) {
FUN5(&VAR3, "", *VAR7);
if (FUN6(VAR3.VAR11)) {
FUN5(&VAR5, "", *VAR7);
FUN3(FUN10(&VAR6, VAR3.VAR11));

FUN11((VAR8 = FUN12(VAR5.VAR11, 0777, 0666)) >= 0);
FUN13(FUN14(VAR8, VAR6.VAR11, VAR6.VAR13));
FUN15(VAR8);
}
}

FUN16(&VAR3);
FUN16(&VAR5);
FUN16(&VAR6);


FUN3(FUN17(&VAR2, ""));

FUN11(FUN18(VAR2) != NULL);
FUN8(FUN19(FUN18(VAR2), "") == 0, FUN18(VAR2));

FUN11(FUN20(VAR2) != NULL);
FUN8(FUN19(FUN20(VAR2), "") == 0, FUN20(VAR2));

FUN21(VAR2);
FUN22();
}