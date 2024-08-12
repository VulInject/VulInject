static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[VAR4->VAR11];
    int64_t VAR12 = VAR13, VAR14;
    int VAR15 = VAR16;
    int VAR17;
    struct tm VAR18;
    int64_t VAR19;
    int64_t VAR20;
    if (!VAR6->VAR21)
        return FUN2(VAR22);
VAR23:
    if (VAR6->VAR24)
    {
        VAR12 = VAR6->VAR25 < VAR6->VAR26 ? VAR6->VAR24[VAR6->VAR25] : VAR13;
    }
    else if (VAR6->VAR27)
    {
        VAR15 = VAR6->VAR25 < VAR6->VAR28 ? VAR6->VAR27[VAR6->VAR25] : VAR16;
    }
    else
    {
        if (VAR6->VAR29)
        {
            int64_t VAR30 = FUN3();
            time_t VAR31 = VAR30 / 1000000;
            FUN4(&VAR31, &VAR18);
            VAR19 = (VAR32)(VAR18.VAR33 * 3600 + VAR18.VAR34 * 60 + VAR18.VAR35) * 1000000 + (VAR30 % 1000000);
            VAR20 = (VAR19 + VAR6->VAR36) % VAR6->VAR37;
            if (VAR6->VAR38 != VAR19 && VAR20 < VAR6->VAR39 && VAR20 < VAR6->VAR40)
            {
                VAR6->VAR41 = 1;
                VAR6->VAR38 = VAR19;
            }
            VAR6->VAR39 = VAR20;
        }
        else
        {
            VAR12 = VAR6->VAR37 * (VAR6->VAR25 + 1);
        }
    }
    FUN5(VAR2, "", VAR4->VAR11, FUN6(VAR4->VAR42), FUN7(VAR4->VAR42, &VAR9->VAR43), FUN7(VAR4->VAR44, &VAR9->VAR43), VAR4->VAR45 & VAR46, VAR4->VAR11 == VAR6->VAR47 ? VAR6->VAR48 : -1);
    if (VAR4->VAR11 == VAR6->VAR47 && (VAR4->VAR45 & VAR46 || VAR6->VAR49) && (VAR6->VAR50 > 0 || VAR6->VAR51) && (VAR6->VAR41 || VAR6->VAR48 >= VAR15 || (VAR4->VAR42 != VAR52 && FUN8(VAR4->VAR42, VAR9->VAR43, VAR12 - VAR6->VAR53, VAR54) >= 0)))
    {
        if (VAR6->VAR55.VAR56 == 0)
            VAR6->VAR55.VAR57 = (double)VAR4->VAR42 * FUN9(VAR9->VAR43);
        if ((VAR17 = FUN10(VAR2, VAR6->VAR58, 0)) < 0)
            goto VAR59;
        if ((VAR17 = FUN11(VAR2, VAR6->VAR58)) < 0)
            goto VAR59;
        VAR6->VAR41 = 0;
        VAR6->VAR55.VAR60 = VAR6->VAR61 + VAR6->VAR62 * VAR6->VAR63;
        VAR6->VAR55.VAR64 = (double)VAR4->VAR42 * FUN9(VAR9->VAR43);
        VAR6->VAR55.VAR65 = FUN12(VAR4->VAR42, VAR9->VAR43, VAR54);
        VAR6->VAR55.VAR57 = VAR6->VAR55.VAR64;
        if (VAR6->VAR24 || (!VAR6->VAR27 && !VAR6->VAR29) && VAR6->VAR51)
            goto VAR23;
    }
    if (VAR4->VAR11 == VAR6->VAR47)
    {
        if (VAR4->VAR42 != VAR52)
            VAR6->VAR55.VAR57 = FUN13(VAR6->VAR55.VAR57, (double)(VAR4->VAR42 + VAR4->VAR44) * FUN9(VAR9->VAR43));
        VAR6->VAR55.VAR56 = VAR4->VAR44;
    }
    if (VAR6->VAR50 == 0)
    {
        FUN14(VAR2, VAR66, "", VAR6->VAR21->VAR67, VAR4->VAR11, FUN6(VAR4->VAR42), FUN7(VAR4->VAR42, &VAR9->VAR43), VAR6->VAR48);
    }
    FUN14(VAR2, VAR68, "", VAR4->VAR11, FUN7(VAR6->VAR55.VAR65, &VAR54), FUN6(VAR4->VAR42), FUN7(VAR4->VAR42, &VAR9->VAR43), FUN6(VAR4->VAR69), FUN7(VAR4->VAR69, &VAR9->VAR43));
    VAR14 = FUN12(VAR6->VAR70 - (VAR6->VAR71 ? VAR6->VAR55.VAR65 : 0), VAR54, VAR9->VAR43);
    if (VAR4->VAR42 != VAR52)
        VAR4->VAR42 += VAR14;
    if (VAR4->VAR69 != VAR52)
        VAR4->VAR69 += VAR14;
    FUN14(VAR2, VAR68, "", FUN6(VAR4->VAR42), FUN7(VAR4->VAR42, &VAR9->VAR43), FUN6(VAR4->VAR69), FUN7(VAR4->VAR69, &VAR9->VAR43));
    VAR17 = FUN15(VAR6->VAR21, VAR4->VAR11, VAR4, VAR2, VAR6->VAR70 || VAR6->VAR71);
VAR59:
    if (VAR4->VAR11 == VAR6->VAR47)
    {
        VAR6->VAR48++;
        VAR6->VAR50++;
    }
    return VAR17;
}