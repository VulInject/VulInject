char* FUN1(VAR1* VAR2, char* VAR3, int VAR4)
{
VAR5* VAR6;
int VAR7, VAR8, VAR9, VAR10, VAR11;
int VAR12 = 0;
char *VAR13;
char VAR14[256];
const int VAR15 = sizeof(VAR14);
char VAR16[80];
const char* VAR17;
FUN2("");

if (VAR2 == NULL) {
FUN3("");
return NULL;
}
if (!VAR3) {
FUN3("");
return NULL;
}


VAR10 = FUN4(VAR2);
for (VAR11 = 0; VAR11 < VAR10; VAR11++) {


VAR6 = FUN5(VAR2, VAR11);
if (VAR6 == NULL) {
FUN3("");
return NULL;
}
VAR7 = FUN6(VAR2, VAR6->VAR18, VAR16,
sizeof(VAR16));
if (VAR7 < 0) {
FUN3("");
return NULL;
}


VAR17 = FUN7(VAR6->VAR18);
if (VAR17 == NULL) {
FUN3("");
return NULL;
}


if (VAR11 != VAR10 - 1) {
VAR8 = (int)FUN8(VAR17) + VAR7 + 4;
VAR13 = (char*)FUN9(VAR8, NULL, VAR19);
if (VAR13 == NULL) {
FUN3("");
return NULL;
}
if ((VAR9 = FUN10(VAR13, VAR8, "", VAR17, VAR16))
>= VAR8)
{
FUN3("");
FUN11(VAR13, NULL, VAR19);
return NULL;
}
}
else {

VAR8 = (int)FUN8(VAR17) + VAR7 + 2;
VAR13 = (char*)FUN9(VAR8, NULL, VAR19);
if (VAR13 == NULL) {
FUN3("");
return NULL;
}
if ((VAR9 = FUN10(VAR13, VAR8, "", VAR17, VAR16)) >= VAR8) {
FUN3("");
FUN11(VAR13, NULL, VAR19);
return NULL;
}
}

if (VAR12 + VAR9 > VAR15) {
FUN3("");
FUN11(VAR13, NULL, VAR19);
return NULL;
}
FUN12(VAR14 + VAR12, VAR13, VAR9);
VAR12 += VAR9;
FUN11(VAR13, NULL, VAR19);
}


if (!VAR3) {
VAR3 = (char*)FUN9(VAR12+1, NULL, VAR20);
if (VAR3 == NULL) {
FUN3("");
return VAR3;
}
}
else {
if (VAR12 + 1 > VAR4) {
FUN3("");
return NULL;
}
}

FUN12(VAR3, VAR14, VAR12);
VAR3[VAR12] = '';

return VAR3;
}