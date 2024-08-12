FUN1 (char *VAR1)
{
unsigned int VAR2;
char VAR3[strlen (VAR1)];
VAR4 *VAR5;

FUN2 ("", VAR1);
VAR5 = malloc (sizeof (* VAR5));
memset (VAR5, '', sizeof (VAR4));

if (*VAR1 == VAR6)
{
char *VAR7 = VAR1 + 1;
int VAR8 = 0;

FUN2 ("");
while (*VAR7)
{
if (!FUN3 (*VAR7))
VAR8 = 1;
VAR7++;
}

if (VAR8)
{
char *VAR9;
segT VAR10;

FUN2 ("");
VAR5->VAR11.VAR12 = VAR1 + 1;
VAR9 = VAR13;
VAR13 = VAR1 + 1;
FUN2 ("", VAR13);
VAR10 = FUN4 (&VAR5->VAR11.VAR14);

FUN2 ("",
VAR5->VAR11.VAR14.VAR15);
FUN2 ("",
(long) VAR5->VAR11.VAR14.VAR16);
FUN2 ("", VAR10);

VAR13 = VAR9;

if (VAR5->VAR11.VAR14.VAR15 == VAR17)
{
VAR5->VAR11.VAR18 =
VAR5->VAR11.VAR14.VAR16;
VAR5->VAR11.VAR19 = 1;
}
}
else
{
FUN2 ("");
VAR5->VAR11.VAR18 = FUN5 (VAR1 + 1);
VAR5->VAR11.VAR19 = 1;
}
VAR5->VAR20 = VAR21;
}
else if (*VAR1 == VAR22)
{

int VAR23 = 0;
int VAR24 = 0;
int VAR25 = -1;
int VAR26 = 0;
int VAR27 = 1;
VAR28 *VAR29;

FUN2 ("");
VAR3[0] = *VAR1;

for (VAR2 = 1; VAR2 < strlen (VAR1); VAR2++)
{

VAR3[VAR27] = FUN6 (*(VAR1 + VAR2));

if ((*(VAR1 + VAR2 - 1) == '' || *(VAR1 + VAR2 - 1) == '')
&& (*(VAR1 + VAR2) == '' || *(VAR1 + VAR2) == ''))
{

if (VAR23)
{
FUN7 ("");
return NULL;
}
if (*(VAR1 + VAR2 + 1) < '' || *(VAR1 + VAR2 + 1) > '')
{
FUN7 ("");
return NULL;
}
VAR25 = *(VAR1 + VAR2 + 1) - '';
VAR23 = 1;
VAR2++;
}

if (*(VAR1 + VAR2) == '')
{

if (FUN3 (*(VAR1 + VAR2 + 1)))
{
char VAR30[10];
int VAR31 = 0;

if (VAR24)
{
FUN7 ("");
return NULL;
}
VAR2++;
while (*(VAR1 + VAR2) != '')
{
if (!FUN3 (*(VAR1 + VAR2)))
{
FUN7 ("");
return NULL;
}
VAR30[VAR31++] = *(VAR1 + (VAR2++));
}
VAR30[VAR31] = '';
VAR26 = FUN5 (VAR30);
VAR2--;
VAR24 = 1;
}
}
VAR27++;
}

VAR3[VAR27] = '';
if (!VAR23)
{
FUN7 ("");
return NULL;
}

VAR29 = (VAR28 *) FUN8 (VAR32, VAR3);
if (VAR29)
{
FUN2 ("", VAR29->VAR33);
if (VAR29->VAR34 == VAR35)
{
VAR24 = 1;
VAR26 = 1;
}
else if ((VAR29->VAR34 == VAR36) && !VAR24)
{

FUN7 ("");
return 0;
}
}
else
{
FUN7 ("");
return NULL;
}

if (VAR24 && (VAR26 < 0 || VAR26 > 255))
{
FUN7 ("");
return NULL;
}

VAR5->VAR37.VAR38 = VAR29->VAR39;
VAR5->VAR37.VAR30 = VAR26;
VAR5->VAR37.VAR40 = VAR25;
VAR5->VAR20 = VAR41;
}
else
{
VAR42 *VAR43 = (VAR42 *) FUN8 (VAR44, VAR1);

if (VAR43)
{
FUN2 ("", VAR43->VAR45);
if (VAR43->VAR46 == VAR47)
VAR5->VAR20 = VAR48;
else if (VAR43->VAR46 == VAR49)
VAR5->VAR20 = VAR50;
else if (VAR43->VAR46 == VAR51)
VAR5->VAR20 = VAR52;
else
VAR5->VAR20 = VAR53;
VAR5->VAR42.VAR54 = VAR43->VAR54;
}
else
{
if (!FUN3 (*VAR1)
|| *(VAR1 + 1) == ''
|| strchr (VAR1, ''))
{
char *VAR9;
segT VAR10;

FUN2 ("", VAR1);
VAR5->VAR55.VAR12 = malloc (strlen (VAR1) + 1);
strcpy (VAR5->VAR55.VAR12, VAR1);
VAR5->VAR55.VAR12[strlen (VAR1)] = '';
VAR9 = VAR13;
VAR13 = VAR1;

FUN2 ("", VAR13);
VAR10 = FUN4 (&VAR5->VAR55.VAR56);
FUN2 ("",
VAR5->VAR55.VAR56.VAR15);
FUN2 ("",
(long) VAR5->VAR55.VAR56.VAR16);
FUN2 ("", VAR10);
VAR13 = VAR9;

if (VAR5->VAR55.VAR56.VAR15 == VAR17)
{
VAR5->VAR55.VAR57
= VAR5->VAR55.VAR56.VAR16;
VAR5->VAR55.VAR58
= (unsigned int) VAR5->VAR55.VAR56.VAR16;
VAR5->VAR55.VAR19 = 1;
}
}
else
{
unsigned VAR2;

FUN2 ("");
for (VAR2 = 0; VAR2 < strlen (VAR1); VAR2++)
if (*(VAR1 + VAR2) == '')
VAR5->VAR55.VAR59 = 1;
VAR5->VAR55.VAR12 = malloc (strlen (VAR1) + 1);
strcpy (VAR5->VAR55.VAR12, VAR1);
VAR5->VAR55.VAR12[strlen (VAR1)] = '';
VAR5->VAR55.VAR60 = (float) FUN9 (VAR1);
VAR5->VAR55.VAR57 = (int) FUN5 (VAR1);
VAR5->VAR55.VAR58 = (unsigned int) FUN5 (VAR1);
VAR5->VAR55.VAR19 = 1;
}
VAR5->VAR20 = VAR61 | VAR62 | VAR63 | VAR64;
if (VAR5->VAR55.VAR58 <= 31)
VAR5->VAR20 |= VAR65;
}
}
return VAR5;
}