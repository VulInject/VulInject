int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9;
    uint64_t VAR10 = 0;
    if (VAR7 < 14)
    {
        FUN2(VAR6, "");
        return VAR11;
    }
    VAR6->VAR12 = VAR13;
    if (!VAR8)
    {
        VAR9 = FUN3(VAR4);
        if (VAR9 != 0x0165)
        {
            VAR6->VAR14 = FUN3(VAR4);
            VAR6->VAR15 = FUN4(VAR4);
            VAR10 = FUN4(VAR4) * 8LL;
            VAR6->VAR16 = FUN3(VAR4);
        }
    }
    else
    {
        VAR9 = FUN5(VAR4);
        VAR6->VAR14 = FUN5(VAR4);
        VAR6->VAR15 = FUN6(VAR4);
        VAR10 = FUN6(VAR4) * 8LL;
        VAR6->VAR16 = FUN5(VAR4);
    }
    if (VAR7 == 14)
    {
        VAR6->VAR17 = 8;
    }
    else
    {
        if (!VAR8)
        {
            VAR6->VAR17 = FUN3(VAR4);
        }
        else
        {
            VAR6->VAR17 = FUN5(VAR4);
        }
    }
    if (VAR9 == 0xFFFE)
    {
        VAR6->VAR18 = 0;
    }
    else
    {
        VAR6->VAR18 = VAR9;
        VAR6->VAR19 = FUN7(VAR9, VAR6->VAR17);
    }
    if (VAR7 >= 18 && VAR9 != 0x0165)
    {
        int VAR20 = FUN3(VAR4);
        if (VAR8)
        {
            FUN8(VAR6, "");
            return VAR21;
        }
        VAR7 -= 18;
        VAR20 = FUN9(VAR7, VAR20);
        if (VAR20 >= 22 && VAR9 == 0xfffe)
        {
            FUN10(VAR4, VAR6);
            VAR20 -= 22;
            VAR7 -= 22;
        }
        if (VAR20 > 0)
        {
            FUN11(&VAR6->VAR22);
            if (FUN12(VAR6, VAR4, VAR20) < 0)
                return FUN13(VAR23);
            VAR7 -= VAR20;
        }
        if (VAR7 > 0)
            FUN14(VAR4, VAR7);
    }
    else if (VAR9 == 0x0165 && VAR7 >= 32)
    {
        int VAR24, VAR25;
        VAR7 -= 4;
        FUN11(&VAR6->VAR22);
        if (FUN12(VAR6, VAR4, VAR7) < 0)
            return FUN13(VAR23);
        VAR24 = FUN15(VAR6->VAR22 + 4);
        VAR6->VAR15 = FUN16(VAR6->VAR22 + 12);
        VAR6->VAR14 = 0;
        VAR10 = 0;
        if (VAR7 < 8 + VAR24 * 20)
            return VAR11;
        for (VAR25 = 0; VAR25 < VAR24; VAR25++)
            VAR6->VAR14 += VAR6->VAR22[8 + VAR25 * 20 + 17];
    }
    if (VAR10 > VAR26)
    {
        if (VAR2->VAR27 & VAR28)
        {
            FUN17(VAR2, VAR29, "" VAR30 "", VAR10);
            return VAR11;
        }
        else
        {
            FUN17(VAR2, VAR31, "" VAR30 "", VAR10);
            VAR6->VAR32 = 0;
        }
    }
    else
    {
        VAR6->VAR32 = VAR10;
    }
    if (VAR6->VAR15 <= 0)
    {
        FUN17(VAR2, VAR29, "", VAR6->VAR15);
        return VAR11;
    }
    if (VAR6->VAR19 == VAR33)
    {
        VAR6->VAR14 = 0;
        VAR6->VAR15 = 0;
    }
    if (VAR6->VAR19 == VAR34 && VAR6->VAR15)
        VAR6->VAR17 = VAR6->VAR32 / VAR6->VAR15;
    return 0;
}