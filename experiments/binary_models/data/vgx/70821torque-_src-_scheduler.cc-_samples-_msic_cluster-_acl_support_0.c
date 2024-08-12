VAR1 *
FUN1(char *VAR2)
{
char  *VAR3 = "";
char  *VAR4, *VAR5, *VAR6;
VAR1 *VAR7, *VAR8, *VAR9;



if ((VAR4 = FUN2(VAR2)) == NULL)
{
FUN3(VAR10, VAR11, VAR3,
"");
FUN4((""));
return (NULL);
}

VAR7     = NULL;

VAR9 = NULL;

VAR5 = strtok(VAR4, "");

while (VAR5 != NULL)
{

VAR8 = (VAR1 *)malloc(sizeof(VAR1));

if (VAR8 == NULL)
{
FUN3(VAR10, VAR11, VAR3,
"");
FUN4((""));

if (VAR7)
FUN5(VAR7);

return (NULL);
}



VAR8->VAR12 = NULL;

if ((VAR6 = strchr(VAR5, '')) != NULL)
{
*VAR6 = '';


VAR6 ++;

VAR8->VAR12 = FUN2(VAR6);

if (VAR8->VAR12 == NULL)
{
FUN3(VAR10, VAR11, VAR3,
"");
FUN4((""));

if (VAR7)
FUN5(VAR7);

free(VAR8);

return (NULL);
}
}


strncpy(VAR8->VAR5, VAR5, VAR13);


if (VAR9)
VAR9->VAR14 = VAR8;
else
VAR7 = VAR8;

VAR9 = VAR8;

VAR9->VAR14 = NULL;


VAR5 = strtok(NULL, "");
}


free(VAR4);

return (VAR7);
}

int
FUN5(VAR1 *VAR7)
{
int      VAR15 = 0;
VAR1 *VAR16, *VAR17;

for (VAR16 = VAR7; VAR16 != NULL; VAR16 = VAR17)
{
VAR17 = VAR16->VAR14;

if (VAR16->VAR12)
free(VAR16->VAR12);

free(VAR16);

VAR15 ++;
}

return (VAR15);
}

int
FUN6(VAR18 *VAR19, VAR20 *VAR21, char *VAR22)
{

VAR1 *VAR23;
char    *VAR24;



if (!(VAR21->VAR25 & VAR26))
return 1;

VAR24 = VAR19->VAR27;

for (VAR23 = VAR21->VAR2; VAR23 != NULL; VAR23 = VAR23->VAR14)
{
if (!strcmp(VAR24, VAR23->VAR5))
{
return (1);
}


}

if (VAR22)
sprintf(VAR22, "",
VAR21->VAR28);

return (0);
}