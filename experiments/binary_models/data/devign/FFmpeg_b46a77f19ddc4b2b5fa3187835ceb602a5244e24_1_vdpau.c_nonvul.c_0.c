int FUN1(VAR1 *VAR2, VdpDecoderProfile VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10->VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    void *VAR18;
    VdpStatus VAR19;
    VdpBool VAR20;
    uint32_t VAR21, VAR22, VAR23, VAR24;
    VdpChromaType VAR25;
    uint32_t VAR26;
    uint32_t VAR27;
    int VAR28;
    VAR9->VAR26 = VAR29;
    VAR9->VAR27 = VAR29;
    if (FUN2(VAR2, &VAR25, &VAR26, &VAR27))
        return FUN3(VAR30);
    if (VAR6)
    {
        VAR6->VAR31 = 0;
        if (VAR6->VAR32.VAR33 != VAR34)
        {
            VAR9->VAR33 = VAR6->VAR32.VAR33;
            VAR9->VAR35 = VAR6->VAR32.VAR35;
            VAR9->VAR36 = VAR34;
            return 0;
        }
        VAR9->VAR36 = VAR6->VAR36;
        VAR9->VAR37 = VAR6->VAR37;
        if (VAR6->VAR38 & VAR39)
            VAR4 = 0;
        if (!(VAR6->VAR38 & VAR40) && VAR25 != VAR41)
            return FUN3(VAR30);
    }
    else
    {
        VAR42 *VAR43;
        VAR44 *VAR45;
        VAR28 = FUN4(VAR2, VAR46);
        if (VAR28 < 0)
            return VAR28;
        VAR43 = (VAR42 *)VAR2->VAR47->VAR48;
        VAR45 = VAR43->VAR49->VAR6;
        VAR9->VAR36 = VAR45->VAR36;
        VAR9->VAR37 = VAR45->VAR37;
        if (VAR2->VAR50 & VAR39)
            VAR4 = 0;
    }
    if (VAR4 < 0)
        return FUN3(VAR51);
    VAR19 = VAR9->FUN5(VAR9->VAR36, VAR52, &VAR18);
    if (VAR19 != VAR53)
        return FUN6(VAR19);
    else
        VAR13 = VAR18;
    VAR19 = FUN7(VAR9->VAR36, VAR25, &VAR20, &VAR23, &VAR24);
    if (VAR19 != VAR53)
        return FUN6(VAR19);
    if (VAR20 != VAR54 || VAR23 < VAR26 || VAR24 < VAR27)
        return FUN3(VAR51);
    VAR19 = VAR9->FUN5(VAR9->VAR36, VAR55, &VAR18);
    if (VAR19 != VAR53)
        return FUN6(VAR19);
    else
        VAR15 = VAR18;
    VAR19 = FUN8(VAR9->VAR36, VAR3, &VAR20, &VAR21, &VAR22, &VAR23, &VAR24);
    if ((VAR19 != VAR53 || VAR20 != VAR54) && VAR3 == VAR56)
    {
        VAR3 = VAR57;
        VAR19 = FUN8(VAR9->VAR36, VAR3, &VAR20, &VAR21, &VAR22, &VAR23, &VAR24);
    }
    if (VAR19 != VAR53)
        return FUN6(VAR19);
    if (VAR20 != VAR54 || VAR21 < VAR4 || VAR23 < VAR26 || VAR24 < VAR27)
        return FUN3(VAR51);
    VAR19 = VAR9->FUN5(VAR9->VAR36, VAR58, &VAR18);
    if (VAR19 != VAR53)
        return FUN6(VAR19);
    else
        VAR17 = VAR18;
    VAR19 = VAR9->FUN5(VAR9->VAR36, VAR59, &VAR18);
    if (VAR19 != VAR53)
        return FUN6(VAR19);
    else
        VAR9->VAR35 = VAR18;
    VAR19 = FUN9(VAR9->VAR36, VAR3, VAR26, VAR27, VAR2->VAR60, &VAR9->VAR33);
    if (VAR19 == VAR53)
    {
        VAR9->VAR26 = VAR2->VAR61;
        VAR9->VAR27 = VAR2->VAR62;
    }
    return FUN6(VAR19);
}