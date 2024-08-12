static int FUN1 (VAR1 *VAR2,
VAR3 *VAR4, uint8_t VAR5, void *VAR6, void *VAR7,
const VAR8 *VAR9, const VAR10 *VAR11)
{
FUN2();

VAR12 *VAR13 = (VAR12 *)VAR11;
if (VAR6 == NULL) {
FUN3("");
FUN4(0);
}

int VAR14 = 0;
const VAR15 *VAR16 = NULL;
uint32_t VAR17 = 0;

if (FUN5(VAR7, &VAR16, &VAR17, VAR5) != 1)
FUN4(0);
if (VAR16 == NULL || VAR17 == 0)
FUN4(0);
if (VAR17 == VAR13->VAR18) {
if (memcmp(VAR16, VAR13->VAR19, VAR13->VAR18) == 0) {
VAR14 = 1;
}
}

FUN4(VAR14);
}