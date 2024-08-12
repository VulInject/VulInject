static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    for (VAR4 = 0; VAR4 < VAR3; VAR4++)
    {
        VAR1 *VAR6 = &VAR2[VAR4];
        VAR7 *VAR8 = VAR6->VAR9->VAR10;
        VAR11 *VAR12 = VAR13[VAR6->VAR14].VAR15;
        if (!VAR6->VAR16)
            continue;
        if (VAR6->VAR9->VAR10->VAR17 == VAR18 && VAR8->VAR19 <= 1)
            continue;
        if (VAR6->VAR9->VAR10->VAR17 == VAR20 && (VAR12->VAR21->VAR22 & VAR23) && VAR8->VAR10->VAR24 == VAR25)
            continue;
        for (;;)
        {
            AVPacket VAR26;
            int VAR27;
            FUN2(&VAR26);
            VAR26.VAR28 = VAR6->VAR29;
            switch (VAR6->VAR9->VAR10->VAR17)
            {
            case VAR18:
                VAR27 = FUN3(VAR6->VAR30);
                VAR5 = 0;
                if (VAR27 > 0)
                {
                    int VAR31 = FUN4(VAR8->VAR32);
                    int VAR33 = VAR8->VAR19;
                    FUN5(VAR6->VAR30, VAR34, VAR27, NULL);
                    if (VAR8->VAR10->VAR35 & VAR36)
                    {
                        VAR8->VAR19 = VAR27 / (VAR31 * VAR8->VAR37);
                    }
                    else
                    {
                        int VAR38 = VAR8->VAR19 * VAR31 * VAR8->VAR37;
                        if (VAR39 < VAR38)
                            FUN6(1);
                        FUN7(VAR34 + VAR27, VAR8->VAR32, VAR38 - VAR27);
                    }
                    VAR5 = FUN8(VAR8, VAR40, VAR41, (short *)VAR34);
                    VAR26.VAR42 = FUN9((VAR43)VAR8->VAR19 * VAR6->VAR9->VAR44.VAR45, VAR6->VAR9->VAR44.VAR46, VAR8->VAR47);
                    VAR8->VAR19 = VAR33;
                }
                if (VAR5 <= 0)
                {
                    VAR5 = FUN8(VAR8, VAR40, VAR41, NULL);
                }
                if (VAR5 < 0)
                {
                    FUN10(NULL, VAR48, "");
                    FUN6(1);
                }
                VAR49 += VAR5;
                VAR26.VAR22 |= VAR50;
                break;
            case VAR20:
                VAR5 = FUN11(VAR8, VAR40, VAR41, NULL);
                if (VAR5 < 0)
                {
                    FUN10(NULL, VAR48, "");
                    FUN6(1);
                }
                VAR51 += VAR5;
                if (VAR8->VAR52 && VAR8->VAR52->VAR53)
                    VAR26.VAR22 |= VAR50;
                if (VAR6->VAR54 && VAR8->VAR55)
                {
                    fprintf(VAR6->VAR54, "", VAR8->VAR55);
                }
                break;
            default:
                VAR5 = -1;
            }
            if (VAR5 <= 0)
                break;
            VAR26.VAR56 = VAR40;
            VAR26.VAR57 = VAR5;
            if (VAR8->VAR52 && VAR8->VAR52->VAR58 != VAR59)
                VAR26.VAR58 = FUN12(VAR8->VAR52->VAR58, VAR8->VAR44, VAR6->VAR9->VAR44);
            FUN13(VAR12, &VAR26, VAR6->VAR9->VAR10, VAR6->VAR60);
        }
    }
}