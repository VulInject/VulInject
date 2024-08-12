static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char VAR5[256];
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    VAR6 *VAR10 = VAR4->VAR8->VAR9;
    if (VAR10->VAR11 && FUN2(VAR10->VAR11) != VAR10->VAR12)
    {
        FUN3(VAR5, sizeof(VAR5), VAR10->VAR12, VAR10->VAR11);
        FUN4(NULL, VAR13, "", VAR5);
        VAR10->VAR11 = 0;
    }
    if (!VAR10->VAR11)
    {
        if (VAR7->VAR11 && VAR10->VAR12 == VAR7->VAR12)
        {
            VAR10->VAR11 = VAR7->VAR11;
        }
        else
        {
            VAR10->VAR11 = FUN5(VAR10->VAR12);
            if (!VAR10->VAR11)
            {
                FUN4(NULL, VAR14, ""
                                           "",
                       VAR4->VAR15, VAR4->VAR8->VAR16);
                FUN6(1);
            }
        }
        FUN3(VAR5, sizeof(VAR5), VAR10->VAR12, VAR10->VAR11);
        FUN4(NULL, VAR17, ""
                                     "",
               VAR4->VAR15, VAR4->VAR8->VAR16, VAR5);
    }
    if (!VAR7->VAR11)
    {
        if (VAR10->VAR12 == VAR7->VAR12)
        {
            VAR7->VAR11 = VAR10->VAR11;
            return;
        }
        else
        {
            VAR7->VAR11 = FUN5(VAR7->VAR12);
        }
        if (!VAR7->VAR11)
        {
            FUN4(NULL, VAR14, ""
                                       "",
                   VAR2->VAR15, VAR2->VAR8->VAR16);
            FUN6(1);
        }
        FUN3(VAR5, sizeof(VAR5), VAR7->VAR12, VAR7->VAR11);
        FUN4(NULL, VAR17, ""
                                     "",
               VAR2->VAR15, VAR2->VAR8->VAR16, VAR5);
    }
}