static const char *FUN1(VAR1 *VAR2,
VAR3 *VAR4,
VAR5 *VAR6,
const char *VAR7,
const char *VAR8)
{

int VAR9;
apr_interval_time_t VAR10;
if (!FUN2(VAR7, "")) {
char *VAR11;

if (strlen(VAR8) >= sizeof(VAR6->VAR12->VAR13))
FUN3(VAR4, "",
(int)sizeof(VAR6->VAR12->VAR13));
FUN4(VAR6->VAR12->VAR13, VAR8);
FUN4(VAR6->VAR12->VAR14, VAR8);

if ((VAR11 = strchr((char *)VAR6->VAR12->VAR14, ''))) {
*VAR11++ = '';
FUN4(VAR6->VAR12->VAR13, VAR11);
}
}
else if (!FUN2(VAR7, "")) {

if (strlen(VAR8) != 1) {
if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR15 = 0;
else      
return "";
}
else
VAR6->VAR12->VAR15 = *VAR8;
VAR6->VAR12->VAR16 = 1;
}
else if (!FUN2(VAR7, "")) {

if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR17 = 1;
else if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR17 = 0;
else
return "";
VAR6->VAR12->VAR18 = 1;
}
else if (!FUN2(VAR7, "")) {

if (FUN5(VAR8, &VAR10, "") != VAR19)
return "";
if (VAR10 < 10000)
return "";
VAR6->VAR12->VAR10 = VAR10;
}
else if (!FUN2(VAR7, "")) {

VAR9 = FUN6(VAR8);
if (VAR9 < 0)
return "";
VAR6->VAR12->VAR20 = VAR9;
VAR6->VAR12->VAR21 = 1;
}
else if (!FUN2(VAR7, "")) {
VAR22 *VAR23;
if (strlen(VAR8) > (sizeof(VAR6->VAR12->VAR24)-1))
return "";
VAR23 = FUN7(VAR25, VAR8, "");
if (VAR23) {
VAR6->VAR26 = VAR23;
if (FUN4(VAR6->VAR12->VAR24, VAR8) == VAR19) {
VAR6->VAR27 = 1;
return NULL;
}
else {
return "";
}
}
return "";
}
else if (!FUN2(VAR7, "")) {

if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR28 = 1;
else if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR28 = 0;
else
return "";
VAR6->VAR12->VAR29 = 1;
}
else if (!FUN2(VAR7, "")) {
char *VAR30;
char *VAR31;
char *VAR32;

VAR30 = FUN8(VAR4, VAR8);

VAR6->VAR33 = FUN9(VAR4, 1, sizeof(int));

VAR31 = FUN10(VAR30, "", &VAR32);
while (VAR31 != NULL) {
VAR9 = FUN6(VAR31);
if (FUN11(VAR9)) {
*(int *)FUN12(VAR6->VAR33) = VAR9;
}
else {
return "";
}
VAR31 = FUN10(NULL, "", &VAR32);
}

}
else if (!FUN2(VAR7, "")) {
if (!FUN2(VAR8, ""))
VAR6->VAR34 = 1;
else if (!FUN2(VAR8, ""))
VAR6->VAR34 = 0;
else
return "";
VAR6->VAR35 = 1;
}
else if (!FUN2(VAR7, "")) {
if (!FUN2(VAR8, "")) {
*VAR6->VAR12->VAR36 = '';
}
else {
if (FUN4(VAR6->VAR12->VAR36, VAR8) != VAR19) {
return "";
}
}
VAR6->VAR12->VAR37 = 1;
}
else if (!FUN2(VAR7, "")) {
VAR9 = FUN6(VAR8);
if (VAR9 < 1 || VAR9 > 100)   
return "";
VAR6->VAR38 = VAR9;
VAR6->VAR39 = 1;
}
else if (!FUN2(VAR7, "")) {
if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR40 = 1;
else if (!FUN2(VAR8, ""))
VAR6->VAR12->VAR40 = 0;
else
return "";
VAR6->VAR12->VAR41 = 1;
}
else {
return "";
}
return NULL;
}