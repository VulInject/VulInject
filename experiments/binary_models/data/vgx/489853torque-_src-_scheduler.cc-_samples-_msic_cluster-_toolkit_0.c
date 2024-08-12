int
FUN1(char *VAR1, VAR2 *VAR3)
{
int    VAR4;
time_t VAR5;



if (FUN2(VAR1, &VAR4) == 0)
{
*VAR3 = (VAR2) VAR4;
return 0;
}


if (FUN3(VAR1, &VAR5) == 0)
{
*VAR3 = VAR5;
return 0;
}


return 1;
}


char *
FUN4(time_t bool)
{
static char VAR1[64];
char   VAR6[48];

if ((bool == (VAR2) 0) || (bool == (VAR2) 1))
return (FUN5(bool));

(void)FUN6(VAR6, sizeof(VAR6) - 1, VAR7, FUN7(&bool));

if (FUN8(NULL) >= bool)
(void)sprintf(VAR1, "", FUN5(1), VAR6);
else
(void)sprintf(VAR1, "", FUN5(0), VAR6);

return VAR1;
}




struct VAR8
{

struct VAR8 *VAR9;
char    *VAR10;
time_t   VAR11;
int      VAR12;
};

typedef struct filestatus VAR13;

static VAR13 *VAR14 = NULL;

int
FUN9(char *VAR10)
{
char    *VAR15 = "";
VAR13 *VAR16, *VAR17, *VAR18 = NULL;


VAR17 = NULL;

for (VAR16 = VAR14; VAR16 != NULL; VAR16 = VAR16->VAR9)
{
if (strcmp(VAR10, VAR16->VAR10) == 0)
{
sprintf(VAR19, "", VAR15,
VAR10);
FUN10(VAR20, VAR21, VAR15, VAR19);
FUN11(("", VAR15, VAR19));
return (-1);
}

VAR17 = VAR16;
}


VAR18 = (VAR13 *) malloc(sizeof(VAR13));

if (VAR18 == NULL)
{
sprintf(VAR19,
"",
VAR15, VAR10);
FUN10(VAR20, VAR21, VAR15, VAR19);
return (-1);
}


memset(VAR18, 0, sizeof(VAR13));


VAR18->VAR10 = FUN12(VAR10);

if (VAR18->VAR10 == NULL)
{
FUN10(VAR20, VAR21, VAR15,
"");
free(VAR18);
return (-1);
}


if (VAR17)
VAR17->VAR9 = VAR18;
else
VAR14 = VAR18;

(void)sprintf(VAR19, "", VAR15, VAR10);

FUN10(VAR20, VAR21, VAR15, VAR19);


(void)FUN13(VAR10, 1);

return (0);
}

int
FUN13(char *VAR10, int VAR22)
{
char   *VAR15 = "";

VAR13 *VAR16;

struct stat VAR23;
int     VAR12;


VAR12      = 1;

if (VAR10 == NULL)
{
FUN11(("", VAR15));
return (-1);
}

for (VAR16 = VAR14; VAR16 != NULL; VAR16 = VAR16->VAR9)
{
if (strcmp(VAR10, VAR16->VAR10) == 0)
break;
}