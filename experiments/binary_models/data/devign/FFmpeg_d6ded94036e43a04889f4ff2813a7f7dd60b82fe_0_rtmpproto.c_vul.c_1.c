static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    double VAR8;
    char VAR9[64];
    char VAR10[64];
    int VAR11;
    char *VAR12;
    const VAR13 *VAR14 = VAR4->VAR15;
    VAR13 *VAR16 = NULL;
    RTMPPacket VAR17 = {0};
    GetByteContext VAR18;
    int VAR19;
    FUN2(&VAR18, VAR14, VAR4->VAR20);
    if (FUN3(&VAR18, VAR10, sizeof(VAR10), &VAR11))
    {
        FUN4(VAR2, VAR21, "");
        return VAR22;
    }
    VAR19 = FUN5(&VAR18, &VAR8);
    if (VAR19)
        return VAR19;
    VAR19 = FUN6(&VAR18);
    if (VAR19)
        return VAR19;
    if (!strcmp(VAR10, "") || !strcmp(VAR10, ""))
    {
        VAR19 = FUN3(&VAR18, VAR9, sizeof(VAR9), &VAR11);
        if (VAR19)
        {
            if (VAR19 == FUN7(VAR23))
                FUN4(VAR2, VAR21, "");
            else
                FUN4(VAR2, VAR21, "");
            return VAR19;
        }
        if (VAR2->VAR9)
        {
            VAR12 = strrchr(VAR2->VAR9, '');
            if (!VAR12)
            {
                FUN4(VAR2, VAR24, "", VAR2->VAR9);
                VAR12 = VAR2->VAR9;
            }
            VAR12++;
            if (strcmp(VAR12, VAR9))
                FUN4(VAR2, VAR24, ""
                                          "",
                       VAR9, VAR12);
        }
        VAR6->VAR25 = VAR26;
    }
    if (!strcmp(VAR10, ""))
    {
        if ((VAR19 = FUN8(&VAR17, VAR27, VAR28, 0, VAR29)) < 0)
        {
            FUN4(VAR2, VAR21, "");
            return VAR19;
        }
        VAR16 = VAR17.VAR15;
        FUN9(&VAR16, "");
    }
    else if (!strcmp(VAR10, ""))
    {
        VAR19 = FUN10(VAR2);
        if (VAR19 < 0)
            return VAR19;
        return FUN11(VAR2, VAR4, "", VAR9);
    }
    else if (!strcmp(VAR10, ""))
    {
        VAR19 = FUN10(VAR2);
        if (VAR19 < 0)
            return VAR19;
        VAR6->VAR25 = VAR30;
        return FUN11(VAR2, VAR4, "", VAR9);
    }
    else
    {
        if ((VAR19 = FUN8(&VAR17, VAR27, VAR28, 0, VAR29)) < 0)
        {
            FUN4(VAR2, VAR21, "");
            return VAR19;
        }
        VAR16 = VAR17.VAR15;
        FUN9(&VAR16, "");
        FUN12(&VAR16, VAR8);
        FUN13(&VAR16);
        if (!strcmp(VAR10, ""))
        {
            VAR6->VAR31++;
            if (VAR6->VAR31 == 0 || VAR6->VAR31 == 2)
                VAR6->VAR31++;
            FUN12(&VAR16, VAR6->VAR31);
        }
    }
    VAR17.VAR20 = VAR16 - VAR17.VAR15;
    VAR19 = FUN14(VAR6->VAR32, &VAR17, VAR6->VAR33, &VAR6->VAR34[1], &VAR6->VAR35[1]);
    FUN15(&VAR17);
    return VAR19;
}