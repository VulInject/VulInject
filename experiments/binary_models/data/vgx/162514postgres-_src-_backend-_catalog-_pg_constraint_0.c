char *
FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, Oid VAR4,
VAR5 *VAR6)
{
int			VAR7 = 0;
char	   *VAR8 = NULL;
char		VAR9[VAR10];
Relation	VAR11;
SysScanDesc VAR12;
ScanKeyData VAR13[2];
bool		VAR14;
VAR15   *VAR16;

VAR11 = FUN2(VAR17, VAR18);


FUN3(VAR9, VAR3, sizeof(VAR9));

for (;;)
{
VAR8 = FUN4(VAR1, VAR2, VAR9);

VAR14 = false;

FUN5(VAR16, VAR6)
{
if (strcmp((char *) FUN6(VAR16), VAR8) == 0)
{
VAR14 = true;
break;
}
}

if (!VAR14)
{
FUN7(&VAR13[0],
VAR19,
VAR20, VAR21,
FUN8(VAR8));

FUN7(&VAR13[1],
VAR22,
VAR20, VAR23,
FUN9(VAR4));

VAR12 = FUN10(VAR11, VAR24, true,
NULL, 2, VAR13);

VAR14 = (FUN11(FUN12(VAR12)));

FUN13(VAR12);
}

if (!VAR14)
break;


FUN14(VAR8);
snprintf(VAR9, sizeof(VAR9), "", VAR3, ++VAR7);
}

FUN15(VAR11, VAR18);

return VAR8;
}