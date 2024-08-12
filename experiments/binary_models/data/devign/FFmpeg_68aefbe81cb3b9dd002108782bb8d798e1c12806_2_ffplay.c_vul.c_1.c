static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7, *VAR8;
    if (VAR3->VAR9)
    {
        if (VAR3->VAR10 == 0)
        {
            FUN2(VAR3, 1);
        }
        else
        {
            VAR5 = &VAR3->VAR11[VAR3->VAR12];
            VAR3->VAR13 = VAR5->VAR14;
            VAR3->VAR15 = FUN3();
            FUN2(VAR3, (int)(FUN4(VAR5->VAR14, VAR3) * 1000 + 0.5));
            if (VAR3->VAR16)
            {
                if (VAR3->VAR17)
                {
                    FUN5(VAR3->VAR18);
                    while (VAR3->VAR19)
                    {
                        FUN6(&VAR3->VAR20[VAR3->VAR21]);
                        if (++VAR3->VAR21 == VAR22)
                            VAR3->VAR21 = 0;
                        VAR3->VAR19--;
                    }
                    VAR3->VAR17 = 0;
                    FUN7(VAR3->VAR23);
                    FUN8(VAR3->VAR18);
                }
                else
                {
                    if (VAR3->VAR19 > 0)
                    {
                        VAR7 = &VAR3->VAR20[VAR3->VAR21];
                        if (VAR3->VAR19 > 1)
                            VAR8 = &VAR3->VAR20[(VAR3->VAR21 + 1) % VAR22];
                        else
                            VAR8 = NULL;
                        if ((VAR3->VAR13 > (VAR7->VAR14 + ((float)VAR7->VAR24.VAR25 / 1000))) || (VAR8 && VAR3->VAR13 > (VAR8->VAR14 + ((float)VAR8->VAR24.VAR26 / 1000))))
                        {
                            FUN6(VAR7);
                            if (++VAR3->VAR21 == VAR22)
                                VAR3->VAR21 = 0;
                            FUN5(VAR3->VAR18);
                            VAR3->VAR19--;
                            FUN7(VAR3->VAR23);
                            FUN8(VAR3->VAR18);
                        }
                    }
                }
            }
            FUN9(VAR3);
            if (++VAR3->VAR12 == VAR27)
                VAR3->VAR12 = 0;
            FUN5(VAR3->VAR28);
            VAR3->VAR10--;
            FUN7(VAR3->VAR29);
            FUN8(VAR3->VAR28);
        }
    }
    else if (VAR3->VAR30)
    {
        FUN2(VAR3, 40);
        FUN9(VAR3);
    }
    else
    {
        FUN2(VAR3, 100);
    }
    if (VAR31)
    {
        static int64_t VAR32;
        int64_t VAR33;
        int VAR34, VAR35, VAR36;
        double VAR37;
        VAR33 = FUN3();
        if (!VAR32 || (VAR33 - VAR32) >= 30000)
        {
            VAR34 = 0;
            VAR35 = 0;
            VAR36 = 0;
            if (VAR3->VAR30)
                VAR34 = VAR3->VAR38.VAR39;
            if (VAR3->VAR9)
                VAR35 = VAR3->VAR40.VAR39;
            if (VAR3->VAR16)
                VAR36 = VAR3->VAR41.VAR39;
            VAR37 = 0;
            if (VAR3->VAR30 && VAR3->VAR9)
                VAR37 = FUN10(VAR3) - FUN11(VAR3);
            FUN12("", FUN13(VAR3), VAR37, VAR34 / 1024, VAR35 / 1024, VAR36, VAR3->VAR42, VAR3->VAR43);
            FUN14(VAR44);
            VAR32 = VAR33;
        }
    }
}