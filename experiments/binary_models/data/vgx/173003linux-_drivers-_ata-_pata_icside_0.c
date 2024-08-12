static void FUN1(struct VAR1 *VAR2, unsigned int *VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
struct VAR6 *VAR7 = VAR5->VAR8->VAR9;

if (VAR3[0] != VAR10 || VAR3[1] != VAR10)
return FUN2(VAR2, VAR3);

VAR7->VAR11[VAR5->VAR12].VAR13 = 1;

if (VAR7->VAR14 == VAR15) {

void VAR16 *VAR17 = VAR7->VAR17 +
(VAR5->VAR12 ? VAR18 : VAR19);
FUN3(VAR17);
}
}