static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int64_t VAR4 = FUN2(VAR5);
    int64_t VAR6 = 0;
    int64_t VAR7 = 0;
    int64_t VAR8 = VAR4;
    bool VAR9 = false;
    FUN3("");
    FUN4(VAR3->VAR10, &VAR3->VAR11);
    while (VAR3->VAR12 == VAR13)
    {
        int64_t VAR14;
        uint64_t VAR15;
        if (!FUN5(VAR3->VAR10))
        {
            FUN3("");
            VAR15 = FUN6(VAR3->VAR10, VAR7);
            FUN3("", VAR15, VAR7);
            if (VAR15 && VAR15 >= VAR7)
            {
                FUN7(VAR3->VAR10);
            }
            else
            {
                int VAR16;
                FUN3("");
                FUN8();
                VAR8 = FUN2(VAR5);
                FUN9(VAR17);
                VAR9 = FUN10();
                VAR16 = FUN11(VAR18);
                if (VAR16 >= 0)
                {
                    FUN12(VAR3->VAR10, VAR19);
                    FUN13(VAR3->VAR10);
                }
                FUN14();
                if (VAR16 < 0)
                {
                    FUN15(VAR3, VAR20);
                    break;
                }
                if (!FUN16(VAR3->VAR10))
                {
                    FUN15(VAR3, VAR21);
                    break;
                }
            }
        }
        if (FUN16(VAR3->VAR10))
        {
            FUN15(VAR3, VAR20);
            break;
        }
        VAR14 = FUN2(VAR5);
        if (VAR14 >= VAR4 + VAR22)
        {
            uint64_t VAR23 = FUN17(VAR3->VAR10) - VAR6;
            uint64_t VAR24 = VAR14 - VAR4;
            double VAR25 = VAR23 / VAR24;
            VAR7 = VAR25 * FUN18() / 1000000;
            VAR3->VAR26 = VAR24 ? (((double)VAR23 * 8.0) / ((double)VAR24 / 1000.0)) / 1000.0 / 1000.0 : -1;
            FUN3("" VAR27 "" VAR27 "" VAR28 "", VAR23, VAR24, VAR25, VAR7);
            if (VAR3->VAR29 && VAR23 > 10000)
            {
                VAR3->VAR30 = VAR3->VAR29 / VAR25;
            }
            FUN19(VAR3->VAR10);
            VAR4 = VAR14;
            VAR6 = FUN17(VAR3->VAR10);
        }
        if (FUN5(VAR3->VAR10))
        {
            FUN20((VAR4 + VAR22 - VAR14) * 1000);
        }
    }
    FUN8();
    if (VAR3->VAR12 == VAR21)
    {
        int64_t VAR31 = FUN2(VAR5);
        VAR3->VAR32 = VAR31 - VAR3->VAR32;
        VAR3->VAR33 = VAR31 - VAR8;
        FUN21(VAR34);
    }
    else
    {
        if (VAR9)
        {
            FUN22();
        }
    }
    FUN23(VAR3->VAR35);
    FUN14();
    return NULL;
}