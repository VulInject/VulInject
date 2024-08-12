static void FUN1(struct VAR1 *VAR2,
unsigned int VAR3, const void *VAR4,
unsigned VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9;
void *VAR10;

VAR9 = FUN3(sizeof(*VAR9), VAR11 | VAR12);
if (!VAR9)
return;

VAR10 = FUN3(VAR13, VAR11 | VAR12);
if (!VAR10)
goto VAR14;


if (VAR7->VAR15 < VAR3)
FUN4(VAR2, 0, NULL, VAR3);
memcpy(&VAR7->VAR16[VAR3], VAR4, VAR5);

memcpy(VAR10, VAR7->VAR16, sizeof(VAR7->VAR16));
VAR9->VAR17 = VAR18;
VAR9->VAR19 = 0;
VAR9->VAR20 = VAR3 + VAR5;
VAR9->VAR21 = (VAR22)(unsigned long)VAR10;
FUN5(VAR7, VAR9, VAR23);

VAR14:
FUN6(VAR10);
FUN6(VAR9);
}