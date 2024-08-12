bool FUN1(void)
{
    VAR1 *VAR2;
    fd_set VAR3, VAR4;
    int VAR5 = -1;
    int VAR6;
    bool VAR7;
    if (FUN2())
    {
        return true;
    }
    VAR8++;
    FUN3(&VAR3);
    FUN3(&VAR4);
    VAR7 = false;
    FUN4(VAR2, &VAR9, VAR2)
    {
        if (VAR2->VAR10)
        {
            if (VAR2->FUN5(VAR2->VAR11) == 0)
            {
                continue;
            }
            VAR7 = true;
        }
        if (!VAR2->VAR12 && VAR2->VAR13)
        {
            FUN6(VAR2->VAR14, &VAR3);
            VAR5 = FUN7(VAR5, VAR2->VAR14 + 1);
        }
        if (!VAR2->VAR12 && VAR2->VAR15)
        {
            FUN6(VAR2->VAR14, &VAR4);
            VAR5 = FUN7(VAR5, VAR2->VAR14 + 1);
        }
    }
    VAR8--;
    if (!VAR7)
    {
        return false;
    }
    VAR6 = FUN8(VAR5, &VAR3, &VAR4, NULL, NULL);
    if (VAR6 > 0)
    {
        VAR2 = FUN9(&VAR9);
        while (VAR2)
        {
            VAR1 *VAR16;
            VAR8++;
            if (!VAR2->VAR12 && FUN10(VAR2->VAR14, &VAR3) && VAR2->VAR13)
            {
                VAR2->FUN11(VAR2->VAR11);
            }
            if (!VAR2->VAR12 && FUN10(VAR2->VAR14, &VAR4) && VAR2->VAR15)
            {
                VAR2->FUN12(VAR2->VAR11);
            }
            VAR16 = VAR2;
            VAR2 = FUN13(VAR2, VAR2);
            VAR8--;
            if (!VAR8 && VAR16->VAR12)
            {
                FUN14(VAR16, VAR2);
                FUN15(VAR16);
            }
        }
    }
    return true;
}