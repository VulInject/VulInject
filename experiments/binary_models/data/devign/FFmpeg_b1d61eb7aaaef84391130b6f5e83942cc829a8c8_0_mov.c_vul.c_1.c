static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14;
    VAR6->VAR15 = VAR2;
VAR16:
    VAR11 = FUN2(VAR2, &VAR13);
    if (!VAR11)
    {
        VAR6->VAR17 = 0;
        if (!VAR6->VAR18)
            return VAR19;
        FUN3(VAR2->VAR20, VAR6->VAR18, VAR21);
        VAR6->VAR18 = 0;
        if (FUN4(VAR6, VAR2->VAR20, (VAR22){FUN5(""), VAR23}) < 0 || FUN6(VAR2->VAR20))
            return VAR19;
        FUN7(VAR2, "" VAR24 "", FUN8(VAR2->VAR20));
        goto VAR16;
        VAR9 = VAR13->VAR7;
        VAR9->VAR25++;
        if (VAR13->VAR26 != VAR27)
        {
            if (FUN3(VAR9->VAR20, VAR11->VAR28, VAR21) != VAR11->VAR28)
            {
                FUN9(VAR6->VAR15, VAR29, "" VAR24 "", VAR9->VAR30, VAR11->VAR28);
                return VAR31;
                VAR14 = FUN10(VAR9->VAR20, VAR4, VAR11->VAR32);
                if (VAR14 < 0)
                    return VAR14;
                if (VAR9->VAR33)
                {
                    VAR34 *VAR35;
                    VAR35 = FUN11(VAR4, VAR36, VAR37);
                    if (!VAR35)
                    {
                        FUN9(VAR6->VAR15, VAR29, "");
                    }
                    else
                    {
                        memcpy(VAR35, VAR9->VAR38, VAR37);
                        VAR9->VAR33 = 0;
                        if (VAR6->VAR39 && VAR9->VAR40)
                        {
                            FUN12(VAR6->VAR39, VAR4, VAR4->VAR41, VAR4->VAR32, VAR4->VAR28);
                            FUN13(VAR4->VAR41);
                            VAR4->VAR32 = 0;
                            VAR14 = FUN14(VAR6->VAR39, VAR4);
                            if (VAR14 < 0)
                                return VAR14;
                            VAR4->VAR42 = VAR9->VAR30;
                            VAR4->VAR43 = VAR11->VAR44;
                            if (VAR9->VAR45 && VAR9->VAR46 < VAR9->VAR47)
                            {
                                VAR4->VAR48 = VAR4->VAR43 + VAR9->VAR49 + VAR9->VAR45[VAR9->VAR46].VAR50;
                                VAR9->VAR51++;
                                if (VAR9->VAR46 < VAR9->VAR47 && VAR9->VAR45[VAR9->VAR46].VAR52 == VAR9->VAR51)
                                {
                                    VAR9->VAR46++;
                                    VAR9->VAR51 = 0;
                                    if (VAR9->VAR53)
                                        VAR4->VAR43 = VAR54;
                                }
                                else
                                {
                                    int64_t VAR55 = (VAR9->VAR25 < VAR13->VAR56) ? VAR13->VAR57[VAR9->VAR25].VAR44 : VAR13->VAR50;
                                    VAR4->VAR50 = VAR55 - VAR4->VAR43;
                                    VAR4->VAR48 = VAR4->VAR43;
                                    if (VAR13->VAR26 == VAR27)
                                        goto VAR16;
                                    VAR4->VAR58 |= VAR11->VAR58 & VAR59 ? VAR60 : 0;
                                    VAR4->VAR28 = VAR11->VAR28;
                                    FUN7(VAR2, "" VAR61 "" VAR61 "" VAR24 "", VAR4->VAR42, VAR4->VAR48, VAR4->VAR43, VAR4->VAR28, VAR4->VAR50);
                                    return 0