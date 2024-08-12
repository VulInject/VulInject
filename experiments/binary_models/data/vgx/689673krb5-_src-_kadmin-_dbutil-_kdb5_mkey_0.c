static int FUN1(char *VAR1, char *VAR2, char **VAR3)
{
int VAR4;
char *VAR5;


if (VAR1[strlen(VAR1)-1] == '')
return VAR6;




VAR4 = (VAR2 != NULL) && (strchr(VAR1, '') == NULL);
VAR5 = (char *) malloc(strlen(VAR1)*2+ 3 + (VAR4 ? 3 : 0));
if (VAR5 == NULL)
return VAR7;
*VAR3 = VAR5;

*VAR5++ = '';
while (*VAR1) {
switch (*VAR1) {
case '':
*VAR5++ = '';
break;
case '':
*VAR5++ = '';
*VAR5++ = '';
break;
case '':
case '':
case '':
*VAR5++ = '';
*VAR5++ = *VAR1;
break;
case '':
*VAR5++ = '';
*VAR5++ = *++VAR1;
break;
default:
*VAR5++ = *VAR1;
break;
}
VAR1++;
}

if (VAR4) {
*VAR5++ = '';
*VAR5++ = '';
*VAR5++ = '';
}

*VAR5++ = '';
*VAR5++ = '';
return 0;
}