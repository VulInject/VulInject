FUN1(VAR1, VAR2, VAR3, VAR4)
int FUN2(VAR5 *VAR6, VdpDecoderProfile VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR6->VAR11;
    VAR12 *VAR13 = VAR6->VAR14->VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    void *VAR22;
    VdpStatus VAR23;
    VdpBool VAR24;
    uint32_t VAR25, VAR26, VAR27, VAR28;
    uint32_t VAR29 = (VAR6->VAR30 + 1) & ~1;
    uint32_t VAR31 = (VAR6->VAR32 + 3) & ~3;
    VAR13->VAR29 = VAR33;
    VAR13->VAR31 = VAR33;
    if (!VAR10)
    {
        VAR13->VAR34 = VAR35;
        FUN3(VAR6, VAR36, "");
        return 0;
    }
    if (VAR10->VAR37.VAR38 != VAR35)
    {
        VAR13->VAR38 = VAR10->VAR37.VAR38;
        VAR13->VAR39 = VAR10->VAR37.VAR39;
        VAR13->VAR34 = VAR35;
        return 0;
    }
    VAR10->VAR40 = 0;
    VAR13->VAR34 = VAR10->VAR34;
    VAR13->VAR41 = VAR10->VAR41;
    if (VAR8 < 0)
        return FUN4(VAR42);
    VAR23 = VAR13->FUN5(VAR13->VAR34, VAR43, &VAR22);
    if (VAR23 != VAR44)
        return FUN6(VAR23);
    else
        VAR17 = VAR22;
    VAR23 = FUN7(VAR13->VAR34, VAR45, &VAR24, &VAR27, &VAR28);
    if (VAR23 != VAR44)
        return FUN6(VAR23);
    if (VAR24 != VAR46 || VAR27 < VAR29 || VAR28 < VAR31)
        return FUN4(VAR42);
    VAR23 = VAR13->FUN5(VAR13->VAR34, VAR47, &VAR22);
    if (VAR23 != VAR44)
        return FUN6(VAR23);
    else
        VAR19 = VAR22;
    VAR23 = FUN8(VAR13->VAR34, VAR7, &VAR24, &VAR25, &VAR26, &VAR27, &VAR28);
    if (VAR23 != VAR44)
        return FUN6(VAR23);
    if (VAR24 != VAR46 || VAR25 < VAR8 || VAR27 < VAR29 || VAR28 < VAR31)
        return FUN4(VAR42);
    VAR23 = VAR13->FUN5(VAR13->VAR34, VAR48, &VAR22);
    if (VAR23 != VAR44)
        return FUN6(VAR23);
    else
        VAR21 = VAR22;
    VAR23 = VAR13->FUN5(VAR13->VAR34, VAR49, &VAR22);
    if (VAR23 != VAR44)
        return FUN6(VAR23);
    else
        VAR13->VAR39 = VAR22;
    VAR23 = FUN9(VAR13->VAR34, VAR7, VAR29, VAR31, VAR6->VAR50, &VAR13->VAR38);
    if (VAR23 == VAR44)
    {
        VAR13->VAR29 = VAR6->VAR30;
        VAR13->VAR31 = VAR6->VAR32;
    }
    return FUN6(VAR23);
}