static VAR1 FUN1(struct VAR2 *VAR3,
void *VAR4, VAR5 *VAR6)
{
TEE_Result VAR7;
uint32_t VAR8 = 32;
uint8_t VAR9[sizeof(VAR10) + VAR8];
uint32_t VAR11[1 + VAR8 / sizeof(VAR12)];
VAR12 *VAR13 = (VAR12 *)VAR11;
VAR14 *VAR15 = (VAR14 *)(&VAR11[1]);

if (*VAR6 < sizeof(VAR11)) {
*VAR6 = sizeof(VAR11);
return VAR16;
}
*VAR6 = sizeof(VAR11);

memcpy(VAR9, &VAR3->VAR17->VAR18, sizeof(VAR10));

if (FUN2(&VAR9[sizeof(VAR10)],
VAR8))
return VAR19;

VAR7 = FUN3(VAR20, VAR9, sizeof(VAR9),
VAR15, VAR8);
if (VAR7 != VAR21)
return VAR19;

*VAR13 = VAR8;

return FUN4(VAR4, VAR11, sizeof(VAR11));
}