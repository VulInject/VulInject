FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    char *VAR5 = NULL, *VAR6 = NULL, *VAR7 = NULL, *VAR8 = NULL, *VAR9 = NULL;
    int VAR10;
    int VAR11 = -1;
    FUN2(VAR2, VAR2->VAR12.VAR13 ? VAR2->VAR12.VAR13 : "");
    if (VAR2->VAR12.VAR14 == VAR15)
    {
        if (FUN3(&VAR2->VAR12, VAR16, true, &VAR5, VAR4) < 0 || FUN3(&VAR2->VAR12, VAR17, false, &VAR6, VAR4) < 0 || FUN3(&VAR2->VAR12, VAR18, true, &VAR7, VAR4) < 0 || FUN3(&VAR2->VAR12, VAR19, true, &VAR8, VAR4) < 0 || FUN3(&VAR2->VAR12, VAR20, false, &VAR9, VAR4) < 0)
        {
        }
        else
        {
            if (FUN3(&VAR2->VAR12, VAR16, true, &VAR5, VAR4) < 0 || FUN3(&VAR2->VAR12, VAR21, false, &VAR7, VAR4) < 0 || FUN3(&VAR2->VAR12, VAR22, false, &VAR8, VAR4) < 0)
            {
                VAR10 = FUN4(&VAR2->VAR23);
                if (VAR10 < 0)
                {
                    FUN5(VAR4, "", FUN6(VAR10));
                    VAR10 = FUN7(VAR2->VAR23, VAR5, VAR24);
                    if (VAR10 < 0)
                    {
                        FUN5(VAR4, "", VAR5, FUN6(VAR10));
                        if (VAR7 != NULL && VAR8 != NULL)
                        {
                            VAR10 = FUN8(VAR2->VAR23, VAR7, VAR8, VAR24);
                            if (VAR10 < 0)
                            {
                                FUN5(VAR4, "", VAR7, VAR8, FUN6(VAR10));
                                if (VAR6 != NULL)
                                {
                                    VAR10 = FUN9(VAR2->VAR23, VAR6, VAR24);
                                    if (VAR10 < 0)
                                    {
                                        FUN5(VAR4, "", VAR6, FUN6(VAR10));
                                        if (VAR2->VAR12.VAR14 == VAR15)
                                        {
                                            if (FUN10(&VAR2->VAR12, VAR9, &VAR2->VAR12.VAR25, VAR4) < 0)
                                            {
                                                FUN11(VAR2->VAR23, VAR2->VAR12.VAR25);
                                                VAR11 = 0;
                                            VAR26:
                                                FUN12(VAR5);
                                                FUN12(VAR6);
                                                FUN12(VAR7);
                                                FUN12(VAR8);
                                                FUN12(VAR9);
                                                return VAR11