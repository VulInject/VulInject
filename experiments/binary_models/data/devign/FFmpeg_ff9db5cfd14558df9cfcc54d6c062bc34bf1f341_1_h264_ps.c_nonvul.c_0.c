static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    unsigned int VAR8;
    VAR7 = FUN2(VAR2);
    if (VAR7)
    {
        VAR8 = FUN3(VAR2, 8);
        if (VAR8 == VAR9)
        {
            VAR6->VAR10.VAR11 = FUN3(VAR2, 16);
            VAR6->VAR10.VAR12 = FUN3(VAR2, 16);
        }
        else if (VAR8 < FUN4(VAR13))
        {
            VAR6->VAR10 = VAR13[VAR8];
        }
        else
        {
            FUN5(VAR4, VAR14, "");
            return VAR15;
        }
    }
    else
    {
        VAR6->VAR10.VAR11 = VAR6->VAR10.VAR12 = 0;
    }
    if (FUN2(VAR2))
        FUN2(VAR2);
    VAR6->VAR16 = FUN2(VAR2);
    if (VAR6->VAR16)
    {
        FUN3(VAR2, 3);
        VAR6->VAR17 = FUN2(VAR2);
        VAR6->VAR18 = FUN2(VAR2);
        if (VAR6->VAR18)
        {
            VAR6->VAR19 = FUN3(VAR2, 8);
            VAR6->VAR20 = FUN3(VAR2, 8);
            VAR6->VAR21 = FUN3(VAR2, 8);
            if (!FUN6(VAR6->VAR19))
                VAR6->VAR19 = VAR22;
            if (!FUN7(VAR6->VAR20))
                VAR6->VAR20 = VAR23;
            if (!FUN8(VAR6->VAR21))
                VAR6->VAR21 = VAR24;
        }
    }
    if (FUN2(VAR2))
    {
        VAR4->VAR25 = FUN9(VAR2) + 1;
        FUN9(VAR2);
    }
    VAR6->VAR26 = FUN2(VAR2);
    if (VAR6->VAR26)
    {
        VAR6->VAR27 = FUN10(VAR2, 32);
        VAR6->VAR28 = FUN10(VAR2, 32);
        if (!VAR6->VAR27 || !VAR6->VAR28)
        {
            FUN5(VAR4, VAR14, "" VAR29 "" VAR29 "", VAR6->VAR28, VAR6->VAR27);
            return VAR15;
        }
        VAR6->VAR30 = FUN2(VAR2);
    }
    VAR6->VAR31 = FUN2(VAR2);
    if (VAR6->VAR31)
        if (FUN11(VAR2, VAR4, VAR6) < 0)
            return VAR15;
    VAR6->VAR32 = FUN2(VAR2);
    if (VAR6->VAR32)
        if (FUN11(VAR2, VAR4, VAR6) < 0)
            return VAR15;
    if (VAR6->VAR31 || VAR6->VAR32)
        FUN2(VAR2);
    VAR6->VAR33 = FUN2(VAR2);
    VAR6->VAR34 = FUN2(VAR2);
    if (VAR6->VAR34)
    {
        FUN2(VAR2);
        FUN9(VAR2);
        FUN9(VAR2);
        FUN9(VAR2);
        FUN9(VAR2);
        VAR6->VAR35 = FUN9(VAR2);
        FUN9(VAR2);
        if (FUN12(VAR2) < 0)
        {
            VAR6->VAR35 = 0;
            VAR6->VAR34 = 0;
        }
        if (VAR6->VAR35 > 16U)
        {
            FUN5(VAR4, VAR14, "", VAR6->VAR35);
            VAR6->VAR35 = 16;
            return VAR15;
        }
    }
    if (FUN12(VAR2) < 0)
    {
        FUN5(VAR4, VAR14, "", -FUN12(VAR2));
        return VAR15;
    }
    return 0;
}