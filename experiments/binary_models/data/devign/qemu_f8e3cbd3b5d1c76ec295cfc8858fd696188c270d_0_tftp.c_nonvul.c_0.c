static void FUN1(struct VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR5;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10, *VAR11;
    VAR6 = FUN2(VAR2);
    if (VAR6 < 0)
    {
        return;
    }
    VAR5 = &VAR12[VAR6];
    if (!VAR13)
    {
        FUN3(VAR5, 2, "", VAR2);
        return;
    }
    VAR10 = VAR2->VAR14.VAR15;
    VAR11 = VAR5->VAR16;
    VAR8 = VAR3 - ((VAR17 *)&VAR2->VAR14.VAR15[0] - (VAR17 *)VAR2);
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        if (VAR7 < VAR18)
        {
            VAR11[VAR7] = VAR10[VAR7];
        }
        else
        {
            return;
        }
        if (VAR10[VAR7] == '')
        {
            break;
        }
    }
    if (VAR7 >= VAR8)
    {
        return;
    }
    VAR7++;
    if ((VAR8 - VAR7) < 6)
    {
        return;
    }
    if (memcmp(&VAR10[VAR7], "", 6) != 0)
    {
        FUN3(VAR5, 4, "", VAR2);
        return;
    }
    VAR7 += 6;
    if ((VAR5->VAR16[0] != '') || (VAR5->VAR16[strlen((char *)VAR5->VAR16) - 1] == '') || strstr((char *)VAR5->VAR16, ""))
    {
        FUN3(VAR5, 2, "", VAR2);
        return;
    }
    if (FUN4(VAR5, 0, VAR5->VAR16, 0) < 0)
    {
        FUN3(VAR5, 1, "", VAR2);
        return;
    }
    if (VAR10[VAR8 - 1] != 0)
    {
        FUN3(VAR5, 2, "", VAR2);
        return;
    }
    while (VAR7 < VAR8)
    {
        const char *VAR19, *VAR20;
        VAR19 = (char *)VAR10 + VAR7;
        VAR7 += strlen(VAR19) + 1;
        if (VAR7 >= VAR8)
        {
            FUN3(VAR5, 2, "", VAR2);
            return;
        }
        VAR20 = (char *)VAR10 + VAR7;
        VAR7 += strlen(VAR20) + 1;
        if (strcmp(VAR19, "") == 0)
        {
            int VAR21 = FUN5(VAR20);
            struct stat VAR22;
            if (VAR21 == 0)
            {
                char VAR23[1024];
                int VAR24;
                VAR24 = snprintf(VAR23, sizeof(VAR23), "", VAR13, VAR5->VAR16);
                if (FUN6(VAR23, &VAR22) == 0)
                    VAR21 = VAR22.VAR25;
                else
                {
                    FUN3(VAR5, 1, "", VAR2);
                    return;
                }
            }
            FUN7(VAR5, "", VAR21, VAR2);
        }
    }
    FUN8(VAR5, 1, VAR2);
}