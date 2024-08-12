static int
FUN1(const void *VAR1, const void *VAR2)
{
VAR3 *VAR4;
VAR3 *VAR5;

VAR4 = (VAR3 *)VAR1;
VAR5 = (VAR3 *)VAR2;

return strcmp(VAR4->VAR6, VAR5->VAR6);
}


int
FUN2(char *VAR7)
{
int     VAR8;
float   VAR9, VAR10;



if (!FUN3(VAR7, &VAR9))
return (100);  


if (VAR9 < 0.0)
return (0);


if (!FUN4(VAR7, &VAR10))
VAR10 = 0.0;

VAR8 = (int)((VAR10 / VAR9 * 100.0) + 0.5);

if (VAR8 < 100)
return (0);  
else
return (VAR8); 
}


int
FUN5(VAR11 *VAR12)
{
char   *VAR13 = "";
char    VAR14[4 * VAR15 + 1];
char   *VAR16 = "";
float   VAR9, VAR10;
char   *VAR7;
int    VAR17 = 0;

char   *VAR18 = ""
""
""
""
""
""
""
""
""
""
""
"";


VAR7 = (VAR12->VAR7 != NULL) ? VAR12->VAR7 : VAR16;



if (!FUN3(VAR7, &VAR9))
VAR9 = 0.0;


if (!FUN4(VAR7, &VAR10))
VAR10 = 0.0;


if (VAR10 < VAR9)
{
(void)sprintf(VAR19, "",
VAR7, VAR12->VAR20);
FUN6(VAR21, VAR22, VAR13, VAR19);
return (1);
}


(void)sprintf(VAR19,
"",
VAR12->VAR20, VAR7, VAR10, VAR9);

FUN6(VAR21, VAR22, VAR13, VAR19);

FUN7(("", VAR13, VAR19));

sprintf(VAR14, VAR18, VAR12->VAR20, VAR7, VAR10, VAR9);


if (FUN8(VAR12, VAR14))
{
(void)sprintf(VAR19, "", VAR17);
FUN6(VAR21, VAR22, VAR13, VAR19);
}

return (0);
}


static int
FUN4(char *VAR6, float *VAR10)
{
int     VAR23;

for (VAR23 = 0; VAR23 < VAR24; VAR23++)

if (!strcmp(VAR25[VAR23].VAR6, VAR6))
{
*VAR10 = VAR25[VAR23].VAR26;
return (1);
}

return (0);  
}


static int
FUN3(char *VAR6, float *VAR9)
{
int     VAR23 = 0;

for (VAR23 = 0; VAR23 < VAR24; VAR23++)

if (!strcmp(VAR25[VAR23].VAR6, VAR6))
{