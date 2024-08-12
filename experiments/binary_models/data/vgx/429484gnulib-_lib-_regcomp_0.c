FUN1 (VAR1 *VAR2, size_t VAR3)
{
__re_size_t VAR4;
const char *VAR5;
size_t VAR6 = FUN2 (sizeof (wchar_t), sizeof (VAR7));
size_t VAR8 =
FUN2 (sizeof (struct VAR9),
FUN2 (sizeof (VAR10),
FUN2 (sizeof (VAR11),
FUN2 (sizeof (VAR12),
VAR6))));

memset (VAR2, '', sizeof (VAR1));


VAR2->VAR13 = VAR14;


if (FUN3 (FUN4 (VAR15, VAR16 / VAR8) / 2
<= VAR3))
return VAR17;

VAR2->VAR18 = VAR3 + 1;
VAR2->VAR19 = FUN5 (VAR10, VAR2->VAR18);


for (VAR4 = 1; ; VAR4 <<= 1)
if (VAR4 > VAR3)
break;

VAR2->VAR20 = calloc (sizeof (struct VAR9), VAR4);
VAR2->VAR21 = VAR4 - 1;

VAR2->VAR22 = VAR23;
if (VAR2->VAR22 == 6
&& strcmp (FUN6 (VAR24, VAR25), "") == 0)
VAR2->VAR26 = 1;
VAR2->VAR27 = (FUN7 (VAR24, VAR28)
!= 0);
VAR5 = FUN8 (VAR29);
if ((VAR5[0] == '' || VAR5[0] == '')
&& (VAR5[1] == '' || VAR5[1] == '')
&& (VAR5[2] == '' || VAR5[2] == '')
&& strcmp (VAR5 + 3 + (VAR5[3] == ''), "") == 0)
VAR2->VAR26 = 1;


VAR2->VAR27 = 0;

if (VAR2->VAR22 > 1)
{
if (VAR2->VAR26)
VAR2->VAR30 = (VAR31) VAR32;
else
{
int VAR33, VAR34, VAR35;

VAR2->VAR30 = (VAR31) calloc (sizeof (VAR36), 1);
if (FUN3 (VAR2->VAR30 == NULL))
return VAR17;


for (VAR33 = 0, VAR35 = 0; VAR33 < VAR37; ++VAR33)
for (VAR34 = 0; VAR34 < VAR38; ++VAR34, ++VAR35)
{
wint_t VAR39 = FUN9 (VAR35);
if (VAR39 != VAR40)
VAR2->VAR30[VAR33] |= (VAR41) 1 << VAR34;
if (FUN10 (VAR35) && VAR39 != VAR35)
VAR2->VAR27 = 1;
}
}
}

if (FUN3 (VAR2->VAR19 == NULL || VAR2->VAR20 == NULL))
return VAR17;
return VAR42;
}