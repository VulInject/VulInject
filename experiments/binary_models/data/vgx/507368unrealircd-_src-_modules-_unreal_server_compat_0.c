int FUN1(char **VAR1, char *VAR2, int *VAR3)
{
static char VAR4[8192];
char VAR5[512];
char *VAR6 = NULL;
char *VAR7;


VAR2 = strstr(VAR2, "");
if (!VAR2)
return 0;
VAR2 += 2;




FUN2(VAR4, *VAR1, sizeof(VAR4), VAR2 - *VAR1);


FUN3(VAR5, VAR2, sizeof(VAR5));


for (VAR7 = FUN4(&VAR6, VAR5, ""); VAR7; VAR7 = FUN4(&VAR6, NULL, ""))
{
if (*VAR7 == '')
{

char *VAR8 = strchr(VAR7, '');
const char *VAR9;
if (!VAR8)
{
FUN5(VAR10, "", "", NULL,
"",
FUN6("", VAR7));
continue;
}
if (!strchr(""\\", VAR8[1]))
goto VAR11;
*VAR8++ = '';
VAR9 = FUN7(VAR8+1, VAR12, &VAR13, 1);
if (!VAR9)
{
FUN5(VAR10, "", "", NULL,
"",
FUN6("", VAR7+1));
continue;
}
FUN8(VAR4, VAR7, sizeof(VAR4)); 
FUN8(VAR4, "", sizeof(VAR4)); 
FUN9(VAR4, VAR8, sizeof(VAR4), 1); 
FUN8(VAR4, VAR9, sizeof(VAR4)); 
FUN8(VAR4, "", sizeof(VAR4));
} else
if (strchr(""\\", *VAR7))
{

const char *VAR9 = FUN7(VAR7+1, VAR12, &VAR13, 1);
if (!VAR9)
{
FUN5(VAR10, "", "", NULL,
"",
FUN6("", VAR7+1));
continue;
}
FUN9(VAR4, VAR7, sizeof(VAR4), 1);
FUN8(VAR4, VAR9, sizeof(VAR4));
FUN8(VAR4, "", sizeof(VAR4));
} else {
VAR11:
FUN8(VAR4, VAR7, sizeof(VAR4));
FUN8(VAR4, "", sizeof(VAR4));
}
}


if (VAR4[strlen(VAR4)-1] == '')
VAR4[strlen(VAR4)-1] = '';


if (VAR4[strlen(VAR4)-1] != '')
FUN8(VAR4, "", sizeof(VAR4));


*VAR1 = VAR4;
*VAR3 = strlen(VAR4);

return 0;
}