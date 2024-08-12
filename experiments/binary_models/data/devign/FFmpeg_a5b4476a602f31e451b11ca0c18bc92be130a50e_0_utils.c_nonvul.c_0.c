int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    for (;;)
    {
        VAR10 *VAR11 = VAR2->VAR12->VAR13;
        if (VAR11)
        {
            *VAR4 = VAR11->VAR4;
            VAR9 = VAR2->VAR14[VAR4->VAR15];
            if (VAR2->VAR12->VAR16 <= 0)
                if ((VAR7 = FUN2(VAR2, VAR9, NULL)) < 0)
                    return VAR7;
            if (VAR9->VAR17 <= 0)
            {
                VAR2->VAR12->VAR13 = VAR11->VAR18;
                VAR2->VAR12->VAR16 += VAR4->VAR19;
                FUN3(VAR11);
                return 0;
            }
        }
        VAR4->VAR20 = NULL;
        VAR4->VAR19 = 0;
        FUN4(VAR4);
        VAR5 = VAR2->VAR21->FUN5(VAR2, VAR4);
        if (VAR5 < 0)
        {
            if (VAR5 == VAR22)
                continue;
            if (!VAR11 || VAR5 == FUN6(VAR23))
                return VAR5;
            for (VAR6 = 0; VAR6 < VAR2->VAR24; VAR6++)
            {
                VAR9 = VAR2->VAR14[VAR6];
                if (VAR9->VAR25 || VAR9->VAR17 > 0)
                    if ((VAR7 = FUN2(VAR2, VAR9, NULL)) < 0)
                        return VAR7;
                FUN7(VAR9->VAR17 <= 0);
            }
            continue;
        }
        if (!VAR4->VAR26)
        {
            AVPacket VAR27 = {0};
            VAR5 = FUN8(&VAR27, VAR4);
            if (VAR5 < 0)
                return VAR5;
            *VAR4 = VAR27;
        }
        if ((VAR2->VAR28 & VAR29) && (VAR4->VAR28 & VAR30))
        {
            FUN9(VAR2, VAR31, "", VAR4->VAR15);
            FUN10(VAR4);
            continue;
        }
        if (VAR4->VAR15 >= (unsigned)VAR2->VAR24)
        {
            FUN9(VAR2, VAR32, "", VAR4->VAR15);
            continue;
        }
        VAR9 = VAR2->VAR14[VAR4->VAR15];
        if (FUN11(VAR2, VAR9, VAR4->VAR15, VAR4) && VAR9->VAR33 == VAR34)
        {
            if (!FUN12(VAR9->VAR35))
                VAR9->VAR35 = FUN13(VAR9, VAR9->VAR35);
            if (!FUN12(VAR9->VAR36))
                VAR9->VAR36 = FUN13(VAR9, VAR9->VAR36);
            if (!FUN12(VAR9->VAR37))
                VAR9->VAR37 = FUN13(VAR9, VAR9->VAR37);
        }
        VAR4->VAR38 = FUN13(VAR9, VAR4->VAR38);
        VAR4->VAR39 = FUN13(VAR9, VAR4->VAR39);
        FUN14(VAR2, VAR9);
        if (VAR2->VAR40)
            VAR4->VAR38 = VAR4->VAR39 = FUN15(FUN16(), VAR41, VAR9->VAR42);
        if (!VAR11 && VAR9->VAR17 <= 0)
            return VAR5;
        VAR7 = FUN17(&VAR2->VAR12->VAR13, VAR4, &VAR2->VAR12->VAR43, 0);
        if (VAR7)
            return VAR7;
        VAR2->VAR12->VAR16 -= VAR4->VAR19;
        if ((VAR7 = FUN2(VAR2, VAR9, VAR4)) < 0)
            return VAR7;
    }
}