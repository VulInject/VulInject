void FUN1(

VAR1   *VAR2,
char            *VAR3,
char            *VAR4,
char            *VAR5,
char            *VAR6,
char            *VAR7,
int              VAR8,
int              VAR9,
int              VAR10,
VAR11::VAR12&     VAR13,
VAR11::VAR12&     VAR14)

{
VAR11::string      VAR15 = "";
char            VAR16[VAR17 * 2];

VAR13.FUN2();

snprintf(VAR16, sizeof(VAR16), VAR18, 
(VAR6 != NULL) ? VAR6 : VAR19);
VAR13 += VAR16;


snprintf(VAR16, sizeof(VAR16), VAR20, VAR3, VAR4);
VAR13 += VAR16;

if (VAR7 == NULL)
{
FUN3(VAR2, VAR6, VAR8, VAR9, VAR10, VAR13, VAR14);
}
else
{

FUN4(VAR7, VAR6, VAR9, VAR10, VAR13, VAR14);
}


snprintf(VAR16, sizeof(VAR16), "" | %VAR21",
(VAR5 != NULL) ? VAR5 : VAR22);
VAR13 += VAR16;
} 



int FUN5(

VAR23 *VAR24)

{
char    *VAR25 = (char *)FUN6(VAR24, (const VAR26 *)VAR27);
int      VAR28 = VAR29;
VAR23 *VAR30;
VAR23 *VAR31;


if ((VAR25) && !strcmp(VAR25, ""))
VAR28 = VAR32;

for (VAR30 = VAR24->VAR33; VAR30 != NULL; VAR30 = VAR30->VAR34)
{
if (!strcmp((const char *)VAR30->VAR35, VAR36))
{
for (VAR31 = VAR30->VAR33; VAR31 != NULL; VAR31 = VAR31->VAR34)
{
if (!strcmp((const char *)VAR31->VAR35, VAR37))
{
char *VAR38 = (char *)FUN7(VAR31);
if ((VAR38) && strstr(VAR38, "") != NULL)
{
snprintf(VAR39, sizeof(VAR39), "",
(VAR25)?VAR25:"", VAR38);
FUN8(-1, VAR40, VAR39);
}
if (VAR38)
FUN9((VAR26 *)VAR38);
}
}
}
}

if (VAR25)
FUN9((VAR26 *)VAR25);

return(VAR28);
} 




int FUN10(

const char  *VAR41,
char **VAR42)

{
xmlDocPtr  VAR43;
VAR23   *VAR24;
char      *VAR25;
int        VAR28 = VAR29;

if ((VAR43 = FUN11(VAR41, strlen(VAR41), "", NULL, 0)) == NULL)
{
char VAR16[VAR17 * 4];
xmlErrorPtr VAR44 = FUN12();
snprintf(VAR16, sizeof(VAR16), "", VAR44->VAR36);
FUN8(-1, VAR40, VAR16);
return(VAR45);
}

VAR24 = FUN13(VAR43);

while (VAR24 != NULL)
{
if (!strcmp((const char *)VAR24->VAR35, VAR37))
{
VAR24 = VAR24->VAR34;
continue;
}

if (!strcmp((const char *)VAR24->VAR35, VAR46))
{
VAR25 = (char *)FUN6(VAR24, (const VAR26 *)VAR47);
if (strcmp(VAR25, VAR48))
{

free(VAR25);
return(FUN5(VAR24));
}
else
VAR28 = VAR49;

free(VAR25);
}
else if (!strcmp((const char *)VAR24->VAR35, VAR50))
{
*VAR42 = (char *)FUN6(VAR24, (const VAR26 *)VAR51);
}

VAR24 = VAR24->VAR33;
}

return(VAR28);
} 




int FUN14(

const char  *VAR52,
char         **VAR51)

{
int             VAR28;
VAR53           *VAR54;
int             VAR55;
VAR11::string      VAR41 = "";
char            VAR56[VAR17];
int             VAR57;
int             VAR58 = 0;


if ((VAR54 = popen(VAR52, "")) == NULL)
{
snprintf(VAR39, sizeof(VAR39),
"",
VAR52);
FUN8(VAR59, VAR40, VAR39);

return(VAR60);
}

VAR55 = FUN15(VAR54);


while ((VAR57 = read(VAR55, VAR56, sizeof(VAR56) - 1)) > 0)
{
VAR58 += VAR57;
VAR56[VAR57] = '';
VAR41 += VAR56;
}


FUN16(VAR54);

if ((VAR57 == -1) ||
(VAR58 == 0))
VAR28 = VAR61;
else
{
VAR28 = FUN10(VAR41.FUN17(), VAR51);
}

return(VAR28);
} 




int FUN18(

char *VAR41)

{
int        VAR28 = -1;
xmlDocPtr  VAR43;
VAR23   *VAR24;
char      *VAR25;

if ((VAR43 = FUN11(VAR41, strlen(VAR41), "", NULL, 0)) == NULL)
{
char VAR16[VAR17 * 4];
xmlErrorPtr VAR44 = FUN12();
snprintf(VAR16, sizeof(VAR16), "", VAR44->VAR36);
FUN8(-1, VAR40, VAR16);
return(VAR45);
}

VAR24 = FUN13(VAR43);

while (VAR24 != NULL)
{
if (!strcmp((const char *)VAR24->VAR35, VAR46))
{
VAR25 = (char *)FUN6(VAR24, (const VAR26 *)VAR47);

if (strcmp(VAR25, VAR48))
{
VAR28 = FUN5(VAR24);
}
else
VAR28 = VAR49;

free(VAR25);

break;
}
else if (!strcmp((const char *)VAR24->VAR35, VAR37))
VAR24 = VAR24->VAR34;
else
VAR24 = VAR24->VAR33;
}

return(VAR28);
} 





int FUN19(

char      *VAR42,
long long  VAR62,
char      *VAR6,
char      *VAR5,
char      *VAR63,
int        VAR64)

{
const char *VAR65;

if ((VAR6 == NULL) ||
(!strcmp(VAR6, VAR19)))
VAR65 = VAR66;
else
VAR65 = VAR67;

snprintf(VAR63, VAR64, VAR68,
(VAR6 != NULL) ? VAR6 : VAR19,
VAR42,
VAR65,
VAR62,
(VAR5 != NULL) ? VAR5 : VAR22);

return(VAR49);
} 





int FUN20(

char       *VAR4,
char       *VAR51,
long long   VAR62,
char       *VAR5,
char       *VAR6,
char       *VAR63,
int         VAR69)

{
int       VAR28;
VAR53     *VAR54;
int       VAR55;
char      VAR41[VAR17 * 4];
char     *VAR70;
int       VAR57;
int       VAR58 = 0;

FUN19(VAR51, 
VAR62,
VAR6,
VAR5,
VAR63,
VAR69);


if ((VAR54 = popen(VAR63, "")) == NULL)
{
snprintf(VAR39, sizeof(VAR39),
"",
VAR63);
FUN8(VAR59, VAR40, VAR39);

return(VAR60);
}

VAR55 = FUN15(VAR54);


VAR70 = VAR41;
memset(VAR41, 0, sizeof(VAR41));

while ((VAR57 = read(VAR55, VAR70, sizeof(VAR41) - VAR58 - 1)) > 0)
{
VAR58 += VAR57;
VAR70 += VAR57;
}


FUN16(VAR54);

if ((VAR57 == -1) ||
(VAR58 == 0))
VAR28 = VAR61;
else
VAR28 = FUN18(VAR41);

return(VAR28);
} 






int FUN21(

char       *VAR71,
char       *VAR3,
char       *VAR4,
char       *VAR5,
char       *VAR6,
long long   VAR62,
int         VAR8,
int         VAR9,
int         VAR10,
char      **VAR51,
const char *VAR72,
VAR11::VAR12& VAR14)

{
VAR1    *VAR2;
VAR11::string      VAR13 = "";
int              VAR28 = 1;
int              VAR73 = 0;
char            *VAR74 = strdup(VAR3);
char            *VAR75;

if ((VAR75 = strchr(VAR74, '')) != NULL)
*VAR75 = '';

if (strchr(VAR71, '') == NULL)
{
VAR2 = FUN22(VAR71,VAR72);

if (VAR2->FUN23() == 0)
{
free(VAR74);
delete VAR2;

return(VAR49);
}

FUN1(VAR2, VAR74, VAR4, VAR5, VAR6, NULL, VAR8, VAR9, VAR10,VAR13,VAR14);

delete VAR2;
}
else
{
FUN1(NULL, VAR74, VAR4, VAR5, VAR6, VAR71, VAR8, VAR9, VAR10,VAR13,VAR14);
}

free(VAR74);


while ((VAR73++ < VAR76) &&
(VAR28 != VAR32) &&
(VAR28 != VAR49))
{
VAR28 = FUN14(VAR13.FUN17(), VAR51);

if (VAR28 != VAR49)
FUN24(100);
}

if (VAR28 == VAR49)
{
char VAR77[VAR17 * 2];

if (VAR78 >= 3)
{
snprintf(VAR39, sizeof(VAR39),
"", VAR13.FUN17());
FUN25(VAR79 | VAR80, VAR81, VAR40, VAR39);
}

VAR28 = 1;
VAR73 = 0;

while ((VAR73++ < VAR76) &&
(VAR28 != VAR49))
{
VAR28 = FUN20(VAR4, *VAR51, VAR62, VAR5, VAR6,
VAR77, sizeof(VAR77));

if (VAR28 != VAR49)
FUN24(100);
}

if (VAR28 != VAR49)
{
snprintf(VAR39, sizeof(VAR39),
"", VAR77);
FUN8(-1, VAR40, VAR77);
}
else if (VAR78 >= 3)
{
snprintf(VAR39, sizeof(VAR39),
"", VAR77);
FUN25(VAR79 | VAR80, VAR81, VAR40, VAR39);
}
}
else
{
snprintf(VAR39, sizeof(VAR39),
"", VAR13.FUN17());
FUN8(-1, VAR40, VAR39);
}

return(VAR28);
}