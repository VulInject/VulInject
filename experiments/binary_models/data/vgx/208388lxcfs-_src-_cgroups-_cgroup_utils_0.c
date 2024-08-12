char *FUN1(const char *VAR1, ...)
{
va_list VAR2;
char *VAR3, *VAR4;
size_t VAR5 = strlen(VAR1);
size_t VAR6;
size_t VAR7;

VAR4 = FUN2(VAR1);
VAR7 = VAR5;

FUN3(VAR2, VAR1);
while ((VAR3 = FUN4(VAR2, char *)) != NULL) {
VAR6 = strlen(VAR3);

VAR5 += VAR6;
if (VAR3[0] != '')
VAR5++;

VAR4 = FUN5(VAR4, VAR5 + 1);

if (VAR3[0] != '') {
memcpy(VAR4 + VAR7, "", 1);
VAR7++;
}

memcpy(VAR4 + VAR7, VAR3, VAR6);
VAR7 += VAR6;
}
FUN6(VAR2);

VAR4[VAR7] = '';
return VAR4;
}