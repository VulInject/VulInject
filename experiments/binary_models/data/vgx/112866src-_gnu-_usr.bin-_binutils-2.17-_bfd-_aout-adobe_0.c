FUN1 (VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2 (VAR2);
VAR5 *VAR6;
struct external_segdesc VAR7[1];
char *VAR8;
char VAR9[30];	
char *VAR10;
int VAR11;
flagword VAR12;


FUN3 (VAR2, VAR13, 0L);


FUN4 (VAR2) = FUN5 (*VAR4);
FUN6 (VAR2) = FUN7 (*VAR4);


for (;;)
{
bfd_size_type VAR14 = sizeof (*VAR7);
if (FUN8 ( VAR7, VAR14, VAR2) != VAR14)
{
if (FUN9 () != VAR15)
FUN10 (VAR16);

return NULL;
}
switch (VAR7->VAR17[0])
{
case VAR18:
VAR8 = "";
VAR12 = VAR19 | VAR20 | VAR21 | VAR22;
break;

case VAR23:
VAR8 = "";
VAR12 = VAR24 | VAR20 | VAR21 | VAR22;
break;

case VAR25:
VAR8 = "";
VAR12 = VAR24 | VAR22;
break;

case 0:
goto VAR26;

default:
(*VAR27)
(FUN11(""),
VAR2, VAR7->VAR17[0]);
goto VAR26;
}


FUN10 (VAR28);
VAR6 = FUN12 (VAR2, VAR8);
VAR11 = 0;

while (!VAR6)
{
if (FUN9 () != VAR28)

return NULL;
sprintf (VAR9, "", VAR8, ++VAR11);
VAR6 = FUN12 (VAR2, VAR9);
}


if (VAR6->VAR29 == VAR9)
{
VAR14 = strlen (VAR6->VAR29);
VAR10 = FUN13 (VAR2, VAR14);
if (VAR10 == NULL)
return NULL;
strcpy (VAR10, VAR6->VAR29);
VAR6->VAR29 = VAR10;
}


FUN14 (VAR2, VAR6, VAR12);

VAR6->VAR30 = ((VAR7->VAR31[0] << 8)
| VAR7->VAR31[1] << 8
| VAR7->VAR31[2]);
VAR6->VAR32 = FUN15 (VAR2, VAR7->VAR33);
VAR6->VAR34 = FUN15 (VAR2, VAR7->VAR35);



if (VAR11 == 0)
switch (VAR7->VAR17[0])
{
case VAR18:
VAR6->VAR36 = FUN16 (*VAR4);
VAR6->VAR37 = VAR4->VAR38;
break;

case VAR23:
VAR6->VAR36 = FUN17 (*VAR4);
VAR6->VAR37 = VAR4->VAR39;
break;

default:
break;
}
}
VAR26:

FUN18 (VAR2).VAR40 = sizeof (struct VAR41);
FUN18 (VAR2).VAR42 = sizeof (struct VAR43);
FUN18 (VAR2).VAR44 = 1; 
FUN18 (VAR2).VAR45 = 1; 
FUN18 (VAR2).VAR46 = VAR47;

return VAR2->VAR48;
}