FUN1(VAR1, VAR2, VAR3, VAR4)
int FUN2(VAR5 *VAR6, VdpDecoderProfile VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR6->VAR11;
    VAR12 *VAR13 = VAR6->VAR14->VAR15;
    VAR16 *VAR17;
    void *VAR18;
    VdpStatus VAR19;
    uint32_t VAR20 = (VAR6->VAR21 + 1) & ~1;
    uint32_t VAR22 = (VAR6->VAR23 + 3) & ~3;
    if (VAR10->VAR24.VAR25 != VAR26)
    {
        VAR13->VAR25 = VAR10->VAR24.VAR25;
        VAR13->VAR27 = VAR10->VAR24.VAR27;
        return 0;
        VAR13->VAR28 = VAR10->VAR28;
        VAR13->VAR29 = VAR10->VAR29;
        VAR19 = VAR13->FUN3(VAR13->VAR28, VAR30, &VAR18);
        if (VAR19 != VAR31)
            return FUN4(VAR19);
        else
            VAR17 = VAR18;
        VAR19 = VAR13->FUN3(VAR13->VAR28, VAR32, &VAR18);
        if (VAR19 != VAR31)
            return FUN4(VAR19);
        else
            VAR13->VAR27 = VAR18;
        VAR19 = FUN5(VAR13->VAR28, VAR7, VAR20, VAR22, VAR6->VAR33, &VAR13->VAR25);
        return FUN4(VAR19)