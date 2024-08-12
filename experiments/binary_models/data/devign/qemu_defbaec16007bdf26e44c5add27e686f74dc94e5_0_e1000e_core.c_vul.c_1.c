FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    bool VAR5, VAR6, VAR7, VAR8;
    assert(FUN2(VAR2));
    FUN3(VAR4, &VAR5, &VAR6, &VAR7, &VAR8);
    if (VAR5)
    {
        bool VAR9 = FUN4(VAR4)->VAR9;
        FUN5(VAR9, VAR8, VAR2->VAR10[VAR11], FUN6(VAR2->VAR10[VAR11]), FUN7(VAR2->VAR10[VAR11]));
        if (!VAR9 && VAR8 && FUN6(VAR2->VAR10[VAR11]))
        {
            return VAR12;
        }
        if (FUN7(VAR2->VAR10[VAR11]))
        {
            return VAR13;
        }
    }
    else if (VAR6)
    {
        VAR14 *VAR15 = FUN8(VAR4);
        bool VAR16 = VAR2->VAR10[VAR17] & VAR18;
        bool VAR19 = VAR2->VAR10[VAR17] & VAR20;
        FUN9(VAR2->VAR10[VAR17], VAR16, VAR19, VAR8, VAR15->VAR21, VAR15->VAR22, VAR15->VAR23, VAR2->VAR10[VAR11], FUN10(VAR2->VAR10[VAR11]), FUN11(VAR2->VAR10[VAR11]), FUN12(VAR2->VAR10[VAR11]));
        if ((!VAR16 || !VAR15->VAR21) && (!VAR19 || !(VAR15->VAR22 || VAR15->VAR23)))
        {
            if (VAR8 && !VAR15->VAR9 && FUN10(VAR2->VAR10[VAR11]))
            {
                return VAR24;
            }
            if (FUN11(VAR2->VAR10[VAR11]))
            {
                return VAR25;
            }
        }
        if (FUN12(VAR2->VAR10[VAR11]))
        {
            return VAR26;
        }
    }
    return VAR27;
}