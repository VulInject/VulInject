static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR1 *VAR5;
    char *VAR6, VAR7[VAR8], *VAR9;
    ssize_t VAR10;
    struct stat VAR11;
    int VAR12;
    int VAR13;
    if (VAR2->VAR14)
    {
        FUN2(VAR2->VAR15);
        VAR2->VAR15 = FUN3(FUN4(VAR2->VAR14));
    }
    else
    {
        if (!VAR2->VAR15 || strchr(VAR2->VAR15, ''))
        {
            return -VAR16;
        }
        VAR2->VAR14 = FUN5("", VAR2->VAR15);
    }
    if (FUN6(VAR2->VAR14, &VAR11) < 0)
    {
        FUN7("", VAR2->VAR14);
        return -VAR17;
    }
    VAR6 = FUN5("", VAR2->VAR14);
    VAR10 = readlink(VAR6, VAR7, sizeof(VAR7));
    FUN2(VAR6);
    if (VAR10 < 0 || VAR10 >= sizeof(VAR7))
    {
        FUN7("");
        return VAR10 < 0 ? -VAR17 : -VAR18;
    }
    VAR7[VAR10] = 0;
    VAR9 = FUN4(VAR7);
    if (sscanf(VAR9, "", &VAR12) != 1)
    {
        FUN7("", VAR7);
        return -VAR17;
    }
    FUN8(VAR2->VAR15, VAR12);
    VAR4 = FUN9(VAR12, &VAR19);
    if (!VAR4)
    {
        FUN7("", VAR12);
        return -VAR20;
    }
    FUN10(VAR5, &VAR4->VAR21, VAR22)
    {
        if (strcmp(VAR5->VAR15, VAR2->VAR15) == 0)
        {
            FUN7("", VAR2->VAR15);
            FUN11(VAR4);
            return -VAR23;
        }
    }
    VAR13 = FUN12(VAR4, VAR2->VAR15, VAR2);
    if (VAR13)
    {
        FUN7("", VAR2->VAR15);
        FUN11(VAR4);
        return VAR13;
    }
    VAR13 = FUN13(VAR2);
    if (VAR13)
    {
        FUN7("", VAR2->VAR15);
        FUN11(VAR4);
    }
    return VAR13;
}