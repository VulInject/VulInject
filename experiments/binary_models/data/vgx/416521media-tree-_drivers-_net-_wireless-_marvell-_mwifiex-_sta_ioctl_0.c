}
FUN1(VAR1);


int FUN2(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = VAR3->VAR7;
struct VAR8 *VAR9;

if (!VAR5)
return -1;

VAR9 = &VAR3->VAR10.VAR11;

VAR5->VAR12 = VAR3->VAR12;

memcpy(&VAR5->VAR13, &VAR9->VAR13, sizeof(struct VAR14));

memcpy(&VAR5->VAR15, &VAR9->VAR16, VAR17);

VAR5->VAR18 = VAR9->VAR19;

memcpy(VAR5->VAR20, VAR7->VAR20,
VAR21);

VAR5->VAR22 = VAR3->VAR22;

VAR5->VAR23 = VAR3->VAR24;
VAR5->VAR25 = VAR3->VAR26;

VAR5->VAR27 = VAR3->VAR27;

VAR5->VAR28 = VAR3->VAR28;

if (VAR3->VAR29.VAR30)
VAR5->VAR31 = true;
else
VAR5->VAR31 = false;

VAR5->VAR32 = VAR7->VAR32;
VAR5->VAR33 = VAR7->VAR33;

return 0;
}