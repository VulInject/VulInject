int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    ram_addr_t VAR7;
    uint64_t VAR8;
    double VAR9 = 0;
    uint64_t VAR10 = 0;
    int VAR11;
    if (VAR5 < 0)
    {
        FUN2(0);
        return 0;
    }
    if (FUN3(0, VAR12) != 0)
    {
        FUN4(VAR4, -VAR13);
        return -VAR13;
    }
    if (VAR5 == 1)
    {
        VAR14 *VAR15;
        VAR16 = 0;
        VAR17 = NULL;
        VAR18 = 0;
        FUN5();
        FUN6(VAR15, &VAR19.VAR20, VAR21)
        {
            for (VAR7 = VAR15->VAR22; VAR7 < VAR15->VAR22 + VAR15->VAR23; VAR7 += VAR24)
            {
                if (!FUN7(VAR7, VAR25))
                {
                    FUN8(VAR7);
                }
            }
        }
        FUN2(1);
        FUN9(VAR4, FUN10() | VAR26);
        FUN6(VAR15, &VAR19.VAR20, VAR21)
        {
            FUN11(VAR4, strlen(VAR15->VAR27));
            FUN12(VAR4, (VAR28 *)VAR15->VAR27, strlen(VAR15->VAR27));
            FUN9(VAR4, VAR15->VAR23);
        }
    }
    VAR8 = VAR16;
    VAR9 = FUN13(VAR29);
    while ((VAR11 = FUN14(VAR4)) == 0)
    {
        int VAR30;
        VAR30 = FUN15(VAR4);
        VAR16 += VAR30;
        if (VAR30 == 0)
        {
            break;
        }
    }
    if (VAR11 < 0)
    {
        return VAR11;
    }
    VAR9 = FUN13(VAR29) - VAR9;
    VAR9 = (VAR16 - VAR8) / VAR9;
    if (VAR9 == 0)
    {
        VAR9 = 0.000001;
    }
    if (VAR5 == 3)
    {
        int VAR30;
        while ((VAR30 = FUN15(VAR4)) != 0)
        {
            VAR16 += VAR30;
        }
        FUN2(0);
    }
    FUN9(VAR4, VAR31);
    VAR10 = FUN16() * VAR24 / VAR9;
    return (VAR5 == 2) && (VAR10 <= FUN17());
}