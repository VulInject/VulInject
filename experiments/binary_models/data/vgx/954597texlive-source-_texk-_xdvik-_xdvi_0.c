void
FUN1(const char *VAR1, char **VAR2, char **VAR3)
{

const char *VAR4;
char *VAR5;


const char *const VAR6 = "";

FUN2((VAR7, "", VAR1));

VAR4 = strrchr(VAR1, '');
if (VAR4 != NULL)
++VAR4;
else {
VAR4 = VAR1;
}



if (memcmp(VAR4, "", 5) == 0) {
VAR4 += 5;
}
*VAR2 = xstrdup(VAR4);

FUN2((VAR7, "", *VAR2));
if ((VAR5 = strstr(*VAR2, "")) != NULL) {

*VAR5 = '';
}
FUN2((VAR7, "", *VAR2));

*VAR3 = xmalloc(strlen(VAR6)
+ strlen(VAR8)
+ strlen(*VAR2)
+ VAR9
+ 2);	
FUN2((VAR7, "", VAR10));
sprintf(*VAR3, VAR6, VAR8, *VAR2, VAR10,
(VAR10 > 1) ? "" : "");

FUN2((VAR7, "", *VAR3, *VAR2));
}