int
FUN1(VAR1 *VAR2, int VAR3)
{
int			VAR4 = VAR5;
VAR6		*VAR7 = NULL;
VAR8		*VAR9 = VAR2->VAR10;
uint32_t 		VAR11;
VAR12 		*VAR13;

FUN2(FUN3(VAR3));

VAR7 = (VAR6 *)VAR2->VAR14;
FUN4((VAR7 != NULL));
VAR13 = (VAR12 *)VAR7->VAR13;
FUN4((VAR13 != NULL));
VAR11 = (VAR15 | VAR7->VAR16);


FUN5(&VAR13->VAR17);

VAR4 = FUN6(VAR7->VAR13, VAR11, VAR7);

if (VAR4 == VAR5)
goto VAR18;

VAR9->VAR19.VAR20.VAR21 =
(unsigned long long)VAR7->VAR19;

VAR9->VAR22.VAR20.VAR21 =
(unsigned long long)VAR7->VAR22;

VAR9->VAR23.VAR20.VAR21 =
(unsigned long long)VAR7->VAR23;

VAR9->VAR24.VAR20.VAR21 =
(unsigned long long)VAR7->VAR24;

VAR4 = VAR25;
VAR18:
FUN7(&VAR13->VAR17);

return (VAR4);
}