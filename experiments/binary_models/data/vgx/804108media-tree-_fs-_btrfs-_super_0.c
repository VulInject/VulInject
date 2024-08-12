static char *FUN1(char *VAR1)
{
char *VAR2, *VAR3, *VAR4;

if (!VAR1)
return FUN2("", VAR5);


VAR2 = VAR3 = FUN3(strlen(VAR1) + strlen("") + 1, VAR5);
if (!VAR2)
return NULL;

while (1) {
VAR4 = FUN4(VAR1, '');
if (!FUN5(VAR1, "") &&
!FUN5(VAR1, "")) {
memcpy(VAR3, VAR1, VAR4 - VAR1);
VAR3 += VAR4 - VAR1;
*VAR3++ = '';
}
if (*VAR4)
VAR1 = VAR4 + 1;
else
break;
}
strcpy(VAR3, "");

return VAR2;
}