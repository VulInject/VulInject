void
FUN1(void)
{
int VAR1, VAR2;
wchar_t *VAR3, *VAR4;
size_t  VAR5 = 256, VAR6;
int VAR7 = 0;

VAR4 = (wchar_t *)malloc(sizeof (wchar_t) * VAR5);
if (!VAR4) {

(void) fprintf(VAR8, "");
FUN2(1);
}
VAR3 = VAR4;
VAR6 = VAR5;

(void) malloc(1024 * 1024);


for (VAR1 = 0; VAR1 < VAR9; VAR1++) {
VAR2 = VAR10[FUN3(VAR11[VAR1].VAR12)];
if (VAR6 <= VAR2) {

size_t  VAR13;


VAR13 = VAR3 - VAR4;

VAR4 = (wchar_t *)realloc(VAR4,
sizeof (wchar_t) * (VAR5 + (VAR2 * VAR14)));
if (!VAR4) {
(void) fprintf(VAR8, "");
FUN2(1);
}

VAR3 = VAR4 + VAR13;
VAR5 += VAR2 * VAR14;
VAR6 += VAR2 * VAR14;
}
switch (VAR11[VAR1].VAR15) {
case VAR16:
default:
VAR6 -= VAR2;
*VAR3++ = VAR17'';
while (--VAR2 > 0) {
*VAR3++ = VAR17'';
VAR1++;
}
break;
case VAR18:
VAR6 -= VAR2;
*VAR3++ = VAR17'';
while (--VAR2 > 0) {
*VAR3++ = VAR17'';
VAR1++;
}
break;
case VAR19:
VAR6--;
*VAR3++ = VAR11[VAR1].VAR12;
VAR7 = 1;
break;
}
}
(void) FUN4(VAR17'');
for (*VAR3 = VAR17''; *VAR3 == VAR17''; VAR3--)
*VAR3 = VAR17'';
for (VAR3 = VAR4; *VAR3; VAR3++)
(void) FUN4(*VAR3);
if (VAR7) {
(void) FUN4(VAR17'');
for (VAR3 = VAR4; *VAR3; VAR3++)
(void) FUN4(*VAR3 == VAR17'' ? VAR17'' : *VAR3);
(void) FUN4(VAR17'');
for (VAR3 = VAR4; *VAR3; VAR3++)
(void) FUN4(*VAR3 == VAR17'' ? VAR17'' : *VAR3);
}
free(VAR4);
}