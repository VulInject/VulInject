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
    VAR9->VAR26 = VAR28;
    VAR9->VAR27 = VAR28;
    if (FUN2(VAR2, &VAR25, &VAR26, &VAR27))
        return FUN3(VAR29);
    if (VAR6)
    {
        VAR6->VAR30 = 0;
        if (VAR6->VAR31.VAR32 != VAR33)
        {
            VAR9->VAR32 = VAR6->VAR31.VAR32;
            VAR9->VAR34 = VAR6->VAR31.VAR34;
            VAR9->VAR35 = VAR33;
            return 0;
        }
        VAR9->VAR35 = VAR6->VAR35;
        VAR9->VAR36 = VAR6->VAR36;
        if (VAR6->VAR37 & VAR38)
            VAR4 = 0;
        if (!(VAR6->VAR37 & VAR39) && VAR25 != VAR40)
            return FUN3(VAR29);
    }
    else
    {
        VAR41 *VAR42 = NULL;
        VAR43 *VAR44;
        if (VAR2->VAR45)
        {
            VAR42 = (VAR41 *)VAR2->VAR45->VAR46;
        }
        else if (VAR2->VAR47)
        {
            int VAR48;
            VAR2->VAR45 = FUN4(VAR2->VAR47);
            if (!VAR2->VAR45)
                return FUN3(VAR49);
            VAR42 = (VAR41 *)VAR2->VAR45->VAR46;
            VAR42->VAR50 = VAR51;
            VAR42->VAR52 = VAR2->VAR53;
            VAR42->VAR26 = VAR2->VAR54;
            VAR42->VAR27 = VAR2->VAR55;
            VAR48 = FUN5(VAR2->VAR45);
            if (VAR48 < 0)
            {
                FUN6(&VAR2->VAR45);
                return VAR48;
            }
        }
        if (!VAR42)
        {
            FUN7(VAR2, VAR56, ""
                                        "");
            return FUN3(VAR57);
        }
        VAR44 = VAR42->VAR58->VAR6;
        VAR9->VAR35 = VAR44->VAR35;
        VAR9->VAR36 = VAR44->VAR36;
        if (VAR2->VAR59 & VAR38)
            VAR4 = 0;
    }
    if (VAR4 < 0)
        return FUN3(VAR60);
    VAR19 = VAR9->FUN8(VAR9->VAR35, VAR61, &VAR18);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    else
        VAR63 = VAR18;
    VAR19 = FUN10(&VAR64);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    if (VAR2->VAR65 == VAR66 && FUN11(VAR64, "", 7) == 0 && !(VAR2->VAR59 & VAR67))
    {
        FUN7(VAR2, VAR68, "");
        return FUN3(VAR60);
    }
    VAR19 = VAR9->FUN8(VAR9->VAR35, VAR69, &VAR18);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    else
        VAR13 = VAR18;
    VAR19 = FUN12(VAR9->VAR35, VAR25, &VAR20, &VAR23, &VAR24);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    if (VAR20 != VAR70 || VAR23 < VAR26 || VAR24 < VAR27)
        return FUN3(VAR60);
    VAR19 = VAR9->FUN8(VAR9->VAR35, VAR71, &VAR18);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    else
        VAR15 = VAR18;
    VAR19 = FUN13(VAR9->VAR35, VAR3, &VAR20, &VAR21, &VAR22, &VAR23, &VAR24);
    if ((VAR19 != VAR62 || VAR20 != VAR70) && VAR3 == VAR72)
    {
        VAR3 = VAR73;
        VAR19 = FUN13(VAR9->VAR35, VAR3, &VAR20, &VAR21, &VAR22, &VAR23, &VAR24);
    }
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    if (VAR20 != VAR70 || VAR21 < VAR4 || VAR23 < VAR26 || VAR24 < VAR27)
        return FUN3(VAR60);
    VAR19 = VAR9->FUN8(VAR9->VAR35, VAR74, &VAR18);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    else
        VAR17 = VAR18;
    VAR19 = VAR9->FUN8(VAR9->VAR35, VAR75, &VAR18);
    if (VAR19 != VAR62)
        return FUN9(VAR19);
    else
        VAR9->VAR34 = VAR18;
    VAR19 = FUN14(VAR9->VAR35, VAR3, VAR26, VAR27, VAR2->VAR76, &VAR9->VAR32);
    if (VAR19 == VAR62)
    {
        VAR9->VAR26 = VAR2->VAR54;
        VAR9->VAR27 = VAR2->VAR55;
    }
    return FUN9(VAR19);