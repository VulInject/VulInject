static void FUN1(VAR1 *VAR2)
{
char VAR3[512], *VAR4;
unsigned int VAR5 = 0;
int VAR6 = -1;
int VAR7 = -1;
int VAR8 = -1;
int VAR9 = -1;
int VAR10 = -1;
unsigned int VAR11;

while (fgets(VAR3, sizeof(VAR3), VAR2)) {
VAR5++;

VAR4 = strchr(VAR3, '');
if (VAR4)
*VAR4 = 0;
VAR4 = strchr(VAR3, '');
if (VAR4)
*VAR4 = 0;
if (VAR3[0] == '' || !VAR3[0])
continue;
VAR4 = VAR3;
if (VAR3[0] == '' && VAR3[1] == '' && VAR3[2] == '' &&
VAR3[3] == '' && VAR3[4] == '' &&
VAR3[5] == '' && VAR3[6] == '' && 
VAR3[7] == '') {
continue;
}
if (VAR3[0] == '' && VAR3[1] == '' &&
VAR3[2] == '' &&  VAR3[3] == '') {
continue;
}
if (VAR3[0] == '' && VAR3[1] == '' && VAR3[2] == '' &&
VAR3[3] == '' &&  VAR3[4] == '') {
continue;
}
if (VAR3[0] == '' &&  VAR3[1] == '') {
VAR9 = VAR7 = VAR6 = VAR8 = -1;

VAR10 = 1;
continue;
}
if (VAR3[0] == '' &&  VAR3[1] == '') {

VAR4 = VAR3+2;
while (FUN2(*VAR4))
VAR4++;
if (!FUN3(*VAR4)) {
FUN4("", VAR5);
continue;
}
VAR11 = FUN5(VAR4, &VAR4, 16);
while (FUN2(*VAR4))
VAR4++;
if (!*VAR4) {
FUN4("", VAR5);
continue;
}
if (FUN6(VAR4, VAR11))
FUN4("",
VAR5, VAR11, VAR4);
FUN7("", VAR5, VAR11, VAR4);
VAR9 = VAR10 = VAR6 = VAR8 = -1;
VAR7 = VAR11;
continue;
}
if (VAR3[0] == '' && VAR3[1] == '' && FUN2(VAR3[2])) {

continue;
}
if (VAR3[0] == '' && VAR3[1] == '' && VAR3[2] == ''
&& FUN2(VAR3[3])) {

continue;
}
if (FUN3(*VAR4)) {

VAR11 = FUN5(VAR4, &VAR4, 16);
while (FUN2(*VAR4))
VAR4++;
if (!*VAR4) {
FUN4("", VAR5);
continue;
}
if (FUN8(VAR4, VAR11))
FUN4("",
VAR5, VAR11, VAR4);
FUN7("", VAR5, VAR11, VAR4);
VAR6 = VAR11;
VAR9 = VAR10 = VAR7 = VAR8 = -1;
continue;
}
if (VAR3[0] == '' && FUN3(VAR3[1])) {

VAR11 = FUN5(VAR3+1, &VAR4, 16);
while (FUN2(*VAR4))
VAR4++;
if (!*VAR4) {
FUN4("",
VAR5);
continue;
}
if (VAR6 != -1) {
if (FUN9(VAR4, VAR6, VAR11))
FUN4("",
VAR5, VAR6, VAR11, VAR4);
FUN7("", VAR5,
VAR6, VAR11, VAR4);
continue;
}
if (VAR7 != -1) {
if (FUN10(VAR4, VAR7, VAR11))
FUN4("",
VAR5, VAR7, VAR11, VAR4);
FUN7("", VAR5,
VAR7, VAR11, VAR4);
VAR8 = VAR11;
continue;
}
if (VAR9 != -1) {

continue;
}
if (VAR10 != -1) {

continue;
}
FUN4("",
VAR5);
continue;
}
if (VAR3[0] == '' && VAR3[1] == '' && FUN3(VAR3[2])) {

VAR11 = FUN5(VAR3+2, &VAR4, 16);
while (FUN2(*VAR4))
VAR4++;
if (!*VAR4) {
FUN4("",
VAR5);
continue;
}
if (VAR7 != -1 && VAR8 != -1) {
if (FUN11(VAR4, VAR7, VAR8,
VAR11))
FUN4("",
VAR5, VAR7, VAR8,
VAR11, VAR4);
FUN7("",
VAR5, VAR7, VAR8, VAR11, VAR4);
continue;
}
FUN4("",
VAR5);
continue;
}
if (VAR3[0] == '' && VAR3[1] == '' &&
VAR3[2] == '' &&  VAR3[3] == '') {
continue;
}
if (VAR3[0] == '' && VAR3[1] == '' &&
VAR3[2] == '' &&  VAR3[3] == '') {
VAR10 = VAR7 = VAR6 = VAR8 = -1;

VAR9 = 1;
continue;
}
if (VAR3[0] == '' && VAR3[1] == '')
continue;

if (VAR3[0] == '' && VAR3[1] == '')
continue;

FUN4("", VAR5);
}
}