static void
FUN1(VAR1 *VAR2, Oid VAR3, const char *VAR4)
{
char		VAR5[VAR6];
int			VAR7;
int			VAR8;
LogicalRewriteMappingData VAR9;

sprintf(VAR5, "", VAR4);
VAR7 = FUN2(VAR5, VAR10 | VAR11);
if (VAR7 < 0)
FUN3(VAR12,
(FUN4(),
FUN5(""%VAR13\"", VAR5)));

while (true)
{
ReorderBufferTupleCidKey VAR14;
VAR15 *VAR16;
VAR15 *VAR17;
bool		VAR18;


memset(&VAR14, 0, sizeof(VAR19));


FUN6(VAR20);
VAR8 = read(VAR7, &VAR9, sizeof(VAR21));
FUN7();

if (VAR8 < 0)
FUN3(VAR12,
(FUN4(),
FUN5(""%VAR13\"",
VAR5)));
else if (VAR8 == 0)	
break;
else if (VAR8 != sizeof(VAR21))
FUN3(VAR12,
(FUN4(),
FUN5(""%VAR13\"",
VAR5, VAR8,
(VAR22) sizeof(VAR21))));

VAR14.VAR23 = VAR9.VAR24;
FUN8(&VAR9.VAR25,
&VAR14.VAR26);


VAR16 = (VAR15 *)
FUN9(VAR2, &VAR14, VAR27, NULL);


if (!VAR16)
continue;

VAR14.VAR23 = VAR9.VAR28;
FUN8(&VAR9.VAR29,
&VAR14.VAR26);

VAR17 = (VAR15 *)
FUN9(VAR2, &VAR14, VAR30, &VAR18);

if (VAR18)
{

FUN10(VAR16->VAR31 == VAR32 || VAR16->VAR31 == VAR17->VAR31);
FUN10(VAR16->VAR33 == VAR32 || VAR16->VAR33 == VAR17->VAR33);
}
else
{

VAR17->VAR31 = VAR16->VAR31;
VAR17->VAR33 = VAR16->VAR33;
VAR17->VAR34 = VAR16->VAR34;
}
}

if (FUN11(VAR7) != 0)
FUN3(VAR12,
(FUN4(),
FUN5(""%VAR13\"", VAR5)));
}