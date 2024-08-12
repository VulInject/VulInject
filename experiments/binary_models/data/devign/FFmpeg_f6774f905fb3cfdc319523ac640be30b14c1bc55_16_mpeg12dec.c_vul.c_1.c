static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10;
    if (!VAR6->VAR11 || !VAR9->VAR12)
        return 0;
    if (VAR9->VAR2->VAR13)
    {
        if (VAR9->VAR2->VAR13->FUN2(VAR9->VAR2) < 0)
            FUN3(VAR2, VAR14, "");
    }
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR15 && VAR9->VAR2->VAR16) FUN4(VAR9);
    FF_ENABLE_DEPRECATION_WARNINGS if (!VAR9->VAR17)
    {
        FUN5(&VAR9->VAR18);
        FUN6(VAR9);
        if (VAR9->VAR19 == VAR20 || VAR9->VAR21)
        {
            int VAR22 = FUN7(VAR4, &VAR9->VAR12->VAR23);
            if (VAR22 < 0)
                return VAR22;
            FUN8(VAR9, VAR9->VAR12);
        }
        else
        {
            if (VAR2->VAR24 & VAR25)
                VAR9->VAR26++;
            if (VAR9->VAR27 != NULL)
            {
                int VAR22 = FUN7(VAR4, &VAR9->VAR27->VAR23);
                if (VAR22 < 0)
                    return VAR22;
                FUN8(VAR9, VAR9->VAR27);
            }
        }
        return 1;
    }
    else { return 0; }
}