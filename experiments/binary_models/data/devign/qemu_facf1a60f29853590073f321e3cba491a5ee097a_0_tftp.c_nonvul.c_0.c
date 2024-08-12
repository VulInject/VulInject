static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    struct VAR6 *VAR7;
    int VAR8, VAR9;
    size_t VAR10;
    char *VAR11;
    VAR8 = FUN2(VAR2, VAR4);
    if (VAR8 >= 0)
    {
        FUN3(&VAR2->VAR12[VAR8]);
    }
    VAR8 = FUN4(VAR2, VAR4);
    if (VAR8 < 0)
    {
        return;
    }
    VAR7 = &VAR2->VAR12[VAR8];
    if (!VAR2->VAR13)
    {
        FUN5(VAR7, 2, "", VAR4);
        return;
    }
    VAR9 = 0;
    VAR5 -= ((VAR14 *)&VAR4->VAR15.VAR16[0] - (VAR14 *)VAR4);
    VAR10 = strlen(VAR2->VAR13);
    VAR7->VAR17 = FUN6(VAR10 + VAR18 + 2);
    memcpy(VAR7->VAR17, VAR2->VAR13, VAR10);
    VAR7->VAR17[VAR10] = '';
    VAR11 = VAR7->VAR17 + VAR10 + 1;
    while (1)
    {
        if (VAR9 >= VAR18 || VAR9 >= VAR5)
        {
            FUN5(VAR7, 2, "", VAR4);
            return;
        }
        VAR11[VAR9] = (char)VAR4->VAR15.VAR16[VAR9];
        if (VAR11[VAR9++] == '')
        {
            break;
        }
    }
    if ((VAR5 - VAR9) < 6)
    {
        FUN5(VAR7, 2, "", VAR4);
        return;
    }
    if (FUN7((const char *)&VAR4->VAR15.VAR16[VAR9], "") != 0)
    {
        FUN5(VAR7, 4, "", VAR4);
        return;
    }
    VAR9 += 6;
    if (!FUN8(VAR11, "", 3) || VAR11[strlen(VAR11) - 1] == '' || strstr(VAR11, ""))
    {
        FUN5(VAR7, 2, "", VAR4);
        return;
    }
    if (FUN9(VAR7, 0, NULL, 0) < 0)
    {
        FUN5(VAR7, 1, "", VAR4);
        return;
    }
    if (VAR4->VAR15.VAR16[VAR5 - 1] != 0)
    {
        FUN5(VAR7, 2, "", VAR4);
        return;
    }
    while (VAR9 < VAR5)
    {
        const char *VAR19, *VAR20;
        VAR19 = (const char *)&VAR4->VAR15.VAR16[VAR9];
        VAR9 += strlen(VAR19) + 1;
        if (VAR9 >= VAR5)
        {
            FUN5(VAR7, 2, "", VAR4);
            return;
        }
        VAR20 = (const char *)&VAR4->VAR15.VAR16[VAR9];
        VAR9 += strlen(VAR20) + 1;
        if (FUN7(VAR19, "") == 0)
        {
            int VAR21 = FUN10(VAR20);
            struct stat VAR22;
            if (VAR21 == 0)
            {
                if (FUN11(VAR7->VAR17, &VAR22) == 0)
                    VAR21 = VAR22.VAR23;
                else
                {
                    FUN5(VAR7, 1, "", VAR4);
                    return;
                }
            }
            FUN12(VAR7, "", VAR21, VAR4);
            return;
        }
    }
    FUN13(VAR7, 1, VAR4);
}