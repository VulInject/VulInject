int FUN1(struct VAR1 *VAR2,
uint32_t VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
struct VAR8 *VAR9;
void *VAR10;
int VAR11, VAR12;

VAR12 = VAR13 + sizeof(*VAR7);
VAR10 = FUN2(VAR12, VAR14);
if (!VAR10)
return -VAR15;

VAR9 = VAR10;
VAR7 = VAR10 + VAR13;

FUN3(VAR2, &VAR9->VAR16, VAR12, true, VAR3);

VAR9->VAR16.VAR17 = VAR18;
VAR7->VAR19.VAR20 = sizeof(*VAR7) - sizeof(VAR7->VAR19);

VAR7->VAR21 = VAR5->VAR21;
VAR7->VAR22 = VAR5->VAR22;
VAR7->VAR23 =  VAR5->VAR23;
VAR7->VAR24 = VAR5->VAR24;
VAR7->VAR25 = VAR5->VAR25;
VAR7->VAR26 = VAR5->VAR26;
VAR7->VAR27 = VAR5->VAR27;
VAR7->VAR28 = VAR5->VAR28;
VAR7->VAR29 = VAR5->VAR29;
VAR7->VAR30 = VAR5->VAR30;
VAR7->VAR31 = VAR5->VAR31;
VAR7->VAR32 = VAR5->VAR32;

VAR11 = FUN4(VAR2, VAR9);
FUN5(VAR9);

return VAR11;
}