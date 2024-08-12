static int FUN1(VAR1 *VAR2, CMSampleBufferRef VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    bool VAR12;
    bool VAR13;
    size_t VAR14;
    size_t VAR15 = 0;
    size_t VAR16;
    size_t VAR17;
    size_t VAR18 = 0;
    int64_t VAR19;
    int64_t VAR20;
    int VAR21;
    CMTime VAR22;
    CMTime VAR23;
    CMVideoFormatDescriptionRef VAR24;
    FUN2(VAR3, &VAR12);
    VAR11 = FUN3(VAR2, VAR3, &VAR14);
    if (VAR11)
        return VAR11;
    VAR13 = VAR12 && !(VAR2->VAR25 & VAR26);
    if (VAR13)
    {
        VAR24 = FUN4(VAR3);
        if (!VAR24)
        {
            FUN5(VAR2, VAR27, "");
            return VAR28;
        }
        int VAR11 = FUN6(VAR2, VAR24, &VAR15);
        if (VAR11)
            return VAR11;
    }
    VAR11 = FUN7(VAR14, VAR3, &VAR21);
    if (VAR11)
        return VAR11;
    if (VAR7)
    {
        size_t VAR29 = FUN8(VAR7, VAR30);
        VAR18 = sizeof(VAR31) + 1 + VAR29 + 1;
    }
    VAR16 = FUN9(VAR3);
    VAR17 = VAR15 + VAR16 + VAR18 + VAR21 * ((int)sizeof(VAR31) - (int)VAR14);
    VAR11 = FUN10(VAR2, VAR5, VAR17, VAR17);
    if (VAR11 < 0)
        return VAR11;
    if (VAR13)
    {
        VAR11 = FUN11(VAR2, VAR24, VAR5->VAR32, VAR17);
        if (VAR11)
            return VAR11;
    }
    VAR11 = FUN12(VAR2, VAR14, VAR3, VAR7, VAR5->VAR32 + VAR15, VAR5->VAR33 - VAR15);
    if (VAR11)
    {
        FUN5(VAR2, VAR27, "", VAR11);
        return VAR11;
    }
    if (VAR12)
    {
        VAR5->VAR25 |= VAR34;
    }
    VAR22 = FUN13(VAR3);
    VAR23 = FUN14(VAR3);
    if (FUN15(VAR23))
    {
        if (!VAR9->VAR35)
        {
            VAR23 = VAR22;
        }
        else
        {
            FUN5(VAR2, VAR27, "");
            return VAR28;
        }
    }
    VAR19 = VAR9->VAR19 >= 0 ? VAR9->VAR19 : 0;
    VAR20 = VAR2->VAR36.VAR37;
    VAR5->VAR22 = VAR22.VAR38 / VAR20;
    VAR5->VAR23 = VAR23.VAR38 / VAR20 - VAR19;
    VAR5->VAR33 = VAR17;
    return 0;
}