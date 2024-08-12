char *
FUN1(const char *VAR1, struct VAR2 *VAR3, kpse_file_format_type VAR4)
{
char *VAR5;
char *VAR6;

FUN2((VAR7, ""%VAR8\"", VAR1));


if (VAR1[0] == '') {
if (FUN3(VAR1, VAR3) == 0) {
FUN2((VAR7, ""%VAR8\"", VAR1));
return xstrdup(VAR1);
}
else {
FUN2((VAR7, ""%VAR8\"", VAR1));
return NULL;
}
}


FUN4(VAR9.VAR10.VAR11 != NULL, "");

VAR6 = xstrdup(VAR9.VAR10.VAR11);
VAR6 = FUN5(VAR6, VAR1);

FUN2((VAR7, ""%VAR8\"", VAR6));
if (FUN3(VAR6, VAR3) == 0) {
return VAR6;
}


if (FUN3(VAR1, VAR3) == 0) {
FUN2((VAR7, ""%VAR8\"", VAR1));
free(VAR6);
return FUN6(VAR1, VAR12);
}


{
int VAR13;
char VAR14[VAR15];


if (
(VAR13 = FUN7("", VAR16)) >= 0
FUN8(VAR14, VAR15)
getwd(VAR14)
!= NULL
) {
if (FUN9(VAR9.VAR10.VAR11) == 0) {

FUN2((VAR7,
""%VAR8\"",
VAR1, VAR9.VAR10.VAR11));
VAR5 = FUN10(VAR1, VAR4, VAR17);

if (VAR5 != NULL && FUN3(VAR5, VAR3) == 0) {
free(VAR6);

(void)FUN11(VAR13);
close(VAR13);
(void)FUN9(VAR14);
if (VAR5[0] == '') { 
VAR6 = xstrdup(VAR5);
}
else {
VAR6 = xstrdup(VAR9.VAR10.VAR11);
VAR6 = FUN5(VAR6, VAR5);
}
FUN2((VAR7, "", VAR6));
free(VAR5);
return VAR6;
}
}
else {

FUN2((VAR7,
""%VAR8\"",
VAR1));
VAR5 = FUN10(VAR1, VAR4, VAR17);

if (VAR5 != NULL && FUN3(VAR5, VAR3) == 0) {
FUN2((VAR7, "", VAR5));
free(VAR6);
return VAR5;
}
}
}
}

FUN2((VAR7,
""%VAR8\"",
VAR6));
VAR5 = FUN10(VAR6, VAR4, VAR17);

if (VAR5 != NULL && FUN3(VAR5, VAR3) == 0) {
FUN2((VAR7, "", VAR5));
free(VAR6);
return VAR5;
}


free(VAR6);
free(VAR5);
VAR18 = 0;
return NULL;
}