struct VAR1 *FUN1(int VAR2, int VAR3,
gfp_t VAR4, char **VAR5)
{
struct VAR6 *VAR7;
struct VAR1 *VAR8;
struct VAR9 *VAR10;
int VAR11;

VAR11 = FUN2(&VAR12);
VAR7 = FUN3(VAR2, 0);
if (!VAR7) {
FUN4(1);
goto VAR13;
}


FUN4(FUN5(VAR14, &VAR7->VAR15));

VAR8 = FUN6(VAR4);
if (!VAR8)
goto VAR13;

VAR8->VAR16 = false;
VAR8->VAR17 = NULL;
VAR8->VAR11 = VAR11;
VAR8->VAR7 = VAR7;

switch (VAR7->VAR18) {
case VAR19:
VAR10 = FUN7(VAR2, VAR3, VAR4, VAR5,
NULL, NULL);
if (!VAR10) {
FUN8(VAR8);
goto VAR13;
}

break;
case VAR20:
VAR10 = FUN9(VAR8, VAR2, VAR3, VAR4,
VAR5);
if (!VAR10) {
FUN8(VAR8);
goto VAR13;
}

break;
default:
FUN8(VAR8);
FUN4(1);
goto VAR13;
}

VAR8->VAR10 = VAR10;


return VAR8;

VAR13:
FUN10(&VAR12, VAR11);
return NULL;
}