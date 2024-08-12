static int FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4)
{
    int VAR5;
    VAR2->VAR6 = VAR3->VAR6;
    VAR2->VAR7 = VAR3->VAR7;
    VAR2->VAR8 = VAR3->VAR8;
    VAR2->VAR9 = VAR3->VAR9;
    VAR2->VAR10 = VAR3->VAR10;
    VAR2->VAR11 = VAR3->VAR11;
    VAR2->VAR12 = VAR3->VAR12;
    VAR2->VAR13 = VAR3->VAR13;
    VAR2->VAR14 = VAR3->VAR14;
    VAR2->VAR15 = VAR3->VAR15;
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR16 = VAR3->VAR16;
    FF_ENABLE_DEPRECATION_WARNINGS VAR2->VAR17 = VAR3->VAR17;
    VAR2->VAR18 = VAR3->VAR18;
    VAR2->VAR19 = VAR3->VAR19;
    VAR2->VAR20 = VAR3->VAR20;
    VAR2->VAR21 = VAR3->VAR21;
    VAR2->VAR22 = VAR3->VAR22;
    VAR2->VAR23 = VAR3->VAR23;
    VAR2->VAR24 = VAR3->VAR24;
    VAR2->VAR25 = VAR3->VAR25;
    VAR2->VAR26 = VAR3->VAR26;
    VAR2->VAR27 = VAR3->VAR27;
    VAR2->VAR28 = VAR3->VAR28;
    VAR2->VAR29 = VAR3->VAR29;
    VAR2->VAR30 = VAR3->VAR30;
    VAR2->VAR31 = VAR3->VAR31;
    VAR2->VAR32 = VAR3->VAR32;
    FUN2(&VAR2->VAR33, VAR3->VAR33, 0);
    VAR34 memcpy(VAR2->VAR35, VAR3->VAR35, sizeof(VAR2->VAR35));
    FF_ENABLE_DEPRECATION_WARNINGS for (VAR5 = 0; VAR5 < VAR3->VAR36; VAR5++)
    {
        const VAR37 *VAR38 = VAR3->VAR39[VAR5];
        VAR37 *VAR40;
        if (VAR38->VAR41 == VAR42 && (VAR3->VAR43 != VAR2->VAR43 || VAR3->VAR44 != VAR2->VAR44))
            continue;
        if (VAR4)
        {
            VAR40 = FUN3(VAR2, VAR38->VAR41, VAR38->VAR45);
            if (!VAR40)
            {
                FUN4(VAR2);
                return FUN5(VAR46);
                memcpy(VAR40->VAR47, VAR38->VAR47, VAR38->VAR45);
            }
            else
            {
                VAR40 = FUN3(VAR2, VAR38->VAR41, 0);
                if (!VAR40)
                {
                    FUN4(VAR2);
                    return FUN5(VAR46);
                    if (VAR38->VAR48)
                    {
                        VAR40->VAR48 = FUN6(VAR38->VAR48);
                        if (!VAR40->VAR48)
                        {
                            FUN4(VAR2);
                            return FUN5(VAR46);
                            VAR40->VAR47 = VAR40->VAR48->VAR47;
                            VAR40->VAR45 = VAR40->VAR48->VAR45;
                            FUN2(&VAR40->VAR33, VAR38->VAR33, 0);
                            FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR49 = NULL;
                            VAR2->VAR50 = 0;
                            VAR2->VAR51 = 0;
                            FUN7(&VAR2->VAR52);
                            if (VAR3->VAR52)
                            {
                                VAR2->VAR52 = FUN6(VAR3->VAR52);
                                if (VAR2->VAR52)
                                {
                                    VAR2->VAR49 = VAR2->VAR52->VAR47;
                                    VAR2->VAR50 = VAR3->VAR50;
                                    VAR2->VAR51 = VAR3->VAR51;
                                    FF_ENABLE_DEPRECATION_WARNINGS return 0;