bool FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    int VAR7 = 0;
    bool VAR8;
    int64_t VAR9;
    int64_t VAR10 = 0;
    if (VAR3)
    {
        FUN2(&VAR2->VAR11, 2);
    }
    FUN3(&VAR2->VAR12);
    if (VAR2->VAR13)
    {
        VAR10 = FUN4(VAR14);
    }
    VAR8 = FUN5(VAR2, VAR3);
    if (!VAR8)
    {
        assert(VAR15 == 0);
        if (!FUN6(VAR2))
        {
            FUN7(VAR5, &VAR2->VAR16, VAR5)
            {
                if (!VAR5->VAR17 && VAR5->VAR18.VAR19 && FUN8(VAR2, VAR5->VAR20))
                {
                    FUN9(VAR5);
                }
            }
        }
        VAR9 = VAR3 ? FUN10(VAR2) : 0;
        if (FUN11(VAR2, VAR21, VAR15, VAR9))
        {
            AioHandler VAR22;
            VAR22.VAR18.VAR23 = VAR2->VAR24;
            VAR22.VAR18.VAR19 = VAR25 | VAR26 | VAR27 | VAR28;
            VAR15 = 0;
            FUN9(&VAR22);
            VAR7 = FUN12(VAR2, VAR21, VAR15, VAR9);
        }
        else
        {
            VAR7 = FUN13(VAR21, VAR15, VAR9);
        }
    }
    if (VAR3)
    {
        FUN14(&VAR2->VAR11, 2);
    }
    if (VAR2->VAR13)
    {
        int64_t VAR29 = FUN4(VAR14) - VAR10;
        if (VAR29 <= VAR2->VAR30)
        {
        }
        else if (VAR29 > VAR2->VAR13)
        {
            int64_t VAR31 = VAR2->VAR30;
            if (VAR2->VAR32)
            {
                VAR2->VAR30 /= VAR2->VAR32;
            }
            else
            {
                VAR2->VAR30 = 0;
            }
            FUN15(VAR2, VAR31, VAR2->VAR30);
        }
        else if (VAR2->VAR30 < VAR2->VAR13 && VAR29 < VAR2->VAR13)
        {
            int64_t VAR31 = VAR2->VAR30;
            int64_t VAR33 = VAR2->VAR34;
            if (VAR33 == 0)
            {
                VAR33 = 2;
            }
            if (VAR2->VAR30)
            {
                VAR2->VAR30 *= VAR33;
            }
            else
            {
                VAR2->VAR30 = 4000;
            }
            if (VAR2->VAR30 > VAR2->VAR13)
            {
                VAR2->VAR30 = VAR2->VAR13;
            }
            FUN16(VAR2, VAR31, VAR2->VAR30);
        }
    }
    FUN17(VAR2);
    if (VAR7 > 0)
    {
        for (VAR6 = 0; VAR6 < VAR15; VAR6++)
        {
            VAR35[VAR6]->VAR18.VAR36 = VAR21[VAR6].VAR36;
        }
    }
    VAR15 = 0;
    FUN18(&VAR2->VAR12);
    VAR8 |= FUN19(VAR2);
    if (VAR7 > 0)
    {
        FUN3(&VAR2->VAR12);
        VAR8 |= FUN20(VAR2);
        FUN18(&VAR2->VAR12);
    }
    VAR8 |= FUN21(&VAR2->VAR37);
    return VAR8;
}