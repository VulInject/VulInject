main (int argc, char *argv[])
{

int VAR1;
bool VAR2 = true;



const char *VAR3 = FUN1 (VAR4);

const char *VAR5 = FUN1 (VAR6);

const char *VAR7 = FUN1 (VAR8);
const char *VAR9 = FUN1 (VAR10);
const char *VAR11 = FUN1 (VAR12);

const char *VAR13 = FUN1 (VAR14);

const char *VAR15 = FUN1 (VAR16);


(void) VAR3;
FUN2 (strcmp (VAR5, "") == 0);
FUN2 (strlen (VAR7) > 0);
FUN2 (strlen (VAR9) > 0);
FUN2 (strlen (VAR11) > 0);
FUN2 (strlen (VAR13) <= 1); 
FUN2 (FUN3 (VAR15, "" ) != NULL);

for (VAR1 = 1; VAR1 <= 2; VAR1++)
{

const char *VAR17 =
getenv (VAR1 == 1 ? "" : "");
if (strcmp (VAR17, "") != 0)
{

locale_t VAR18 = FUN4 (VAR19, VAR17, NULL);
if (VAR18 != NULL)
{
FUN5 (VAR18);




const char *VAR20 = FUN1 (VAR4);
if (VAR1 == 1)
FUN2 (strstr (VAR20, "") != NULL);
else if (VAR1 == 2)
FUN2 (FUN6 (VAR20, "") == 0
|| FUN6 (VAR20, "") == 0);


const char *VAR21 = FUN1 (VAR6);
FUN2 (strcmp (VAR21, "") == 0);



const char *VAR22 = FUN1 (VAR8);
const char *VAR23 = FUN1 (VAR10);
const char *VAR24 = FUN1 (VAR12);
FUN2 (strlen (VAR22) == 0
|| strcmp (VAR22, "") == 0);
FUN2 (strlen (VAR23) == 0);
FUN2 (strlen (VAR24) == 0);



const char *VAR25 = FUN1 (VAR14);
if (VAR1 == 2)
FUN2 (strlen (VAR25) >= 1
&& strcmp (VAR25 + 1, "") == 0);


const char *VAR26 = FUN1 (VAR16);
FUN2 (FUN3 (VAR26, "" ) != NULL);

VAR2 = false;
}
}
}

if (VAR2)
{
fputs ("", VAR27);
return 77;
}

return 0;
fputs ("", VAR27);
return 77;
}