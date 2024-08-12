int
FUN1(const char *VAR1,
int VAR2,
const void *VAR3,
const size_t VAR4)
{
int VAR5 = -1;
g_autofree struct VAR6 *VAR7 = NULL;
struct VAR8 *VAR9 = NULL;
unsigned int VAR10 = 0;
struct VAR11 *VAR11;
struct VAR12 *VAR13, *VAR14;
struct ifinfomsg VAR15 = {
.VAR16 = VAR17,
.VAR18  = -1,
};

VAR11 = FUN2(VAR19, VAR20);

if (FUN3(VAR11,  &VAR15, sizeof(VAR15), VAR21) < 0)
goto VAR22;

if (VAR1 &&
FUN4(VAR11, VAR23, strlen(VAR1)+1, VAR1) < 0)
goto VAR22;

if (!(VAR13 = FUN5(VAR11, VAR24)))
goto VAR22;

if (!(VAR14 = FUN5(VAR11, VAR25)))
goto VAR22;

if (FUN4(VAR11, VAR2, VAR4, VAR3) < 0)
goto VAR22;

FUN6(VAR11, VAR14);
FUN6(VAR11, VAR13);

if (FUN7(VAR11, &VAR7, &VAR10, 0, 0,
VAR26, 0) < 0)
goto VAR27;

if (VAR10 < FUN8(0) || VAR7 == NULL)
goto VAR28;

switch (VAR7->VAR29) {
case VAR30:
VAR9 = (struct VAR8 *)FUN9(VAR7);
if (VAR7->VAR31 < FUN8(sizeof(*VAR9)))
goto VAR28;
VAR5 = VAR9->VAR32;
break;
case VAR33:
VAR5 = 0;
break;
default:
goto VAR28;
}

VAR27:
FUN10(VAR11);
return VAR5;

VAR28:
FUN11(VAR34, "",
FUN12(""));
goto VAR27;

VAR22:
FUN11(VAR34, "",
FUN12(""));
goto VAR27;
}