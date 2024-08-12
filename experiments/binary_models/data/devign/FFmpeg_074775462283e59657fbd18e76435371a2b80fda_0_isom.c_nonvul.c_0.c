int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    enum AVCodecID VAR7;
    unsigned VAR8;
    int VAR9, VAR10;
    int VAR11;
    int VAR12 = FUN2(VAR6);
    FUN2(VAR6);
    FUN3(VAR6);
    VAR8 = FUN4(VAR6);
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR8 < VAR13) VAR4->VAR14->VAR15 = VAR8;
    FF_ENABLE_DEPRECATION_WARNINGS VAR4->VAR16->VAR17 = FUN4(VAR6);
    VAR7 = FUN5(VAR18, VAR12);
    if (VAR7)
        VAR4->VAR16->VAR7 = VAR7;
    FUN6(VAR2, VAR19, "", VAR12);
    VAR9 = FUN7(VAR2, VAR6, &VAR10);
    if (VAR10 == VAR20)
    {
        FUN6(VAR2, VAR19, "", VAR9);
        if (!VAR9 || (VAR21)VAR9 > (1 << 30))
            return -1;
        FUN8(VAR4->VAR16->VAR22);
        if ((VAR11 = FUN9(VAR2, VAR4->VAR16, VAR6, VAR9)) < 0)
            return VAR11;
        if (VAR4->VAR16->VAR7 == VAR23)
        {
            MPEG4AudioConfig VAR24 = {0};
            VAR11 = FUN10(&VAR24, VAR4->VAR16->VAR22, VAR4->VAR16->VAR25 * 8, 1);
            if (VAR11 < 0)
                return VAR11;
            VAR4->VAR16->VAR26 = VAR24.VAR26;
            if (VAR24.VAR27 == 29 && VAR24.VAR28 < 3)
                VAR4->VAR16->VAR29 = VAR30[VAR24.VAR28];
            else if (VAR24.VAR31)
                VAR4->VAR16->VAR29 = VAR24.VAR31;
            else
                VAR4->VAR16->VAR29 = VAR24.VAR29;
            FUN6(VAR2, VAR19, ""
                                     "",
                   VAR4->VAR16->VAR26, VAR24.VAR27, VAR24.VAR32, VAR24.VAR29, VAR24.VAR31);
            if (!(VAR4->VAR16->VAR7 = FUN5(VAR33, VAR24.VAR27)))
                VAR4->VAR16->VAR7 = VAR23;
        }
    }
    return 0;
}