static int FUN1(VAR1 *VAR2,
VAR3 *VAR4)
{
BitstreamContext VAR5;
int VAR6;

VAR6 = FUN2(&VAR5, VAR4->VAR7, 8 * VAR4->VAR8);
if (VAR6 < 0)
return VAR6;

switch (VAR4->VAR9) {
case VAR10:
{
VAR11 *VAR12;

VAR6 = FUN3(VAR2, VAR4, sizeof(*VAR12), NULL);
if (VAR6 < 0)
return VAR6;
VAR12 = VAR4->VAR13;

VAR6 = FUN4(VAR2, &VAR5, VAR12);
if (VAR6 < 0)
return VAR6;

VAR6 = FUN5(VAR2, VAR12);
if (VAR6 < 0)
return VAR6;
}
break;

case VAR14:
{
VAR6 = FUN3(VAR2, VAR4,
sizeof(VAR15),
NULL);
if (VAR6 < 0)
return VAR6;

VAR6 = FUN6(VAR2, &VAR5, VAR4->VAR13);
if (VAR6 < 0)
return VAR6;
}
break;

case VAR16:
{
VAR17 *VAR18;

VAR6 = FUN3(VAR2, VAR4, sizeof(*VAR18),
&VAR19);
if (VAR6 < 0)
return VAR6;
VAR18 = VAR4->VAR13;

VAR6 = FUN7(VAR2, &VAR5, VAR18);
if (VAR6 < 0)
return VAR6;

VAR6 = FUN8(VAR2, VAR18);
if (VAR6 < 0)
return VAR6;
}
break;

case VAR20:
case VAR21:
case VAR22:
{
VAR23 *VAR24;
int VAR25, VAR26;

VAR6 = FUN3(VAR2, VAR4, sizeof(*VAR24),
&VAR27);
if (VAR6 < 0)
return VAR6;
VAR24 = VAR4->VAR13;

VAR6 = FUN9(VAR2, &VAR5, &VAR24->VAR28);
if (VAR6 < 0)
return VAR6;

VAR25 = FUN10(&VAR5);
VAR26 = VAR4->VAR8;
if (!VAR4->VAR7[VAR26 - 1]) {
int VAR29;
for (VAR29 = 0; VAR29 < VAR26 && !VAR4->VAR7[VAR26 - VAR29 - 1]; VAR29++);
FUN11(VAR2->VAR30, VAR31, ""
"", VAR29);
VAR26 -= VAR29;
}

VAR24->VAR8 = VAR26 - VAR25 / 8;
VAR24->VAR32  = FUN12(VAR24->VAR8 +
VAR33);
if (!VAR24->VAR32)
return FUN13(VAR34);
VAR24->VAR7 = VAR24->VAR32->VAR7;
memcpy(VAR24->VAR7,
VAR4->VAR7 + VAR25 / 8, VAR24->VAR8);
memset(VAR24->VAR7 + VAR24->VAR8, 0,
VAR33);
VAR24->VAR35 = VAR25 % 8;
}
break;

case VAR36:
{
VAR6 = FUN3(VAR2, VAR4,
sizeof(VAR37), NULL);
if (VAR6 < 0)
return VAR6;

VAR6 = FUN14(VAR2, &VAR5, VAR4->VAR13);
if (VAR6 < 0)
return VAR6;
}
break;

case VAR38:
{
VAR6 = FUN3(VAR2, VAR4, sizeof(VAR39),
&VAR40);
if (VAR6 < 0)
return VAR6;

VAR6 = FUN15(VAR2, &VAR5, VAR4->VAR13);
if (VAR6 < 0)
return VAR6;
}
break;

case VAR41:
{
VAR6 = FUN3(VAR2, VAR4,
sizeof(VAR42), NULL);
if (VAR6 < 0)
return VAR6;

VAR6 = FUN16(VAR2, &VAR5, VAR4->VAR13);
if (VAR6 < 0)
return VAR6;
}
break;

default:
return FUN13(VAR43);
}

return 0;
}