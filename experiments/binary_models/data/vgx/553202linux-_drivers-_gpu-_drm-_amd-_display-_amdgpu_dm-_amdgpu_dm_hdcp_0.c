static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5, struct VAR6 *VAR7, char *VAR8,
loff_t VAR9, size_t VAR10)
{
struct VAR11 *VAR12;
VAR13 *VAR14 = NULL;
uint32_t VAR15;
uint32_t VAR16;
size_t VAR17 = VAR10;

VAR12 = FUN2(VAR7, struct VAR11, VAR18);

FUN3(VAR12, true);

VAR14 = FUN4(VAR12->VAR19.VAR20.VAR21.VAR22, &VAR15, &VAR16);

if (!VAR14) {
VAR17 = -VAR23;
goto VAR17;
}

if (VAR9 >= VAR16)
VAR17 = 0;

if (VAR16 - VAR9 < VAR10) {
memcpy(VAR8, VAR14 + VAR9, VAR16 - VAR9);
VAR17 = VAR16 - VAR9;
goto VAR17;
}

memcpy(VAR8, VAR14 + VAR9, VAR10);

VAR17:
FUN3(VAR12, false);
return VAR17;
}