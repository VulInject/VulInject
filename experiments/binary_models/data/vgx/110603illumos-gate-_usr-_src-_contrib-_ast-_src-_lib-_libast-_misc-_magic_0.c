static int
FUN1(register VAR1* VAR2, char* VAR3, register VAR4* VAR5)
{
register VAR6*	VAR7;
register char*		VAR8;
register char*		VAR9;
char*			VAR10;
char*			VAR11;
int			VAR12;
int			VAR13;
int			VAR14;
int			VAR15;
int			VAR16;
int			VAR17;
VAR18*			VAR19;
VAR6*		VAR20;
VAR6*		VAR21;
VAR6*		VAR22 = 0;
VAR6*		VAR23['' - '' + 1];

FUN2(VAR23, sizeof(VAR23));
VAR17 = '';
VAR15 = 0;
VAR14 = 0;
VAR16 = 0;
VAR20 = 0;
VAR24.VAR3 = VAR3;
VAR24.VAR25 = 0;
VAR21 = VAR7 = FUN3(VAR2->VAR26, 0, VAR6, 1, 0);
while (VAR8 = FUN4(VAR5, '', 1))
{
VAR24.VAR25++;
for (; FUN5(*VAR8); VAR8++);



switch (*VAR8)
{
case 0:
case '':
VAR17 = '';
continue;
case '':
if (++VAR14 < VAR27)
VAR7->VAR28 = *VAR8;
else if ((VAR2->VAR29 & VAR30) && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "", VAR27);
continue;
case '':
if (!VAR22 || VAR14 <= 0)
{
if (VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", *VAR8);
}
else if (VAR14-- == VAR15)
{
VAR15 = 0;
VAR7->VAR17 = '';
VAR7->VAR33 = VAR20->VAR33;
VAR7->VAR28 = '';
VAR7->VAR34 = '';
VAR7->VAR35 = '';
VAR7->VAR36 = "";
VAR22 = VAR7;
VAR7 = VAR20->VAR11 = FUN3(VAR2->VAR26, 0, VAR6, 1, 0);
VAR20 = 0;
}
else
VAR22->VAR28 = *VAR8;
continue;
default:
if (*(VAR8 + 1) == '' || *(VAR8 + 1) == '' && *VAR8 != '' && *VAR8 != '' && *VAR8 != '' && *VAR8 != '')
{
VAR12 = *VAR8++;
if (VAR12 >= '' && VAR12 <= '')
VAR12 -= '';
else
{
if (VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR12);
VAR12 = 0;
}
if (VAR20 && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR20->VAR33 + '');
if (*VAR8 == '')
{
VAR15 = ++VAR14;
VAR20 = VAR7;
VAR7->VAR36 = "";
}
else
{
if (*(VAR8 + 1) != '' && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR12 + '');
VAR7->VAR36 = "";
}
VAR7->VAR17 = VAR17;
VAR7->VAR33 = VAR12;
VAR7->VAR28 = '';
VAR7->VAR34 = '';
VAR7->VAR35 = '';
VAR22 = VAR7;
VAR7 = VAR7->VAR11 = FUN3(VAR2->VAR26, 0, VAR6, 1, 0);
if (VAR20)
VAR23[VAR12] = VAR22->VAR37.VAR38 = VAR7;
else if (!(VAR22->VAR37.VAR38 = VAR23[VAR12]) && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR12 + '');
continue;
}
if (!VAR7->VAR28)
VAR7->VAR28 = (VAR14 > 0 && VAR14 != VAR15) ? ('' + VAR14 - !!VAR15) : '';
break;
}



VAR17 = '';
switch (*VAR8)
{
case '':
VAR16 = 1;
if (*(VAR8 + 1) == *VAR8)
{


VAR8++;
VAR16 = 2;
if (!VAR14 && VAR22)
{
VAR14 = 1;
VAR22->VAR28 = '';
if (VAR22->VAR17 == '')
VAR22->VAR17 = '';
VAR7->VAR28 = '';
}
}

case '':
case '':
case '':
VAR7->VAR17 = *VAR8++;
break;
default:
if ((VAR2->VAR29 & VAR30) && !FUN6(*VAR8) && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "", *VAR8);

case '':
case '': case '': case '': case '': case '':
case '': case '': case '': case '': case '':
VAR7->VAR17 = (VAR14 > 0) ? '' : '';
break;
}
switch (VAR16)
{
case 1:
VAR16 = 0;
if (VAR14)
{


VAR14 = 0;
if (VAR22)
VAR22->VAR28 = '';
VAR7->VAR28 = '';
if (VAR7->VAR17 == '')
VAR7->VAR17 = '';
}
break;
case 2:
VAR16 = 1;
break;
}
if (FUN7(*VAR8))
{


VAR7->VAR33 = FUN8(VAR8, &VAR11, VAR39, 0);
VAR9 = VAR11;
}
else
{
for (VAR9 = VAR8; *VAR9 && !FUN5(*VAR9); VAR9++);
if (!*VAR9)
{
if ((VAR2->VAR29 & VAR30) && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "", VAR8);
continue;
}



*VAR9++ = 0;
VAR7->VAR40 = FUN9(VAR2->VAR26, VAR8);
if (FUN6(*VAR8))
VAR7->VAR33 = (VAR19 = (VAR18*)FUN10(VAR2->VAR41, VAR8)) ? VAR19->VAR37 : 0;
else if (*VAR8 == '' && VAR7->VAR17 == '')
{


VAR8 = VAR7->VAR40 + 1;
for (;;)
{
switch (*VAR8++)
{
case 0:
case '':
case '':
break;
case '':
break;
default:
continue;
}
break;
}
if (*--VAR8 == '')
{
*VAR8 = 0;
*VAR7->VAR40 = '';
}
}
}
for (; FUN5(*VAR9); VAR9++);
for (VAR8 = VAR9; *VAR9 && !FUN5(*VAR9); VAR9++);
if (!*VAR9)
{
if ((VAR2->VAR29 & VAR30) && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "", VAR8);
continue;
}
*VAR9++ = 0;



if ((*VAR8 == '' || *VAR8 == '') && *(VAR8 + 1) == '')
{
VAR7->VAR42 = ~(*VAR8 == '' ? 7 : 0);
VAR8 += 2;
}
if (*VAR8 == '')
{
if (*(VAR8 + 1) == '')
VAR7->VAR34 = '';
else
VAR7->VAR34 = '';
}
else if (*VAR8 == '')
VAR7->VAR34 = '';
else
VAR7->VAR34 = *VAR8;
if (VAR8 = strchr(VAR8, ''))
{


VAR7->VAR43 = FUN8(++VAR8, VAR39, VAR39, 0);
}
for (; FUN5(*VAR9); VAR9++);
if (VAR7->VAR43)
*--VAR9 = '';



VAR8 = VAR9;
if (VAR9 = strchr(VAR8, ''))
*VAR9++ = 0;
else
{
int	VAR44 = 0;
int	VAR45 = 0;



for (VAR9 = VAR8;;)
{
switch (VAR12 = *VAR9++)
{
case 0:
break;
case '':
if (!VAR44)
VAR44 = '';
if (VAR44 == '')
VAR45++;
continue;
case '':
if (!VAR44)
VAR44 = '';
if (VAR44 == '')
VAR45++;
continue;
case '':
if (!VAR44)
VAR44 = '';
if (VAR44 == '')
VAR45++;
continue;
case '':
case '':
case '':
if (VAR44 == VAR12 && VAR45 > 0)
VAR45--;
continue;
case '':
case ''':
if (!VAR44)
VAR44 = VAR12;
else if (VAR44 == VAR12)
VAR44 = 0;
continue;
case '':
if (*VAR9)
VAR9++;
continue;
default:
if (!VAR44 && FUN5(VAR12))
break;
continue;
}
if (VAR12)
*(VAR9 - 1) = 0;
else
VAR9--;
break;
}
}
VAR13 = 0;
if (VAR7->VAR34 == '' || VAR7->VAR34 == '' || VAR7->VAR34 == '')
VAR7->VAR35 = '';
else
{
if (*VAR8 == '')
{
VAR7->VAR43 = FUN8(++VAR8, &VAR11, VAR39, 0);
VAR8 = VAR11;
}
switch (*VAR8)
{
case '':
case '':
case '':
case '':
VAR7->VAR35 = *VAR8++;
if (*VAR8 == '')
{
VAR8++;
switch (VAR7->VAR35)
{
case '':
VAR13 = -1;
break;
case '':
VAR13 = 1;
break;
}
}
break;
case '':
case '':
VAR7->VAR35 = *VAR8++;
if (*VAR8 == '')
VAR8++;
break;
case '':
VAR8++;
VAR7->VAR35 = '';
break;
default:
VAR7->VAR35 = '';
if (VAR7->VAR43)
VAR7->VAR37.VAR46 = VAR7->VAR43;
break;
}
}
if (VAR7->VAR35 != '' && !VAR7->VAR37.VAR46)
{
if (VAR7->VAR34 == '')
{
if (VAR7->VAR37.VAR47 = FUN3(VAR2->VAR26, 0, VAR48, 1, 0))
{
VAR7->VAR37.VAR47->VAR49 = &VAR2->VAR50;
if (!(VAR12 = FUN11(VAR7->VAR37.VAR47, VAR8, VAR51|VAR52|VAR53|VAR54)))
{
VAR8 += VAR7->VAR37.VAR47->VAR55;
if (!(VAR12 = FUN12(VAR7->VAR37.VAR47, VAR8, VAR39, 0, 0)))
VAR8 += VAR7->VAR37.VAR47->VAR55;
}
if (VAR12)
{
FUN13(VAR2, VAR7->VAR37.VAR47, VAR12);
VAR7->VAR37.VAR47 = 0;
}
else if (*VAR8 && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "", VAR8);
}
}
else if (VAR7->VAR34 == '')
{
VAR7->VAR43 = FUN14(VAR8) + 1;
VAR7->VAR37.VAR56 = FUN3(VAR2->VAR26, 0, char, VAR7->VAR43 + 1, 0);
memcpy(VAR7->VAR37.VAR56, VAR8, VAR7->VAR43);
if ((!VAR7->VAR40 || !VAR7->VAR33) && !FUN15(VAR7->VAR37.VAR56, ""))
VAR7->VAR37.VAR56[VAR7->VAR43 - 1] = '';
}
else if (VAR7->VAR34 == '')
{
VAR7->VAR43 = FUN14(VAR8);
VAR7->VAR37.VAR56 = FUN3(VAR2->VAR26, 0, char, VAR7->VAR43, 0);
memcpy(VAR7->VAR37.VAR56, VAR8, VAR7->VAR43);
}
else if (*VAR8 == ''')
{
FUN14(VAR8);
VAR7->VAR37.VAR46 = *(unsigned char*)(VAR8 + 1) + VAR13;
}
else if (FUN15(VAR8, ""))
{
char*	VAR57;

VAR57 = VAR8;
VAR7->VAR34 = '';
VAR7->VAR35 = *VAR8;
while (*VAR8 && *VAR8++ != '');
switch (VAR7->VAR35)
{
case '':
VAR12 = *VAR8++;
if (VAR12 < '' || VAR12 > '')
{
if (VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR12);
}
else if (!VAR23[VAR12 -= ''])
{
if (VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR12 + '');
}
else
{
VAR7->VAR37.VAR58 = FUN3(VAR2->VAR26, 0, VAR59, 1, 0);
VAR7->VAR37.VAR58->VAR38 = VAR23[VAR12];
while (*VAR8 && *VAR8++ != '');
VAR7->VAR37.VAR58->VAR60 = FUN8(VAR8, &VAR57, VAR39, 0);
while (*VAR57 && *VAR57++ != '');
VAR7->VAR37.VAR58->VAR61 = FUN8(VAR57, &VAR57, VAR39, 0);
}
break;
case '':
case '':
VAR7->VAR36 = FUN3(VAR2->VAR26, 0, char, 32, 0);
VAR7->VAR62 = FUN3(VAR2->VAR26, 0, char, 32, 0);
break;
case '':
break;
default:
if ((VAR2->VAR29 & VAR30) && VAR2->VAR31->VAR32)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "", VAR8 - VAR57, VAR57);
break;
}
}
else
{
VAR7->VAR37.VAR46 = FUN8(VAR8, VAR39, VAR39, 0) + VAR13;
if (VAR7->VAR35 == '')
VAR7->VAR37.VAR46 = FUN16(0, (char*)&VAR7->VAR37.VAR46, sizeof(VAR7->VAR37.VAR46));
}
}



if (VAR9)
{
for (; FUN5(*VAR9); VAR9++);
if (VAR8 = strchr(VAR9, ''))
{


*VAR8++ = 0;
if (FUN6(*VAR9))
{
for (VAR10 = VAR9; FUN17(*VAR10); VAR10++);
if (*VAR10++ == '')
{
for (; FUN7(*VAR10); VAR10++);
if (!*VAR10)
{
for (VAR9 = VAR8; FUN5(*VAR9); VAR9++);
if (VAR8 = strchr(VAR9, ''))
*VAR8++ = 0;
}
}
}
}
FUN14(VAR9);
VAR7->VAR36 = FUN9(VAR2->VAR26, VAR9);
if (VAR8)
{
for (; FUN5(*VAR8); VAR8++);
if (*VAR8)
VAR7->VAR62 = FUN9(VAR2->VAR26, VAR8);
}
}
else
VAR7->VAR36 = "";



VAR22 = VAR7;
VAR7 = VAR7->VAR11 = FUN3(VAR2->VAR26, 0, VAR6, 1, 0);
}
if (VAR22)
{
VAR22->VAR11 = 0;
if (VAR2->VAR63)
VAR2->VAR63->VAR11 = VAR21;
else
VAR2->VAR64 = VAR21;
VAR2->VAR63 = VAR22;
}
FUN18(VAR2->VAR26, VAR7);
if ((VAR2->VAR29 & VAR30) && VAR2->VAR31->VAR32)
{
if (VAR14 < 0)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "");
else if (VAR14 > 0)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 1, "");
if (VAR20)
(*VAR2->VAR31->VAR32)(VAR2, VAR2->VAR31, 2, "", VAR20->VAR33 + '');
}
VAR24.VAR3 = 0;
VAR24.VAR25 = 0;
return 0;
}