struct VAR1 *FUN1(const struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = NULL;
int VAR8;


VAR7 = FUN2(sizeof(struct VAR6), VAR9);
if (VAR7 == NULL)
goto VAR10;


VAR7->VAR5 = VAR5;
memcpy(&VAR7->VAR3, VAR3, sizeof(struct VAR2));


VAR8 = FUN3(VAR7, VAR11);
if ((VAR8 != VAR12) && (VAR8 != VAR13) && (VAR8 != VAR14))
goto VAR10;


memcpy(&VAR7->VAR15.VAR16, &VAR17, sizeof(struct VAR18));
VAR7->VAR15.VAR19 = VAR7;

return &VAR7->VAR15;
VAR10:
FUN4(VAR7);
return NULL;
}