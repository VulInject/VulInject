static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int64_t VAR4 = FUN2(VAR5);
    int64_t VAR6 = 0;
    int64_t VAR7 = 0;
    bool VAR8 = false;
    FUN3();
    FUN4("");
    FUN5(VAR3->VAR9, &VAR3->VAR10);
    while (VAR3->VAR11 == VAR12)
    {
        int64_t VAR13;
        uint64_t VAR14;
        if (VAR3->VAR15 < VAR3->VAR16)
        {
            FUN4("");
            VAR14 = FUN6(VAR3->VAR9, VAR7);
            FUN4("", VAR14, VAR7);
            if (VAR14 && VAR14 >= VAR7)
            {
                FUN7(VAR3->VAR9);
            }
            else
            {
                int VAR17 = FUN8();
                int64_t VAR18, VAR19;
                FUN4("");
                VAR18 = FUN2(VAR5);
                FUN9(VAR20);
                FUN10(VAR21);
                FUN11(VAR3->VAR9);
                FUN12(VAR3);
                VAR19 = FUN2(VAR5);
                VAR3->VAR22 = VAR19 - VAR3->VAR22;
                VAR3->VAR23 = VAR19 - VAR18;
                if (VAR3->VAR11 != VAR24)
                {
                    if (VAR17)
                    {
                        FUN13();
                    }
                }
                VAR8 = true;
            }
        }
        FUN14();
        VAR13 = FUN2(VAR5);
        if (VAR13 >= VAR4 + VAR25)
        {
            uint64_t VAR26 = VAR3->VAR15;
            uint64_t VAR27 = VAR13 - VAR4 - VAR6;
            double VAR28 = VAR26 / VAR27;
            VAR7 = VAR28 * FUN15() / 1000000;
            FUN4("" VAR29 "" VAR29 "" VAR30 "", VAR26, VAR27, VAR28, VAR7);
            if (VAR3->VAR31 && VAR26 > 10000)
            {
                VAR3->VAR32 = VAR3->VAR31 / VAR28;
            }
            VAR3->VAR15 = 0;
            VAR6 = 0;
            VAR4 = VAR13;
        }
        if (!VAR8 && (VAR3->VAR15 >= VAR3->VAR16))
        {
            FUN16((VAR4 + VAR25 - VAR13) * 1000);
            VAR6 += FUN2(VAR5) - VAR13;
        }
        FUN17(VAR3);
        FUN3();
        if (FUN18(VAR3->VAR9))
        {
            FUN19(VAR3);
        }
    }
    FUN14();
    FUN20(VAR3->VAR33);
    return NULL;
}