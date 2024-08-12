int FUN1 (VAR1 * VAR2, VAR3 * VAR4,
int VAR5)
{
int VAR6 = 0;
int VAR7 = 0;
int VAR8 = -1;
char *VAR9;
VAR1 *VAR10 = NULL;
xmlNodePtr VAR11;
xmlNodePtr VAR12 = NULL;

if(VAR2==NULL) {
FUN2("");
return 0;
}

for (VAR7 = 0; VAR7 < VAR5; VAR7++)
{
VAR11 = FUN3 (VAR4[VAR7]);
if (VAR11 == NULL)
{
FUN4 ("");
} else {
if (VAR11->VAR13) {
for (VAR12 = VAR11->VAR13; VAR12; VAR12 = VAR12->VAR14)
{
if (VAR12->VAR15 != VAR16) {
continue;
}
if(FUN5((char *)VAR12->VAR17, "") == 0) {

if(VAR10)
FUN6(VAR10);
VAR10 = FUN7(VAR12, (const VAR1 *)"");
if(VAR10)
VAR8 = VAR7;
}
if(VAR10 == NULL) {
continue;
}
VAR9 = FUN8(VAR12, "", NULL);
if(VAR9) {

if((FUN5(VAR9, "") == 0)
&& (VAR8 == VAR7) && (VAR8 >= 0)
&& (FUN5((char *)VAR10,
(char *)VAR2)
== 0)) {
FUN4("",
VAR2);
VAR6 += VAR18;
}

if((FUN5(VAR9, "") == 0)
&& (VAR8 == VAR7) && (VAR8 >= 0)
&& (FUN5((char *)VAR10,
(char *)VAR2)
== 0)) {
FUN4("", VAR2);
VAR6 += VAR19;
}
if((FUN5(VAR9, "") == 0) && (VAR8 == VAR7)
&& (VAR8 >= 0)
&& (FUN5((char *)VAR10,
(char *)VAR2)
== 0)) {
FUN4("", VAR2);
VAR6 += VAR20;
}
if((FUN5(VAR9, "") == 0)
&& (VAR8 == VAR7) && (VAR8 >= 0)
&& (FUN5((char *)VAR10,
(char *)VAR2)
== 0)) {
FUN4("",
VAR2);
VAR6 += VAR21;
}
if((FUN5(VAR9, "") == 0) && (VAR8 == VAR7)
&& (VAR8 >= 0)
&& (FUN5((char *)VAR10,
(char *)VAR2)
== 0)) {
FUN4("", VAR2);
VAR6 += VAR22;
}
FUN6(VAR9);
}
}
}
}
}
if(VAR10) FUN6(VAR10);
FUN4 ("", VAR2, VAR6);
return VAR6;
}