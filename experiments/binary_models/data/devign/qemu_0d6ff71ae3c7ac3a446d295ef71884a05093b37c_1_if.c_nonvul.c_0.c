void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = FUN2(VAR4);
    bool VAR5, VAR6;
    struct VAR7 *VAR8, *VAR9, *VAR10;
    FUN3("");
    if (VAR2->VAR11)
    {
        return;
    }
    VAR2->VAR11 = true;
    if (VAR2->VAR12.VAR13 != &VAR2->VAR12)
    {
        VAR9 = VAR2->VAR12.VAR13;
        VAR6 = false;
    }
    else if (VAR2->VAR14 != &VAR2->VAR15)
    {
        VAR9 = VAR2->VAR14;
        VAR6 = true;
    }
    else
    {
        VAR9 = NULL;
    }
    while (VAR9)
    {
        VAR8 = VAR9;
        VAR5 = VAR6;
        VAR9 = VAR8->VAR13;
        if (VAR9 == &VAR2->VAR12)
        {
            VAR9 = VAR2->VAR14;
            VAR6 = true;
        }
        if (VAR9 == &VAR2->VAR15)
        {
            VAR9 = NULL;
        }
        if (VAR8->VAR16 >= VAR3 && !FUN4(VAR2, VAR8))
        {
            continue;
        }
        if (VAR8 == VAR2->VAR14)
        {
            VAR2->VAR14 = VAR8->VAR13;
        }
        VAR10 = VAR8->VAR17;
        FUN5(VAR8);
        if (VAR8->VAR18 != VAR8)
        {
            struct VAR7 *VAR19 = VAR8->VAR18;
            FUN6(VAR19, VAR10);
            FUN7(VAR8);
            if (!VAR5)
            {
                VAR9 = VAR19;
                VAR6 = false;
            }
            else if (VAR2->VAR14 == &VAR2->VAR15)
            {
                VAR2->VAR14 = VAR9 = VAR19;
            }
        }
        if (VAR8->VAR20 && --VAR8->VAR20->VAR21 == 0)
        {
            VAR8->VAR20->VAR22 = 0;
        }
        FUN8(VAR8);
    }
    VAR2->VAR11 = false;
}