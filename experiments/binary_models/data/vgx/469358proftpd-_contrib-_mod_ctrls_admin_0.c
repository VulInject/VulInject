static int FUN1(VAR1 *VAR2, int VAR3,
char **VAR4) {
int bool;


if (FUN2(VAR2, VAR5, "") != VAR6) {


FUN3(VAR2, "");
return VAR7;
}


if (VAR3 == 0 ||
VAR4 == NULL) {
FUN3(VAR2, "");
return VAR8;
}

if (VAR3 != 1 &&
VAR3 != 2) {
FUN3(VAR2, "");
return VAR8;
}

if (VAR3 == 2 &&
strcmp(VAR4[0], "") == 0) {

if (strcmp(VAR4[1], "") != 0) {
FUN3(VAR2,
"", VAR4[1]);
return VAR8;
}

FUN4();
FUN3(VAR2, "");

} else {
bool = FUN5(VAR4[0]);

if (bool == -1) {
FUN3(VAR2,
"", VAR4[0]);
return VAR8;
}

VAR9 = bool;

FUN6(VAR10, "",
bool ? "" : "");
FUN3(VAR2, "",
bool ? "" : "");
}

return VAR11;
}