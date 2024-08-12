static int FUN1(char *VAR1, char *VAR2[], int VAR3)
{
int VAR4 = 0;

while (*VAR1) {
char *VAR5;


VAR1 = FUN2(VAR1);
if (!*VAR1)
break;	
if (*VAR1 == '')
break;	


if (*VAR1 == '' || *VAR1 == ''') {
int VAR6 = *VAR1++;
for (VAR5 = VAR1; *VAR5 && *VAR5 != VAR6; VAR5++)
;
if (!*VAR5) {
FUN3("", VAR1);
return -VAR7;	
}
} else {
for (VAR5 = VAR1; *VAR5 && !FUN4(*VAR5); VAR5++)
;
FUN5(VAR5 == VAR1);
}


if (VAR4 == VAR3) {
FUN3("", VAR3);
return -VAR7;	
}
if (*VAR5)
*VAR5++ = '';	
VAR2[VAR4++] = VAR1;
VAR1 = VAR5;
}

if (VAR8) {
int VAR9;
FUN6("");
for (VAR9 = 0; VAR9 < VAR4; VAR9++)
FUN7(""%VAR10\"", VAR2[VAR9]);
FUN7("");
}

return VAR4;
}