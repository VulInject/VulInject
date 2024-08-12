static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
dev32_t VAR5;

FUN2(VAR4, sizeof (*VAR4));
VAR4->VAR6 = VAR4->VAR7 = VAR2->VAR8;
VAR4->VAR9 = FUN3(VAR10, "");


VAR4->VAR11 = 0;
VAR4->VAR12 = 0;


VAR4->VAR13 = 0;
VAR4->VAR14 = 0;
VAR4->VAR15 = 0;

(void) FUN4(&VAR5, VAR2->VAR16);
VAR4->VAR17 = VAR5;
(void) strcpy(VAR4->VAR18, VAR19[VAR20].VAR21);
VAR4->VAR22 = FUN5(VAR2->VAR23);
VAR4->VAR24 = VAR25 - 1;
(void) strcpy(VAR4->VAR26, "");

return (0);
}