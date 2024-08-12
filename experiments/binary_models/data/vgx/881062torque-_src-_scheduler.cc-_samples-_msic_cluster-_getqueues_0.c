int
FUN1(VAR1 *VAR2)
{
char *VAR3 = "";
double VAR4;
int   VAR5 = 0;



if (VAR6)
VAR5 = FUN2(VAR2, &VAR6);

if (VAR5 < 0)
{
sprintf(VAR7, "",
VAR3, VAR2->VAR8);
FUN3(VAR9, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));
}

if (VAR2->VAR11 == VAR12)
VAR2->VAR11 = 0;

if (VAR2->VAR13   == VAR12)
VAR2->VAR13   = 0;

if (VAR2->VAR14    == VAR12)
VAR2->VAR14    = 0;



if (strcmp(VAR2->VAR8, VAR15->VAR2->VAR8) != 0 &&
(VAR2->VAR16 & VAR17) == 0)
{
VAR2->VAR18 = FUN5(VAR2->VAR19);

if (VAR2->VAR18 != NULL)
{


VAR2->VAR18->VAR20 += VAR2->VAR11;
VAR2->VAR18->VAR21   += VAR2->VAR13;

if (VAR2->VAR18->VAR22 < 1)
{

VAR4 = VAR2->VAR18->VAR23 - VAR2->VAR18->VAR21;

if (VAR4 < 1)
VAR2->VAR18->VAR22 = 0;
else
VAR2->VAR18->VAR22 = VAR4;
}

VAR2->VAR18->VAR24       += VAR2->VAR14;

VAR2->VAR25 =
(VAR2->VAR25 <= VAR2->VAR18->VAR26 ?
VAR2->VAR25  : VAR2->VAR18->VAR26);
}
else
{
(void)sprintf(VAR7,
"",
VAR2->VAR8, VAR2->VAR19);
FUN3(VAR27, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));

VAR2->VAR16 |= VAR28;
}
}

return (0);
}

int
FUN2(VAR1 *VAR2, VAR29 **VAR30)
{
VAR29    *VAR31, *VAR32, *VAR33, *VAR34, *VAR35;
int     VAR5;
int     VAR14, VAR36, VAR37, VAR38;


VAR35 = NULL;


VAR14 = 0;
VAR36 = 0;
VAR37 = 0;
VAR38 = 0;


VAR5 = 0;


VAR34 = NULL;

if (VAR2->VAR39)
{
for (VAR34 = VAR2->VAR39; VAR34->VAR33 != NULL; VAR34 = VAR34->VAR33)

;
}

VAR32 = NULL;

for (VAR31 = *VAR30; VAR31 != NULL; VAR31 = VAR33)
{
VAR33 = VAR31->VAR33;



if (strcmp(VAR31->VAR8, VAR2->VAR8))
{
VAR32 = VAR31;
continue;
}


if (VAR31 == *VAR30)
{



*VAR30 = VAR33;
VAR32 = *VAR30;

}
else
{



VAR32->VAR33 = VAR31->VAR33;
}


if (VAR34 == NULL)
VAR2->VAR39 = VAR31;
else
VAR34->VAR33 = VAR31;

VAR34 = VAR31;

VAR31->VAR33 = NULL;

if (VAR31->VAR16 & VAR40)
{

free(VAR31->VAR8);
VAR31->VAR8 = VAR2->VAR8;
VAR31->VAR2 = VAR2;


VAR31->VAR16 &= ~VAR40;
}


VAR5 ++;

switch (VAR31->VAR41)
{

case '':
VAR14 ++;



if (VAR31->VAR42 < 0)
{
VAR31->VAR42 = VAR43;
}


if ((VAR35 == NULL) ||
(VAR31->VAR42 > VAR35->VAR42))
{
VAR35 = VAR31;
}

break;

case '':
VAR36 ++;
break;

case '':
VAR37 ++;
break;

default:
VAR38 ++;
break;
}

}


if (VAR35)
VAR2->VAR44 = VAR45 + VAR35->VAR42;
else
VAR2->VAR44 = 0;

return (VAR5);
}

int FUN6(VAR1 *VAR2)
{
char   *VAR3 = "";
VAR29    *VAR31;
int     VAR36, VAR14;
int     VAR46;

VAR46 = 1; 


VAR36 = VAR14 = 0;

for (VAR31 = VAR2->VAR39; VAR31 != NULL; VAR31 = VAR31->VAR33)
{
switch (VAR31->VAR41)
{

case '':
VAR14 ++;
break;

case '':
VAR36 ++;
break;

default:

break;
}
}

if (VAR2->VAR14 != VAR14)
{
sprintf(VAR7,
"",
VAR2->VAR8, VAR2->VAR14, VAR14);
FUN3(VAR9, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));
VAR46 = 0;
}

if (VAR2->VAR36 != VAR36)
{
sprintf(VAR7,
"",
VAR2->VAR8, VAR2->VAR36, VAR36);
FUN3(VAR9, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));
VAR46 = 0;
}

if (VAR2->VAR14 && (VAR2->VAR44 < VAR45))
{
sprintf(VAR7,
"",
VAR2->VAR8, (long)(VAR45 - VAR2->VAR44));
FUN3(VAR9, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));
VAR46 = 0;
}

return (VAR46);
}

int
FUN7(void)
{
char *VAR3 = "";
VAR47 *VAR48;
int VAR49 = 0;
VAR50 *VAR51, *VAR52;
VAR53 *VAR54;
static AttrList VAR55[] = {{NULL, VAR56, "", ""}};



if ((VAR51 = FUN8(VAR57, NULL, VAR55, NULL, &VAR49)) == NULL)
{
sprintf(VAR7, "", VAR49);
FUN3(VAR9, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));
return (-1);
}


for (VAR48 = VAR58; VAR48 != NULL; VAR48 = VAR48->VAR33)
VAR48->VAR2->VAR16 |= VAR28;


for (VAR52 = VAR51; VAR52 != NULL; VAR52 = VAR52->VAR33)
{
for (VAR54 = VAR52->VAR59; VAR54 != NULL; VAR54 = VAR54->VAR33)
{

if ((strstr(VAR54->VAR60, VAR61))    ||
(strstr(VAR54->VAR60, VAR62))    ||
(strstr(VAR54->VAR60, VAR63)) ||
(strstr(VAR54->VAR60, "")))
{

for (VAR48 = VAR58; VAR48 != NULL; VAR48 = VAR48->VAR33)
{
if (strstr(VAR48->VAR2->VAR19, VAR52->VAR64))
{
VAR48->VAR2->VAR16 &= ~VAR28;
break;
}
}
}
else
{
sprintf(VAR7, "",
VAR52->VAR64, VAR54->VAR60);
FUN3(VAR9, VAR10, VAR3,
VAR7);
FUN4(("", VAR3, VAR7));
}
}
}

FUN9(VAR51);

return (0);
}


VAR65 FUN10(char *VAR66)
{
char   *VAR3 = "";
size_t  VAR67, VAR68;
VAR50 *VAR51;
int VAR49 = 0;
VAR53 *VAR54;
static AttrList VAR55[] =
{   {&VAR55[1],  VAR69, "", ""},
{NULL,       VAR70, "", ""}
};

VAR68  = (VAR65)0;
VAR67  = (VAR65)0;



if ((VAR51 = FUN11(VAR57, VAR66, VAR55, NULL, &VAR49)) == NULL)
{
sprintf(VAR7, ""%VAR71\"",
VAR66, VAR49);
FUN3(VAR9, VAR10, VAR3, VAR7);
FUN4(("", VAR3, VAR7));
return (VAR12);
}



for (VAR54 = VAR51->VAR59; VAR54 != NULL; VAR54 = VAR54->VAR33)
{

if (!strcmp(VAR54->VAR64, VAR70))
{
if (!strcmp("", VAR54->VAR72))
{
VAR67 = FUN12(VAR54->VAR60);
continue;
}

continue;
}

if (!strcmp(VAR54->VAR64, VAR69))
{
if (!strcmp("", VAR54->VAR72))
{
VAR68 = FUN12(VAR54->VAR60);