void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    if (!VAR4)
    {
        return;
    }
    if (VAR2->VAR7)
    {
        FUN1(VAR2->VAR7->VAR2);
    }
    if (VAR4->VAR8)
    {
        VAR2->VAR9[0] = '';
        if (VAR2->VAR10)
        {
            FUN2(VAR2->VAR10);
            VAR2->VAR10 = NULL;
        }
        VAR6 = FUN3();
        FUN4(VAR6, VAR2);
        VAR4->FUN1(VAR2, VAR6);
        FUN2(VAR6);
    }
    else if (VAR2->VAR7)
    {
        bool VAR11;
        VAR2->VAR9[0] = '';
        if (VAR2->VAR10)
        {
            FUN2(VAR2->VAR10);
            VAR2->VAR10 = NULL;
        }
        VAR6 = FUN3();
        VAR11 = FUN4(VAR6, VAR2);
        if (VAR2->VAR7->VAR2->VAR9[0] && !VAR11)
        {
            strcpy(VAR2->VAR9, VAR2->VAR7->VAR2->VAR9);
        }
        if (VAR2->VAR7->VAR2->VAR10)
        {
            FUN5(VAR6, "", FUN6(FUN7(VAR4->VAR12)));
            FUN8(VAR2->VAR7->VAR2->VAR10);
            FUN5(VAR6, "", FUN6(VAR2->VAR7->VAR2->VAR10));
            VAR2->VAR10 = VAR6;
        }
        else
        {
            FUN2(VAR6);
        }
    }
    else if (!VAR2->VAR10 && FUN9(VAR2->VAR13))
    {
        VAR6 = FUN3();
        FUN4(VAR6, VAR2);
        FUN5(VAR6, "", FUN6(FUN7(VAR4->VAR12)));
        if (VAR2->VAR9[0])
        {
            FUN5(VAR6, "", FUN6(FUN7(VAR2->VAR9)));
        }
        VAR2->VAR10 = VAR6;
    }
    if (VAR2->VAR9[0])
    {
        FUN10(VAR2->VAR14, sizeof(VAR2->VAR14), VAR2->VAR9);
    }
    else if (VAR2->VAR10)
    {
        VAR15 *VAR16 = FUN11(FUN6(VAR2->VAR10));
        snprintf(VAR2->VAR14, sizeof(VAR2->VAR14), "", FUN12(VAR16));
        FUN2(VAR16);
    }
}