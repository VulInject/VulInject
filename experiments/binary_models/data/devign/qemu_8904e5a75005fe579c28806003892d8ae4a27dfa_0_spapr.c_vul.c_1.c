static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    bool VAR6 = !!VAR2->VAR7;
    int VAR8 = FUN2();
    int VAR9;
    if (!FUN3() && (VAR10 > 1))
    {
        FUN4(&VAR5, ""
                               "");
        goto VAR11;
    }
    if (!FUN5(VAR10))
    {
        FUN4(&VAR5, ""
                               "",
                   VAR10);
        goto VAR11;
    }
    if (VAR6)
    {
        if (VAR2->VAR7 < VAR10)
        {
            FUN4(&VAR5, ""
                                   "",
                       VAR2->VAR7, VAR10);
            goto VAR11;
        }
    }
    else
    {
        VAR2->VAR7 = FUN6(VAR8, VAR10);
    }
    if (FUN3() && (VAR2->VAR7 != VAR8))
    {
        VAR9 = FUN7(VAR2->VAR7);
        if (VAR9)
        {
            FUN4(&VAR5, "", VAR2->VAR7, VAR9);
            if ((VAR8 >= VAR10) && ((VAR2->VAR7 % VAR8) == 0))
            {
                FUN8(VAR5);
                VAR5 = NULL;
                goto VAR11;
            }
            else
            {
                if (!VAR6)
                {
                    FUN9(&VAR5, ""
                                                  ""
                                                  "",
                                      VAR10, VAR8, VAR2->VAR7);
                }
                FUN10(&VAR5);
                goto VAR11;
            }
        }
    }
VAR11:
    FUN11(VAR4, VAR5);
}