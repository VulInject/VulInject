VAR1
FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6,
VAR7 * VAR8, VAR9 * VAR10, VAR11 * VAR12, uint64_t VAR13, VAR14 * VAR15,
VAR16 * VAR17, cntxt_callback_t VAR18, void * VAR19)
{
Status_t VAR20;
VAR21 *VAR22;
sm_dispatch_send_params_t VAR23;

VAR23.VAR3 = VAR3;
VAR23.VAR4 = VAR4;
VAR23.VAR5 = VAR5;
VAR23.VAR6 = VAR6;
VAR23.VAR24 = VAR8->VAR24;
VAR23.VAR25 = VAR8->VAR25;
VAR23.VAR26 = VAR8->VAR26;
VAR23.VAR13 = VAR13;
VAR23.VAR27 = VAR28;
VAR23.VAR12 = (VAR12 ? *VAR12: 0);

VAR23.VAR18 = VAR18;
VAR23.VAR19 = VAR19;

uint32_t VAR29 = FUN2(sizeof(VAR23.VAR10), VAR23.VAR12);
if (VAR29 && VAR10) {
memcpy((void *)VAR23.VAR10, (void *)VAR10, VAR29);
}

VAR20 = FUN3(VAR17, &VAR23, VAR15, &VAR22);
if (VAR20 != VAR30) {
FUN4("",
VAR20);
return VAR20;
}

FUN5(VAR22);

return VAR30;
}