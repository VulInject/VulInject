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
    }
    if ((VAR6 & VAR17) && !VAR4->VAR18)
    {
        FUN4(NULL, VAR15, "", VAR4->VAR16);
        return FUN3(VAR12);
    }
    VAR9 = FUN5(sizeof(VAR1) + strlen(VAR5) + 1);
    if (!VAR9)
    {
        VAR10 = FUN3(VAR19);
        goto VAR20;
    }
    VAR9->VAR21 = &VAR22;
    VAR9->VAR5 = (char *)&VAR9[1];
    strcpy(VAR9->VAR5, VAR5);
    VAR9->VAR23 = VAR4;
    VAR9->VAR6 = VAR6;
    VAR9->VAR24 = 0;
    VAR9->VAR25 = 0;
    if (VAR4->VAR26)
    {
        VAR9->VAR27 = FUN5(VAR4->VAR26);
        if (!VAR9->VAR27)
        {
            VAR10 = FUN3(VAR19);
            goto VAR20;
        }
        if (VAR4->VAR28)
        {
            int VAR29 = strlen(VAR4->VAR16);
            char *VAR30 = strchr(VAR9->VAR5, '');
            *(const VAR31 **)VAR9->VAR27 = VAR4->VAR28;
            FUN6(VAR9->VAR27);
            if (!FUN7(VAR4->VAR16, VAR9->VAR5, VAR29) && VAR9->VAR5 + VAR29 == VAR30)
            {
                int VAR32 = 0;
                char *VAR33 = VAR30;
                char VAR34 = *++VAR33;
                char *VAR35, *VAR36;
                VAR33++;
                while (VAR32 >= 0 && (VAR35 = strchr(VAR33, VAR34)) && VAR33 < VAR35 && (VAR36 = strchr(VAR35 + 1, VAR34)))
                {
                    *VAR36 = *VAR35 = 0;
                    VAR32 = FUN8(VAR9->VAR27, VAR33, VAR35 + 1, 0);
                    if (VAR32 == VAR37)
                        FUN4(VAR9, VAR15, "", VAR33);
                    *VAR36 = *VAR35 = VAR34;
                    VAR33 = VAR36 + 1;
                }
                if (VAR32 < 0 || VAR33 != VAR35)
                {
                    FUN4(VAR9, VAR15, "", VAR30);
                    FUN9(&VAR9->VAR27);
                    FUN9(&VAR9);
                    VAR10 = FUN3(VAR38);
                    goto VAR20;
                }
                memmove(VAR30, VAR35 + 1, strlen(VAR35));
            }
        }
    }
    if (VAR8)
        VAR9->VAR39 = *VAR8;
    *VAR2 = VAR9;
    return 0;
VAR20:
    *VAR2 = NULL;
    if (VAR9)
        FUN9(&VAR9->VAR27);
    FUN9(&VAR9);
    if (VAR4->VAR6 & VAR11)
        FUN10();
    return VAR10;
}