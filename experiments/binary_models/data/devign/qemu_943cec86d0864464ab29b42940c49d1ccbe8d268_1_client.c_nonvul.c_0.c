static int FUN1(VAR1 *VAR2, char **VAR3, VAR4 **VAR5)
{
    uint64_t VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    uint32_t VAR9;
    uint32_t VAR10;
    int VAR11;
    *VAR3 = NULL;
    if (FUN2(VAR2, &VAR6, sizeof(VAR6)) != sizeof(VAR6))
    {
        FUN3(VAR5, "");
        return -1;
    }
    VAR6 = FUN4(VAR6);
    if (VAR6 != VAR12)
    {
        FUN3(VAR5, "");
        return -1;
    }
    if (FUN2(VAR2, &VAR7, sizeof(VAR7)) != sizeof(VAR7))
    {
        FUN3(VAR5, "");
        return -1;
    }
    VAR7 = FUN5(VAR7);
    if (VAR7 != VAR13)
    {
        FUN3(VAR5, "" VAR14 "", VAR7, VAR13);
        return -1;
    }
    if (FUN2(VAR2, &VAR8, sizeof(VAR8)) != sizeof(VAR8))
    {
        FUN3(VAR5, "");
        return -1;
    }
    VAR8 = FUN5(VAR8);
    VAR11 = FUN6(VAR2, VAR7, VAR8, VAR5);
    if (VAR11 <= 0)
    {
        return VAR11;
    }
    if (FUN2(VAR2, &VAR9, sizeof(VAR9)) != sizeof(VAR9))
    {
        FUN3(VAR5, "");
        return -1;
    }
    VAR9 = FUN5(VAR9);
    if (VAR8 == VAR15)
    {
        if (VAR9 != 0)
        {
            FUN3(VAR5, "");
            return -1;
        }
    }
    else if (VAR8 == VAR16)
    {
        if (VAR9 < sizeof(VAR10) || VAR9 > VAR17)
        {
            FUN3(VAR5, "");
            return -1;
        }
        if (FUN2(VAR2, &VAR10, sizeof(VAR10)) != sizeof(VAR10))
        {
            FUN3(VAR5, "");
            return -1;
        }
        VAR10 = FUN5(VAR10);
        VAR9 -= sizeof(VAR10);
        if (VAR9 < VAR10)
        {
            FUN3(VAR5, "");
            return -1;
        }
        if (VAR10 > VAR18)
        {
            FUN3(VAR5, "" VAR19, VAR10);
            return -1;
        }
        *VAR3 = FUN7(char, VAR10 + 1);
        if (FUN2(VAR2, *VAR3, VAR10) != VAR10)
        {
            FUN3(VAR5, "");
            FUN8(*VAR3);
            *VAR3 = NULL;
            return -1;
        }
        (*VAR3)[VAR10] = '';
        VAR9 -= VAR10;
        if (VAR9)
        {
            char *VAR20 = FUN9(VAR9 + 1);
            if (FUN2(VAR2, VAR20, VAR9) != VAR9)
            {
                FUN3(VAR5, "");
                FUN8(*VAR3);
                FUN8(VAR20);
                *VAR3 = NULL;
                return -1;
            }
            VAR20[VAR9] = '';
            FUN10("", VAR20);
            FUN8(VAR20);
        }
    }
    else
    {
        FUN3(VAR5, "" VAR14 "", VAR8, VAR16);
        return -1;
    }
    return 1;
}