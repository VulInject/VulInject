int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, TokenFlags VAR4)
{
if (!VAR2 || !VAR3)
return -1;

char VAR5;
char VAR6 = ''; 
char *VAR7 = NULL;


if (!VAR2->VAR8)
FUN2(VAR2, 256);

FUN3(VAR2);

FUN4(VAR3->VAR9);
while ((VAR5 = *VAR3->VAR9))
{
if (VAR6 == '')
{
if ((FUN5(VAR5) && !(VAR4 & VAR10)) ||
((VAR5 == '') && !(VAR4 & VAR11)) ||
((VAR5 == '') && (VAR4 & VAR12)) ||
((VAR5 == '') && (VAR4 & VAR13)) ||
((VAR5 == '') && (VAR4 & VAR14)) ||
((VAR5 == '') && (VAR4 & VAR15)) ||
((VAR5 == '') && !(VAR4 & VAR16)) ||
((VAR4 & VAR17) && strchr("", VAR5)))
{
break;
}
}

VAR3->VAR9++;

if (VAR5 == VAR6)
VAR6 = 0; 
else if (!VAR6 && ((VAR5 == ''''"')) && !(VAR4 & VAR18))
VAR6 = VAR5;
else if ((VAR5 == '') && (VAR6 != '''))
{
if (VAR3->VAR9[0] == '')
return -1; 
switch (VAR5 = *VAR3->VAR9++)
{
case '':
case '':
if (VAR3->VAR9[0] == '')
return -1; 
FUN6(VAR2, (FUN7((unsigned char) VAR3->VAR9[0]) - '') & 0x7f);
VAR3->VAR9++;
break;
case '':
FUN6(VAR2, ''); 
break;
case '':
FUN6(VAR2, '');
break;
case '':
FUN6(VAR2, '');
break;
case '':
FUN6(VAR2, '');
break;
case '':
FUN6(VAR2, '');
break;
default:
if (FUN8((unsigned char) VAR5) && FUN8((unsigned char) VAR3->VAR9[0]) &&
FUN8((unsigned char) VAR3->VAR9[1]))
{
FUN6(VAR2, (VAR5 << 6) + (VAR3->VAR9[0] << 3) + VAR3->VAR9[1] - 3504);
VAR3->VAR9 += 2;
}
else
FUN6(VAR2, VAR5);
}
}
else if ((VAR5 == '') && (VAR4 & VAR19))
{
if (VAR3->VAR9[0] == '')
return -1; 
VAR5 = *VAR3->VAR9++;
if (VAR5 == '')
FUN6(VAR2, VAR5);
else if (VAR5 == '')
FUN6(VAR2, ''); 
else if (FUN9((unsigned char) VAR5))
FUN6(VAR2, FUN7((unsigned char) VAR5) - '');
else
{
FUN6(VAR2, '');
FUN6(VAR2, VAR5);
}
}
else if ((VAR5 == '') && (!VAR6 || (VAR6 == '')))
{
VAR20 *VAR21 = NULL;
pid_t VAR22;

VAR7 = VAR3->VAR9;
do
{
VAR7 = strpbrk(VAR7, "");
if (VAR7)
{

if (*VAR7 == '')
VAR7 += 2;
}
} while (VAR7 && (VAR7[0] != ''));
if (!VAR7)
{
FUN10(VAR23, "");
return -1;
}
struct Buffer VAR24;
FUN11(&VAR24);
*VAR7 = '';
if (VAR4 & VAR25)
{

FUN1(&VAR24, VAR3,
VAR18 | VAR10 | VAR11 |
VAR16 | VAR26);
}
else
{
VAR24.VAR8 = FUN12(VAR3->VAR9);
}
*VAR7 = '';
VAR22 = FUN13(VAR24.VAR8, NULL, &VAR21, NULL);
if (VAR22 < 0)
{
FUN10(VAR23, "", VAR24.VAR8);
FUN14(&VAR24.VAR8);
return -1;
}

VAR3->VAR9 = VAR7 + 1;


struct Buffer VAR27 = FUN15(0);
VAR27.VAR8 = FUN16(NULL, &VAR27.VAR28, VAR21, NULL, VAR29);
FUN17(&VAR21);
int VAR30 = FUN18(VAR22);
if (VAR30 != 0)
FUN10(VAR23, "", VAR30,
FUN19(&VAR24));
FUN14(&VAR24.VAR8);



if (VAR27.VAR8)
{
if (VAR6)
{
FUN20(VAR2, VAR27.VAR8);
}
else
{
struct VAR1 *copy = FUN21();
FUN22(&VAR27);
FUN23(copy, &VAR27);
FUN20(copy, VAR3->VAR9);
FUN23(VAR3, copy);
FUN24(VAR3, 0);
FUN25(&copy);
}
FUN14(&VAR27.VAR8);
}
}
else if ((VAR5 == '') && (!VAR6 || (VAR6 == '')) &&
((VAR3->VAR9[0] == '') || FUN9((unsigned char) VAR3->VAR9[0])))
{
const char *VAR31 = NULL;
char *VAR32 = NULL;

if (VAR3->VAR9[0] == '')
{
VAR7 = strchr(VAR3->VAR9, '');
if (VAR7)
{
VAR32 = FUN26(VAR3->VAR9 + 1, VAR7 - (VAR3->VAR9 + 1));
VAR3->VAR9 = VAR7 + 1;

if ((VAR4 & VAR26))
{
FUN6(VAR2, VAR5);
FUN6(VAR2, '');
FUN20(VAR2, VAR32);
FUN6(VAR2, '');
FUN14(&VAR32);
}
}
}
else
{
for (VAR7 = VAR3->VAR9; FUN27((unsigned char) *VAR7) || (VAR7[0] == ''); VAR7++)
; 

VAR32 = FUN26(VAR3->VAR9, VAR7 - VAR3->VAR9);
VAR3->VAR9 = VAR7;
}
if (VAR32)
{
struct Buffer VAR33;
FUN11(&VAR33);
int VAR30 = FUN28(VAR34->VAR35, VAR32, &VAR33);

if (FUN29(VAR30) == VAR36)
{
FUN20(VAR2, VAR33.VAR8);
FUN14(&VAR33.VAR8);
}
else if ((VAR31 = FUN30(VAR32)))
{
FUN20(VAR2, VAR31);
}
else if (!(VAR4 & VAR26) && (VAR31 = FUN31(VAR32)))
{
FUN20(VAR2, VAR31);
}
else
{
FUN6(VAR2, VAR5);
FUN20(VAR2, VAR32);
}
FUN14(&VAR32);
}
}
else
FUN6(VAR2, VAR5);
}
FUN6(VAR2, 0); 
FUN4(VAR3->VAR9);
return 0;
}