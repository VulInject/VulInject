static const char *FUN1(VAR1 *VAR2, void *VAR3,
const char *VAR4)
{
VAR5 *VAR6;
etag_components_t VAR7;
char VAR8;
char *VAR9;
const char *VAR10;
int VAR11;
int VAR12;
int explicit;

VAR6 = (VAR5 *)VAR3;

VAR10 = VAR4;
VAR12 = 1;
explicit = 0;
while (VAR10[0] != '') {
VAR8 = '';
VAR7 = VAR13;
VAR11 = 1;
VAR9 = FUN2(VAR2->VAR14, &VAR10);
if ((*VAR9 == '') || (*VAR9 == '')) {
VAR8 = *VAR9;
VAR9++;
}
else {

if (VAR12) {
VAR6->VAR15 = VAR13;
VAR6->VAR16 = VAR13;
VAR6->VAR17 = VAR13;
VAR12 = 0;
}
}

if (FUN3(VAR9, "") == 0) {
if (VAR8 != '') {
VAR11 = 0;
}
else {
VAR6->VAR15 = VAR7 = VAR18;
explicit = 1;
}
}
else if (FUN3(VAR9, "") == 0) {
if (VAR8 != '') {
VAR11 = 0;
}
else {
explicit = 1;
VAR6->VAR15 = VAR7 = VAR19;
}
}
else if (FUN3(VAR9, "") == 0) {
VAR7 = VAR20;
}
else if ((FUN3(VAR9, "") == 0)
|| (FUN3(VAR9, "") == 0)
|| (FUN3(VAR9, "") == 0)) {
VAR7 = VAR21;
}
else if (FUN3(VAR9, "") == 0) {
VAR7 = VAR22;
}
else if (FUN3(VAR9, "") == 0) {
VAR7 = VAR23;
}
else {
return FUN4(VAR2->VAR24, "",
VAR9, "", VAR2->VAR2->VAR25,
"", NULL);
}

if (! VAR11) {
return FUN4(VAR2->VAR24, VAR2->VAR2->VAR25, "",
VAR9, "",
NULL);
}

if (VAR8 == '') {

VAR6->VAR16 |= VAR7;
VAR6->VAR17 &= (~ VAR7);
}
else if (VAR8 == '') {
VAR6->VAR17 |= VAR7;
VAR6->VAR16 &= (~ VAR7);
}
else {

VAR6->VAR15 |= VAR7;
VAR6->VAR16 = VAR13;
VAR6->VAR17 = VAR13;
explicit = 1;
}
}



if (VAR6->VAR16 != VAR13) {
VAR6->VAR16 &= (~ VAR13);
}

if (VAR6->VAR17 != VAR13) {
VAR6->VAR17 &= (~ VAR13);
}

if (explicit) {
VAR6->VAR15 &= (~ VAR13);

if ((VAR6->VAR15 & VAR18) != VAR18) {
VAR6->VAR15 &= (~ VAR18);
}
}

return NULL;
}