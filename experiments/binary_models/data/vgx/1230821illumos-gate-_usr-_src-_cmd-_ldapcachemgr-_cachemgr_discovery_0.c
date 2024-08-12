static const char *FUN1() {
const char *VAR1 = FUN2("");
return (VAR1 ? VAR1 : "");
}


static VAR2 FUN3(char **VAR3, char **VAR4,
char **VAR5, int *VAR6) {
char *VAR7 = NULL;
char *VAR8 = NULL;
char *VAR9 = NULL;
char *VAR10 = NULL;

if (!VAR3 || !VAR4)
return (VAR11);

if (!VAR5 || !*VAR5 || !**VAR5)
return (VAR11);

VAR10 = *VAR5;


switch (*VAR6) {
case 0:
switch (*VAR10) {
case '':
*VAR6 = 1;
break;
case '':
VAR10++;
*VAR6 = 0;
break;
default:
*VAR6 = 2;
}
*VAR5 = VAR10;
return (FUN3(VAR3, VAR4, VAR5, VAR6));
break;
case 1:
switch (*VAR10) {
case '':

VAR10++;
VAR8 = VAR10;
VAR7 = strchr(VAR10, '');	
if (!VAR7)
return (VAR11);	

VAR10 = strchr(VAR8, '');
if (VAR10) {
if (VAR10 > VAR7)
return (VAR11);  
*VAR10++ = 0;
} else {
return (VAR11);	
}

default:

if (!VAR7) {	
VAR8 = *VAR3;	
VAR7 = strchr(VAR10, '');
if (!VAR7)
return (VAR11);	
}

VAR9 = VAR10;
VAR10 = strchr(VAR9, '');	
if (!VAR10 || VAR10 > VAR7) {

VAR10 = VAR7;
*VAR6 = 0;
}	
*VAR10++ = 0;
break;
}
break;
case 2:

VAR8 = VAR10;
VAR10 = strchr(VAR8, '');
if (VAR10) {
*VAR10++ = 0;
}
VAR9 = NULL;
*VAR6 = 0;
break;
default:
return (VAR11);
}

*VAR3 = VAR8;
*VAR4 = VAR9;
*VAR5 = VAR10;

return (VAR12);
}