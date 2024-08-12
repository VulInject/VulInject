static int FUN1(VAR1* VAR2, VAR3* VAR4, size_t VAR5)
{
char* VAR6;
char* VAR7;
char* VAR8;
char* VAR9;
char* VAR10;
char* VAR11[4];
int VAR12;
int VAR13;
VAR14* VAR15;
VAR6 = strstr((char*)VAR4, ""1.0\""VAR16-8\"");

if (!VAR6)
return -1;

VAR6 += sizeof(""1.0\""VAR16-8\"") - 1;
VAR6 = strstr(VAR6, "");

if (!VAR6)
return -1;

VAR6 += sizeof("") - 1;

VAR10 = strstr(VAR6, "");

if (!VAR10)
return -1;


VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR17 = 0;
{
long VAR18 = FUN2(VAR6, NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR2->VAR5 = VAR18;
}
*VAR7 = '';

if (VAR2->VAR5 <= 0)
return -1;

VAR6 = VAR7 + 1;

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR2->VAR21 = FUN3(VAR6);
*VAR7 = '';

if (!VAR2->VAR21)
return -1;

VAR6 = VAR7 + 1;

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR17 = 0;
{
long VAR18 = FUN2(VAR6, NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR2->VAR22 = VAR18;
}
*VAR7 = '';

if (VAR2->VAR22 <= 0)
return -1;

VAR6 = VAR7 + 1;

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR2->VAR23 = FUN3(VAR6);
*VAR7 = '';

if (!VAR2->VAR23)
return -1;

VAR6 = VAR7 + 1;


VAR9 = VAR6;
VAR13 = 0;

while (VAR6 < VAR10)
{
VAR6 = strstr(VAR6, "");

if (!VAR6)
return -1;

VAR6 += sizeof("") - 1;
VAR8 = strstr(VAR6, "");

if (!VAR8)
return -1;

*VAR8 = '';
VAR6 = VAR8 + sizeof("");
*VAR8 = '';
VAR13++;
}

VAR2->VAR24 = VAR13;
VAR2->VAR25 = NULL;

if (VAR13 > 0)
VAR2->VAR25 = (VAR14*)calloc(VAR2->VAR24, sizeof(VAR14));

if (!VAR2->VAR25)
return -1;

VAR6 = VAR9;
VAR12 = 0;

while (VAR6 < VAR10)
{
VAR6 = strstr(VAR6, "");

if (!VAR6)
return -1;

VAR6 += sizeof("") - 1;
VAR8 = strstr(VAR6, "");

if (!VAR8)
return -1;

*VAR8 = '';

VAR15 = &VAR2->VAR25[VAR12];

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR17 = 0;
{
long VAR18 = FUN4(VAR6, NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR26 = VAR18;
}
*VAR7 = '';

if (VAR15->VAR26 < 0)
return -1;

VAR6 = VAR7 + 1;

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR11[0] = VAR6;
VAR6 = strchr(VAR11[0] + 1, '');

if (!VAR6)
return -1;

*VAR6 = 0;
VAR11[1] = VAR6 + 1;
VAR17 = 0;
{
long VAR18 = FUN2(VAR11[0], NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR27 = VAR18;
}
{
long VAR18 = FUN2(VAR11[1], NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR28 = VAR18;
}
*VAR7 = '';
VAR6 = VAR7 + 1;

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
VAR11[0] = VAR6;
VAR6 = strchr(VAR11[0] + 1, '');

if (!VAR6)
return -1;

*VAR6 = 0;
VAR11[1] = VAR6 + 1;
VAR6 = strchr(VAR11[1] + 1, '');

if (!VAR6)
return -1;

*VAR6 = 0;
VAR11[2] = VAR6 + 1;
VAR6 = strchr(VAR11[2] + 1, '');

if (!VAR6)
return -1;

*VAR6 = 0;
VAR11[3] = VAR6 + 1;
VAR17 = 0;
{
long VAR18 = FUN2(VAR11[0], NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR29 = VAR18;
}
{
long VAR18 = FUN2(VAR11[1], NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR30 = VAR18;
}
{
long VAR18 = FUN2(VAR11[2], NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR31 = VAR18;
}
{
long VAR18 = FUN2(VAR11[3], NULL, 0);

if ((VAR17 != 0) || (VAR18 < VAR19) || (VAR18 > VAR20))
return -1;

VAR15->VAR32 = VAR18;
}
*VAR7 = '';
VAR6 = VAR7 + 1;

VAR6 = strstr(VAR6, """);

if (!VAR6)
return -1;

VAR6 += sizeof(""") - 1;
VAR7 = strchr(VAR6, '');

if (!VAR7)
return -1;

*VAR7 = '';
FUN5(VAR6, VAR15->VAR33);
*VAR7 = '';

VAR6 = VAR8 + sizeof("");
*VAR8 = '';
VAR12++;
}

return 1;
}