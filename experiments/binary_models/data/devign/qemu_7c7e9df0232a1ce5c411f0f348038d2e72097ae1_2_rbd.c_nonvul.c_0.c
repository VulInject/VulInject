static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int64_t VAR4 = 0;
    int64_t VAR5;
    int VAR6 = 0;
    char VAR7[VAR8];
    char VAR9[VAR10];
    char VAR11[VAR12];
    char VAR13[VAR14];
    char VAR15[VAR14];
    char *VAR16;
    rados_t VAR17;
    rados_ioctx_t VAR18;
    int VAR19;
    if (FUN2(VAR1, VAR7, sizeof(VAR7), VAR11, sizeof(VAR11), VAR9, sizeof(VAR9), VAR13, sizeof(VAR13)) < 0)
    {
        return -VAR20;
    }
    while (VAR3 && VAR3->VAR9)
    {
        if (!strcmp(VAR3->VAR9, VAR21))
        {
            VAR4 = VAR3->VAR22.VAR23;
        }
        else if (!strcmp(VAR3->VAR9, VAR24))
        {
            if (VAR3->VAR22.VAR23)
            {
                VAR5 = VAR3->VAR22.VAR23;
                if ((VAR5 - 1) & VAR5)
                {
                    FUN3("");
                    return -VAR20;
                }
                if (VAR5 < 4096)
                {
                    FUN3("");
                    return -VAR20;
                }
                VAR6 = FUN4(VAR5) - 1;
            }
        }
        VAR3++;
    }
    VAR16 = FUN5(VAR13, VAR15);
    if (FUN6(&VAR17, VAR16) < 0)
    {
        FUN3("");
        return -VAR25;
    }
    if (strstr(VAR13, "") == NULL)
    {
        if (FUN7(VAR17, NULL) < 0)
        {
            FUN3("");
            FUN8(VAR17);
            return -VAR25;
        }
    }
    if (VAR13[0] != '' && FUN9(VAR17, VAR13) < 0)
    {
        FUN3("");
        FUN8(VAR17);
        return -VAR25;
    }
    if (FUN10(VAR17) < 0)
    {
        FUN3("");
        FUN8(VAR17);
        return -VAR25;
    }
    if (FUN11(VAR17, VAR7, &VAR18) < 0)
    {
        FUN3("", VAR7);
        FUN8(VAR17);
        return -VAR25;
    }
    VAR19 = FUN12(VAR18, VAR9, VAR4, &VAR6);
    FUN13(VAR18);
    FUN8(VAR17);
    return VAR19;
}