FUN1 (VAR1 *VAR2,
VAR3 *VAR4,
int argc, char **argv,
VAR5 *VAR6,
VAR7 **VAR8)
{
FUN2(VAR9) VAR10 = NULL;
const char *VAR11;
FUN2(VAR12) VAR13 = NULL;
FUN2(VAR14) VAR15 = NULL;

if (argc < 2)
return FUN3 (VAR4, FUN4(""), VAR8);

if (argc > 2)
return FUN3 (VAR4, FUN4(""), VAR8);

VAR11 = argv[1];

VAR10 = FUN5 (VAR11);

if (!FUN6 (VAR10))
return FUN7 (VAR8, FUN4(""));

if (VAR16 != NULL)
{

VAR13 = FUN8 (VAR6, VAR8);
if (VAR13 == NULL)
return VAR17;
}

if (VAR18)
VAR15 = FUN9 (VAR2, VAR8);
else
VAR15 = FUN10 (VAR2, VAR19, VAR20, VAR21 != NULL, VAR8);
if (VAR15 == NULL)
return VAR17;

FUN11 (VAR15, VAR22);
FUN12 (VAR15, VAR23);
FUN13 (VAR15, VAR24);
FUN14 (VAR15, VAR25);
FUN15 (VAR15, VAR26);
FUN16 (VAR15, VAR27);
FUN17 (VAR15, VAR28);
FUN18 (VAR15, VAR29);
FUN19 (VAR15, VAR30);

for (int VAR31 = 0; VAR32 != NULL && VAR32[VAR31] != NULL; VAR31++)
FUN20 (VAR15, VAR32[VAR31]);

if (!FUN21 (VAR15, VAR10, VAR13, VAR8))
return VAR17;

if (!FUN22 (VAR15, VAR6, VAR8))
{
if (FUN23 (*VAR8, VAR33, VAR34))
FUN24 (VAR8); 

return VAR17;
}

return VAR20;
}