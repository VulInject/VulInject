FUN1 (VAR1 * VAR2, void * VAR3, void * VAR4)
{
VAR5 *VAR6 = (VAR5 *) VAR3;
struct VAR7 *VAR8 = (struct VAR7 *) VAR4;

if (VAR6->VAR9.VAR10[0] == 0)
{
VAR8->VAR11.VAR12.VAR13 = 0;
VAR8->VAR11.VAR12.VAR14 = FUN2 (VAR2, VAR6->VAR9.VAR9.VAR15);
}
else
memcpy (VAR8->VAR11.VAR16, VAR6->VAR9.VAR10, VAR17);

VAR8->VAR18 = FUN2 (VAR2, VAR6->VAR19);
VAR8->VAR20 = FUN3 (VAR2, VAR6->VAR21);

if (sizeof (VAR6->VAR22) == 2)
VAR8->VAR23 = FUN3 (VAR2, VAR6->VAR22);
else
VAR8->VAR23 = FUN2 (VAR2, VAR6->VAR22);

VAR8->VAR24 = FUN4 (VAR2, VAR6->VAR25);
VAR8->VAR26 = FUN4 (VAR2, VAR6->VAR27);




if (VAR8->VAR24 == VAR28)
{
VAR8->VAR18 = 0x0;


if (VAR8->VAR20 == 0)
{
VAR29 *VAR30;

for (VAR30 = VAR2->VAR31; VAR30; VAR30 = VAR30->VAR32)
{
if (strcmp (VAR30->VAR33, VAR8->VAR34) == 0)
{
VAR8->VAR20 = VAR30->VAR35;
break;
}
}
}

if (VAR8->VAR20 == 0)
{
int VAR36 = 0;
VAR29 *VAR30;
char *VAR33;

for (VAR30 = VAR2->VAR31; VAR30; VAR30 = VAR30->VAR32)
if (VAR36 <= VAR30->VAR35)
VAR36 = VAR30->VAR35 + 1;

VAR33 = FUN5 (VAR2, (VAR37) strlen (VAR8->VAR34) + 10);
if (VAR33 == NULL)
return;
strcpy (VAR33, VAR8->VAR34);
VAR30 = FUN6 (VAR2, VAR33);

VAR30->VAR38 = 0;
VAR30->VAR39 = 0;
VAR30->VAR40 = 0;
VAR30->VAR41 = 0;
VAR30->VAR42 = 0;
VAR30->VAR43 = 0;
VAR30->VAR44 = 0;
VAR30->VAR45 = 0;
VAR30->VAR46 = NULL;
VAR30->VAR32 = NULL;
VAR30->VAR47 = 2;
VAR30->VAR48 = VAR49 | VAR50 | VAR51 | VAR52;

VAR30->VAR35 = VAR36;

VAR8->VAR20 = VAR36;
}
VAR8->VAR24 = VAR53;
}


FUN7 (VAR2, VAR3, VAR4);
}