static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int64_t VAR9, int64_t VAR10)
{
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    int64_t VAR16;
    AVRational VAR17;
    int VAR18 = VAR4->VAR19->VAR20 != VAR21 && VAR4->VAR19->VAR20 != VAR22;
    if (VAR2->VAR23 & VAR24)
        return;
    if (VAR4->VAR19->VAR25 == VAR26 && VAR8->VAR27 != VAR28)
    {
        if (VAR8->VAR27 == VAR8->VAR29 && VAR4->VAR30 != VAR28)
        {
            if (VAR4->VAR30 <= VAR8->VAR27)
            {
                VAR4->VAR31++;
            }
            else
            {
                FUN2(VAR2, VAR4->VAR32 ? VAR33 : VAR34, "" VAR35 "" VAR35 "", VAR8->VAR27, VAR4->VAR30);
                VAR4->VAR32++;
            }
            if (VAR4->VAR31 + VAR4->VAR32 > 250)
            {
                VAR4->VAR31 >>= 1;
                VAR4->VAR32 >>= 1;
            }
        }
        VAR4->VAR30 = VAR8->VAR27;
        if (VAR4->VAR31 < 8 * VAR4->VAR32 && VAR8->VAR27 == VAR8->VAR29)
            VAR8->VAR27 = VAR28;
    }
    if ((VAR2->VAR23 & VAR36) && VAR8->VAR29 != VAR28)
        VAR8->VAR27 = VAR28;
    if (VAR6 && VAR6->VAR37 == VAR38 && !VAR4->VAR19->VAR39)
        VAR4->VAR19->VAR39 = 1;
    VAR14 = VAR4->VAR19->VAR39;
    VAR13 = 0;
    if (VAR14 && VAR6 && VAR6->VAR37 != VAR38)
        VAR13 = 1;
    if (VAR8->VAR29 != VAR28 && VAR8->VAR27 != VAR28 && VAR4->VAR40 < 63 && VAR8->VAR27 - (1LL << (VAR4->VAR40 - 1)) > VAR8->VAR29)
    {
        if (FUN3(VAR4->VAR41) || VAR8->VAR27 - (1LL << (VAR4->VAR40 - 1)) > VAR4->VAR41)
        {
            VAR8->VAR27 -= 1LL << VAR4->VAR40;
        }
        else
            VAR8->VAR29 += 1LL << VAR4->VAR40;
    }
    if (VAR14 == 1 && VAR8->VAR27 == VAR8->VAR29 && VAR8->VAR27 != VAR28 && VAR13)
    {
        FUN2(VAR2, VAR33, "" VAR35 "", VAR8->VAR27);
        if (strcmp(VAR2->VAR42->VAR43, "") && strcmp(VAR2->VAR42->VAR43, ""))
            VAR8->VAR27 = VAR28;
    }
    VAR17 = FUN4((VAR44){VAR8->VAR17, 1}, VAR4->VAR45);
    if (VAR8->VAR17 == 0)
    {
        FUN5(VAR2, &VAR11, &VAR12, VAR4, VAR6, VAR8);
        if (VAR12 && VAR11)
        {
            VAR17 = (VAR44){VAR11, VAR12};
            VAR8->VAR17 = FUN6(1, VAR11 * (VAR46)VAR4->VAR45.VAR12, VAR12 * (VAR46)VAR4->VAR45.VAR11, VAR47);
        }
    }
    if (VAR8->VAR17 != 0 && (VAR2->VAR48 || VAR2->VAR49))
        FUN7(VAR2, VAR4, VAR8->VAR50, VAR8->VAR17);
    if (VAR6 && VAR4->VAR51 == VAR52 && VAR8->VAR53)
    {
        VAR16 = FUN8(VAR6->VAR16, VAR8->VAR17, VAR8->VAR53);
        if (VAR8->VAR29 != VAR28)
            VAR8->VAR29 += VAR16;
        if (VAR8->VAR27 != VAR28)
            VAR8->VAR27 += VAR16;
    }
    if (VAR8->VAR27 != VAR28 && VAR8->VAR29 != VAR28 && VAR8->VAR29 > VAR8->VAR27)
        VAR13 = 1;
    FUN9(NULL, "", VAR13, FUN10(VAR8->VAR29), FUN10(VAR8->VAR27), FUN10(VAR4->VAR41), VAR8->VAR50, VAR6, VAR8->VAR17, VAR14, VAR18);
    if ((VAR14 == 0 || (VAR14 == 1 && VAR6)) && VAR18)
    {
        if (VAR13)
        {
            if (VAR8->VAR27 == VAR28)
                VAR8->VAR27 = VAR4->VAR54;
            FUN11(VAR2, VAR8->VAR50, VAR8->VAR27, VAR8->VAR29, VAR8);
            if (VAR8->VAR27 == VAR28)
                VAR8->VAR27 = VAR4->VAR41;
            if (VAR4->VAR55 == 0)
                VAR4->VAR55 = VAR8->VAR17;
            if (VAR8->VAR27 != VAR28)
                VAR4->VAR41 = VAR8->VAR27 + VAR4->VAR55;
            if (VAR8->VAR27 != VAR28 && VAR8->VAR29 == VAR28 && VAR4->VAR55 > 0 && (VAR4->VAR41 - VAR9) <= 1 && VAR9 != VAR10 && VAR10 != VAR28)
                VAR8->VAR29 = VAR9;
            VAR4->VAR55 = VAR8->VAR17;
            VAR4->VAR54 = VAR8->VAR29;
        }
        else if (VAR8->VAR29 != VAR28 || VAR8->VAR27 != VAR28 || VAR8->VAR17)
        {
            if (VAR8->VAR29 == VAR28)
                VAR8->VAR29 = VAR8->VAR27;
            FUN11(VAR2, VAR8->VAR50, VAR8->VAR29, VAR8->VAR29, VAR8);
            if (VAR8->VAR29 == VAR28)
                VAR8->VAR29 = VAR4->VAR41;
            VAR8->VAR27 = VAR8->VAR29;
            if (VAR8->VAR29 != VAR28)
                VAR4->VAR41 = FUN12(VAR4->VAR45, VAR8->VAR29, VAR17, 1);
        }
    }
    if (VAR8->VAR29 != VAR28 && VAR14 <= VAR56 && FUN13(VAR4))
    {
        VAR4->VAR57[0] = VAR8->VAR29;
        for (VAR15 = 0; VAR15 < VAR14 && VAR4->VAR57[VAR15] > VAR4->VAR57[VAR15 + 1]; VAR15++)
            FUN14(VAR46, VAR4->VAR57[VAR15], VAR4->VAR57[VAR15 + 1]);
        VAR8->VAR27 = FUN15(VAR4, VAR4->VAR57, VAR8->VAR27);
    }
    if (!VAR18)
        FUN11(VAR2, VAR8->VAR50, VAR8->VAR27, VAR8->VAR29, VAR8);
    if (VAR8->VAR27 > VAR4->VAR41)
        VAR4->VAR41 = VAR8->VAR27;
    FUN9(NULL, "", VAR13, VAR14, FUN10(VAR8->VAR29), FUN10(VAR8->VAR27), FUN10(VAR4->VAR41));
    if (FUN16(VAR4->VAR19))
        VAR8->VAR23 |= VAR58;
    if (VAR6)
        VAR8->VAR59 = VAR6->VAR59;
}