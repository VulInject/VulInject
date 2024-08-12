static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    bool VAR10;
    if (VAR2->VAR11.VAR12.VAR13 < 16)
    {
        return false;
    }
    if (VAR2->VAR11.VAR12.VAR14[2] > 2)
    {
        return false;
    }
    VAR8 = VAR2->VAR11.VAR15->VAR8;
    VAR9 = VAR2->VAR11.VAR15->VAR9;
    VAR10 = false;
    VAR7 = 0;
    FUN2(VAR4, &VAR2->VAR11.VAR16->VAR17.VAR18, VAR19)
    {
        VAR20 *VAR21 = VAR4->VAR22;
        VAR23 *VAR15 = FUN3(VAR21);
        if (VAR15->VAR8 == VAR8 && VAR15->VAR9 == VAR9)
        {
            if (VAR15->VAR24 == 0)
            {
                VAR10 = true;
            }
            VAR7 += 8;
        }
    }
    if (!VAR10)
    {
        VAR7 += 8;
    }
    VAR6 = FUN4(VAR7 + 8, VAR2->VAR11.VAR12.VAR13 & ~7);
    if (VAR6 > sizeof(VAR2->VAR14))
    {
        return false;
    }
    memset(VAR2->VAR14, 0, VAR6);
    FUN5(&VAR2->VAR14, VAR7);
    VAR5 = VAR10 ? 8 : 16;
    FUN2(VAR4, &VAR2->VAR11.VAR16->VAR17.VAR18, VAR19)
    {
        VAR20 *VAR21 = VAR4->VAR22;
        VAR23 *VAR15 = FUN3(VAR21);
        if (VAR15->VAR8 == VAR8 && VAR15->VAR9 == VAR9)
        {
            FUN6(&VAR2->VAR14[VAR5], VAR15->VAR24);
            VAR5 += 8;
        }
    }
    assert(VAR5 == VAR7 + 8);
    VAR2->VAR6 = VAR6;
    return true;
}