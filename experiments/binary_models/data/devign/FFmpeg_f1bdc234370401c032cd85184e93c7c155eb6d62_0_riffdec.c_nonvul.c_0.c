int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    uint64_t VAR9;
    if (VAR7 < 14)
        return VAR10;
    VAR8 = FUN2(VAR4);
    VAR6->VAR11 = VAR12;
    VAR6->VAR13 = FUN2(VAR4);
    VAR6->VAR14 = FUN3(VAR4);
    VAR9 = FUN3(VAR4) * 8;
    VAR6->VAR15 = FUN2(VAR4);
    if (VAR7 == 14)
    {
        VAR6->VAR16 = 8;
    }
    else
        VAR6->VAR16 = FUN2(VAR4);
    if (VAR8 == 0xFFFE)
    {
        VAR6->VAR17 = 0;
    }
    else
    {
        VAR6->VAR17 = VAR8;
        VAR6->VAR18 = FUN4(VAR8, VAR6->VAR16);
    }
    if (VAR7 >= 18)
    {
        int VAR19 = FUN2(VAR4);
        VAR7 -= 18;
        VAR19 = FUN5(VAR7, VAR19);
        if (VAR19 >= 22 && VAR8 == 0xfffe)
        {
            FUN6(VAR4, VAR6);
            VAR19 -= 22;
            VAR7 -= 22;
        }
        VAR6->VAR20 = VAR19;
        if (VAR19 > 0)
        {
            FUN7(VAR6->VAR21);
            VAR6->VAR21 = FUN8(VAR6->VAR20 + VAR22);
            if (!VAR6->VAR21)
                return FUN9(VAR23);
            FUN10(VAR4, VAR6->VAR21, VAR6->VAR20);
            VAR7 -= VAR19;
        }
        if (VAR7 > 0)
            FUN11(VAR4, VAR7);
    }
    if (VAR9 > VAR24)
    {
        if (VAR2->VAR25 & VAR26)
        {
            FUN12(VAR2, VAR27, "" VAR28 "", VAR9);
            return VAR10;
        }
        else
        {
            FUN12(VAR2, VAR29, "" VAR28 "", VAR9);
            VAR6->VAR30 = 0;
        }
    }
    else
    {
        VAR6->VAR30 = VAR9;
    }
    if (VAR6->VAR14 <= 0)
    {
        FUN12(VAR2, VAR27, "", VAR6->VAR14);
        return VAR10;
    }
    if (VAR6->VAR18 == VAR31)
    {
        VAR6->VAR13 = 0;
        VAR6->VAR14 = 0;
    }
    if (VAR6->VAR18 == VAR32)
        VAR6->VAR16 = VAR6->VAR30 / VAR6->VAR14;
    return 0;
}