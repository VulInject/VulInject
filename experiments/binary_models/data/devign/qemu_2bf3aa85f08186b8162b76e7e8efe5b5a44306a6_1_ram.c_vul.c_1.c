static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    int VAR6 = -1;
    uint64_t VAR7;
    ram_addr_t VAR8;
    VAR9 *VAR10;
    int VAR11;
    bool VAR12 = true;
    VAR13 *VAR14 = VAR4->VAR14;
    ram_addr_t VAR15 = VAR4->VAR16 << VAR17;
    VAR10 = VAR14->VAR18 + VAR15;
    FUN2(VAR14->VAR19, (VAR20)VAR15, VAR10);
    VAR7 = 0;
    VAR11 = FUN3(VAR2->VAR21, VAR14->VAR15, VAR15, VAR22, &VAR7);
    if (VAR7)
    {
        VAR2->VAR23 += VAR7;
        VAR6 = 1;
    }
    FUN4();
    VAR8 = VAR14->VAR15 + VAR15;
    if (VAR11 != VAR24)
    {
        if (VAR11 != VAR25)
        {
            if (VAR7 > 0)
            {
                VAR2->VAR26++;
            }
            else if (VAR7 == 0)
            {
                VAR2->VAR27++;
            }
        }
    }
    else
    {
        VAR6 = FUN5(VAR2, VAR14, VAR15, VAR10);
        if (VAR6 > 0)
        {
            FUN6(VAR2, VAR8);
            FUN7(VAR14->VAR19, VAR15, VAR6);
        }
        else if (!VAR2->VAR28 && !FUN8() && FUN9())
        {
            VAR6 = FUN10(VAR2, &VAR10, VAR8, VAR14, VAR15, VAR5);
            if (!VAR5)
            {
                VAR12 = false;
            }
        }
    }
    if (VAR6 == -1)
    {
        VAR2->VAR23 += FUN11(VAR2, VAR14, VAR15 | VAR29);
        if (VAR12)
        {
            FUN12(VAR2->VAR21, VAR10, VAR22, FUN13() & FUN8());
        }
        else
        {
            FUN14(VAR2->VAR21, VAR10, VAR22);
        }
        VAR2->VAR23 += VAR22;
        VAR6 = 1;
        VAR2->VAR26++;
    }
    FUN15();
    return VAR6;
}