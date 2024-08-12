void
FUN1(VAR1 *VAR2, int *VAR3)
{
int VAR4, VAR5, VAR6, VAR7;
double VAR8;
VAR1 *VAR9;
char **VAR10, *VAR11;

if (VAR12) {
static double *VAR13;
if (!VAR13) {
VAR13 = calloc(VAR14, sizeof(*VAR13));
if (!VAR13)
FUN2(1, NULL);
}
memset(VAR13, 0, VAR14 * sizeof(*VAR13));
for (VAR6 = 0; VAR6 < VAR15; VAR6++) {
if (!VAR3[VAR6])
continue;
VAR10 = VAR16;
VAR9 = VAR2 + (VAR17 * VAR6);
VAR4 = 0;
while ((VAR11 = *VAR10++) != NULL) {
if (*VAR11 != '') {

VAR13[VAR4++] += *VAR9++;
}
}
}
if (VAR18 > 2 || !VAR19) {
VAR10 = VAR16;
VAR4 = 0;
VAR5 = 0;
move(2, 0);
FUN3();
FUN4("", VAR20);

while ((VAR11 = *VAR10++) != NULL) {
if (*VAR11 != '') {
VAR8 = VAR13[VAR4++] / VAR20;

FUN4((VAR8 >= 1000 ? "" :
""), VAR5++ == 0 ? "" : "",
VAR8 / 10., VAR11);
}
}
FUN5();
}
return;
}
for (VAR6 = VAR7 = 0; VAR6 < VAR15; VAR6++) {

if (!VAR3[VAR6])
continue;


VAR10 = VAR16;
VAR5 = 0;
VAR9 = VAR2 + (VAR17 * VAR6);

if (VAR18 > 2 + VAR7 || !VAR19) {
move(2 + VAR7, 0);
FUN3();
FUN6(FUN7(VAR6));

while ((VAR11 = *VAR10++) != NULL) {
if (*VAR11 != '') {

VAR8 = *VAR9++;


FUN4((VAR8 >= 1000 ? "" :
""), VAR5++ == 0 ? "" : "",
VAR8 / 10., VAR11);
}
}
FUN5();
VAR7++;
}
}
}