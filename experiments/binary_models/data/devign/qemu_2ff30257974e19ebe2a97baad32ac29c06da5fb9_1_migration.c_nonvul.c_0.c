static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int64_t VAR4 = FUN2(VAR5);
    int64_t VAR6 = FUN2(VAR7);
    int64_t VAR8 = 0;
    int64_t VAR9 = 0;
    int64_t VAR10 = VAR4;
    int64_t VAR11;
    bool VAR12 = false;
    bool VAR13 = false;
    enum MigrationStatus VAR14 = VAR15;
    FUN3();
    FUN4(VAR3->VAR16);
    if (FUN5())
    {
        FUN6(VAR3->VAR16);
        FUN7(VAR3->VAR16, 1);
        FUN8(VAR3->VAR16);
    }
    FUN9(VAR3->VAR16, &VAR3->VAR17);
    VAR3->VAR18 = FUN2(VAR7) - VAR6;
    VAR14 = VAR15;
    FUN10(&VAR3->VAR19, VAR20, VAR15);
    FUN11();
    while (VAR3->VAR19 == VAR15 || VAR3->VAR19 == VAR21)
    {
        int64_t VAR22;
        uint64_t VAR23;
        if (!FUN12(VAR3->VAR16))
        {
            uint64_t VAR24, VAR25;
            FUN13(VAR3->VAR16, VAR9, &VAR25, &VAR24);
            VAR23 = VAR25 + VAR24;
            FUN14(VAR23, VAR9, VAR24, VAR25);
            if (VAR23 && VAR23 >= VAR9)
            {
                if (FUN5() && VAR3->VAR19 != VAR21 && VAR25 <= VAR9 && FUN15(&VAR3->VAR26))
                {
                    if (!FUN16(VAR3, &VAR12))
                    {
                        VAR14 = VAR21;
                        VAR13 = true;
                    }
                    continue;
                }
                FUN17(VAR3->VAR16, VAR13);
            }
            else
            {
                FUN18(VAR23);
                FUN19(VAR3, VAR14, &VAR12, &VAR10);
                break;
            }
        }
        if (FUN20(VAR3->VAR16))
        {
            FUN10(&VAR3->VAR19, VAR14, VAR27);
            FUN21();
            break;
        }
        VAR22 = FUN2(VAR5);
        if (VAR22 >= VAR4 + VAR28)
        {
            uint64_t VAR29 = FUN22(VAR3->VAR16) - VAR8;
            uint64_t VAR30 = VAR22 - VAR4;
            double VAR31 = (double)VAR29 / VAR30;
            VAR9 = VAR31 * VAR3->VAR32.VAR33;
            VAR3->VAR34 = (((double)VAR29 * 8.0) / ((double)VAR30 / 1000.0)) / 1000.0 / 1000.0;
            FUN23(VAR29, VAR30, VAR31, VAR9);
            if (VAR3->VAR35 && VAR29 > 10000)
            {
                VAR3->VAR36 = VAR3->VAR35 / VAR31;
            }
            FUN24(VAR3->VAR16);
            VAR4 = VAR22;
            VAR8 = FUN22(VAR3->VAR16);
        }
        if (FUN12(VAR3->VAR16))
        {
            FUN25((VAR4 + VAR28 - VAR22) * 1000);
        }
    }
    FUN26();
    FUN27();
    VAR11 = FUN2(VAR5);
    FUN28();
    FUN29();
    if (VAR3->VAR19 == VAR37)
    {
        uint64_t VAR29 = FUN22(VAR3->VAR16);
        VAR3->VAR38 = VAR11 - VAR3->VAR38;
        if (!VAR13)
        {
            VAR3->VAR39 = VAR11 - VAR10;
        }
        if (VAR3->VAR38)
        {
            VAR3->VAR34 = (((double)VAR29 * 8.0) / ((double)VAR3->VAR38)) / 1000;
        }
        FUN30(VAR40);
    }
    else
    {
        if (VAR12 && !VAR13)
        {
            FUN31();
        }
        else
        {
            if (FUN32(VAR41))
            {
                FUN30(VAR40);
            }
        }
    }
    FUN33(VAR3->VAR42);
    FUN34();
    FUN35();
    return NULL;
}