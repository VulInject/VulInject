static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    VAR7 *VAR8, *VAR9;
    char *VAR10, *VAR11;
    if (FUN2(VAR3, &VAR6))
        return -1;
    VAR9 = FUN3(VAR6, "", NULL, VAR12);
    if (!VAR9 || !VAR9->VAR13)
    {
        return -1;
    }
    if ((VAR8 = FUN3(VAR6, "", NULL, 0)) && VAR8->VAR13)
    {
        struct tm VAR14 = {0};
        if (!FUN4(VAR8->VAR13, &VAR14))
        {
            VAR7 *VAR15;
            if (FUN5(&VAR14) < FUN6() / 1000000)
            {
                return -1;
            }
            VAR15 = FUN3(*VAR5, VAR9->VAR16, NULL, 0);
            if (VAR15 && VAR15->VAR13)
            {
                VAR4 *VAR17 = NULL;
                if (!FUN2(VAR3, &VAR17))
                {
                    VAR15 = FUN3(VAR17, "", NULL, 0);
                    if (VAR15 && VAR15->VAR13)
                    {
                        struct tm VAR18 = {0};
                        if (!FUN4(VAR8->VAR13, &VAR18))
                        {
                            if (FUN5(&VAR14) < FUN5(&VAR18))
                            {
                                FUN7(&VAR17);
                                return -1;
                            }
                        }
                    }
                }
                FUN7(&VAR17);
            }
        }
    }
    if (!(VAR10 = strchr(VAR3, '')))
        return FUN8(VAR19);
    if (!(VAR11 = FUN9(VAR3, VAR10 - VAR3)))
        return FUN8(VAR20);
    FUN10(VAR5, VAR11, VAR10, VAR21);
    return 0;