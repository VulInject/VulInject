VAR1 *
FUN1(Datum VAR2)
{
VAR3	   *VAR4 = FUN2(VAR2);	
VAR1	   *VAR5 = VAR6;
int			VAR7 = FUN3(VAR4);
char	   *VAR8,
*VAR9,
*VAR10,
*VAR11 = NULL,
*VAR12 = NULL;
typedef enum
{
VAR13,
VAR14,
VAR15,
VAR16,
VAR17,
VAR18,
VAR19,
VAR20
} VAR21;
ds_state	VAR22 = VAR13;

VAR10 = (char *) FUN4(VAR7 + 1);	
VAR8 = FUN5(VAR4);
VAR9 = VAR8 + VAR7;
for (; VAR8 < VAR9; VAR8++)
{
switch (VAR22)
{
case VAR13:
if (FUN6((unsigned char) *VAR8) || *VAR8 == '')
continue;
if (*VAR8 == '')
{
VAR11 = VAR10;
VAR22 = VAR15;
}
else
{
VAR11 = VAR10;
*VAR11++ = *VAR8;
VAR22 = VAR14;
}
break;
case VAR14:
if (FUN6((unsigned char) *VAR8))
{
*VAR11++ = '';
VAR22 = VAR16;
}
else if (*VAR8 == '')
{
*VAR11++ = '';
VAR22 = VAR17;
}
else
{
*VAR11++ = *VAR8;
}
break;
case VAR15:
if (*VAR8 == '')
{
if (VAR8 + 1 < VAR9 && VAR8[1] == '')
{

*VAR11++ = *VAR8++;
}
else
{
*VAR11++ = '';
VAR22 = VAR16;
}
}
else
{
*VAR11++ = *VAR8;
}
break;
case VAR16:
if (*VAR8 == '')
VAR22 = VAR17;
else if (!FUN6((unsigned char) *VAR8))
FUN7(VAR23,
(FUN8(VAR24),
FUN9(""%VAR25\"",
FUN10(VAR4))));
break;
case VAR17:
if (*VAR8 == ''')
{
VAR12 = VAR11;
VAR22 = VAR18;
}
else if (*VAR8 == '' && VAR8 + 1 < VAR9 && VAR8[1] == ''')
{
VAR8++;
VAR12 = VAR11;
VAR22 = VAR18;
}
else if (*VAR8 == '')
{
VAR12 = VAR11;
VAR22 = VAR19;
}
else if (!FUN6((unsigned char) *VAR8))
{
VAR12 = VAR11;
*VAR11++ = *VAR8;
VAR22 = VAR20;
}
break;
case VAR18:
if (*VAR8 == ''')
{
if (VAR8 + 1 < VAR9 && VAR8[1] == ''')
{

*VAR11++ = *VAR8++;
}
else
{
*VAR11++ = '';
VAR5 = FUN11(VAR5,
FUN12(VAR10,
VAR12,
true));
VAR22 = VAR13;
}
}
else if (*VAR8 == '')
{
if (VAR8 + 1 < VAR9 && VAR8[1] == '')
{

*VAR11++ = *VAR8++;
}
else
*VAR11++ = *VAR8;
}
else
{
*VAR11++ = *VAR8;
}
break;
case VAR19:
if (*VAR8 == '')
{
if (VAR8 + 1 < VAR9 && VAR8[1] == '')
{

*VAR11++ = *VAR8++;
}
else
{
*VAR11++ = '';
VAR5 = FUN11(VAR5,
FUN12(VAR10,
VAR12,
true));
VAR22 = VAR13;
}
}
else
{
*VAR11++ = *VAR8;
}
break;
case VAR20:
if (*VAR8 == '' || FUN6((unsigned char) *VAR8))
{
*VAR11++ = '';
VAR5 = FUN11(VAR5,
FUN12(VAR10,
VAR12,
false));
VAR22 = VAR13;
}
else
{
*VAR11++ = *VAR8;
}
break;
default:
FUN13(VAR23, "",
VAR22);
}
}

if (VAR22 == VAR20)
{
*VAR11++ = '';
VAR5 = FUN11(VAR5,
FUN12(VAR10,
VAR12,
false));
}
else if (VAR22 != VAR13)
FUN7(VAR23,
(FUN8(VAR24),
FUN9(""%VAR25\"",
FUN10(VAR4))));

FUN14(VAR10);

return VAR5;
}