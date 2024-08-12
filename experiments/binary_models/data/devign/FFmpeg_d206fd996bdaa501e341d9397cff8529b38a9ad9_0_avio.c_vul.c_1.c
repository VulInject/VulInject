static int FUN1(VAR1 **VAR2, struct VAR3 *VAR4, const char *VAR5, int VAR6, const VAR7 *VAR8)
{
    VAR1 *VAR9;
    int VAR10;
    if (VAR4->VAR6 & VAR11 && !FUN2())
        return FUN3(VAR12);
    if ((VAR6 & VAR13) && !VAR4->VAR14)
    {
        FUN4(NULL, VAR15, "", VAR4->VAR16);
        return FUN3(VAR12);
        if ((VAR6 & VAR17) && !VAR4->VAR18)
        {
            FUN4(NULL, VAR15, "", VAR4->VAR16);
            return FUN3(VAR12);
            VAR9 = FUN5(sizeof(VAR1) + strlen(VAR5) + 1);
            if (!VAR9)
            {
                VAR9->VAR19 = &VAR20;
                VAR9->VAR5 = (char *)&VAR9[1];
                strcpy(VAR9->VAR5, VAR5);
                VAR9->VAR21 = VAR4;
                VAR9->VAR6 = VAR6;
                VAR9->VAR22 = 0;
                VAR9->VAR23 = 0;
                if (VAR4->VAR24)
                {
                    VAR9->VAR25 = FUN5(VAR4->VAR24);
                    if (VAR4->VAR26)
                    {
                        int VAR27 = strlen(VAR4->VAR16);
                        char *VAR28 = strchr(VAR9->VAR5, '');
                        *(const VAR29 **)VAR9->VAR25 = VAR4->VAR26;
                        FUN6(VAR9->VAR25);
                        if (!FUN7(VAR4->VAR16, VAR9->VAR5, VAR27) && VAR9->VAR5 + VAR27 == VAR28)
                        {
                            int VAR30 = 0;
                            char *VAR31 = VAR28;
                            char VAR32 = *++VAR31;
                            char *VAR33, *VAR34;
                            VAR31++;
                            while (VAR30 >= 0 && (VAR33 = strchr(VAR31, VAR32)) && VAR31 < VAR33 && (VAR34 = strchr(VAR33 + 1, VAR32)))
                            {
                                *VAR34 = *VAR33 = 0;
                                VAR30 = FUN8(VAR9->VAR25, VAR31, VAR33 + 1, 0);
                                if (VAR30 == VAR35)
                                    FUN4(VAR9, VAR15, "", VAR31);
                                *VAR34 = *VAR33 = VAR32;
                                VAR31 = VAR34 + 1;
                                if (VAR30 < 0 || VAR31 != VAR33)
                                {
                                    FUN4(VAR9, VAR15, "", VAR28);
                                    FUN9(&VAR9->VAR25);
                                    FUN9(&VAR9);
                                    VAR10 = FUN3(VAR36);
                                    memmove(VAR28, VAR33 + 1, strlen(VAR33));
                                    if (VAR8)
                                        VAR9->VAR37 = *VAR8;
                                    *VAR2 = VAR9;
                                    return 0;
                                VAR38:
                                    *VAR2 = NULL;
                                    if (VAR9)
                                        FUN9(&VAR9->VAR25);
                                    FUN9(&VAR9);
                                    if (VAR4->VAR6 & VAR11)
                                        FUN10();
                                    return VAR10;