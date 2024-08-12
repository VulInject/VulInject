static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    nbd_opt_reply VAR8;
    uint32_t VAR9 = strlen(VAR3);
    uint16_t VAR10;
    int VAR11;
    char *VAR12;
    VAR5->VAR13 = 0;
    FUN2(VAR3);
    VAR12 = FUN3(4 + VAR9 + 2 + 2 * VAR5->VAR14 + 1);
    FUN4(VAR12, VAR9);
    memcpy(VAR12 + 4, VAR3, VAR9);
    FUN5(VAR12 + 4 + VAR9, VAR5->VAR14);
    if (VAR5->VAR14)
    {
        FUN5(VAR12 + 4 + VAR9 + 2, VAR15);
    }
    if (FUN6(VAR2, VAR16, 4 + VAR9 + 2 + 2 * VAR5->VAR14, VAR12, VAR7) < 0)
    {
        return -1;
    }
    while (1)
    {
        if (FUN7(VAR2, VAR16, &VAR8, VAR7) < 0)
        {
            return -1;
        }
        VAR11 = FUN8(VAR2, &VAR8, VAR7);
        if (VAR11 <= 0)
        {
            return VAR11;
        }
        VAR9 = VAR8.VAR17;
        if (VAR8.VAR10 == VAR18)
        {
            if (VAR9)
            {
                FUN9(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            if (!VAR5->VAR13)
            {
                FUN9(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            FUN11();
            return 1;
        }
        if (VAR8.VAR10 != VAR19)
        {
            FUN9(VAR7, "" VAR20 "", VAR8.VAR10, FUN12(VAR8.VAR10), VAR19);
            FUN10(VAR2);
            return -1;
        }
        if (VAR9 < sizeof(VAR10))
        {
            FUN9(VAR7, "" VAR21 "", VAR9);
            FUN10(VAR2);
            return -1;
        }
        if (FUN13(VAR2, &VAR10, sizeof(VAR10), VAR7) < 0)
        {
            FUN14(VAR7, "");
            FUN10(VAR2);
            return -1;
        }
        VAR9 -= sizeof(VAR10);
        FUN15(&VAR10);
        switch (VAR10)
        {
        case VAR22:
            if (VAR9 != sizeof(VAR5->VAR23) + sizeof(VAR5->VAR13))
            {
                FUN9(VAR7, "" VAR21 "", VAR9);
                FUN10(VAR2);
                return -1;
            }
            if (FUN13(VAR2, &VAR5->VAR23, sizeof(VAR5->VAR23), VAR7) < 0)
            {
                FUN14(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            FUN16(&VAR5->VAR23);
            if (FUN13(VAR2, &VAR5->VAR13, sizeof(VAR5->VAR13), VAR7) < 0)
            {
                FUN14(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            FUN15(&VAR5->VAR13);
            FUN17(VAR5->VAR23, VAR5->VAR13);
            break;
        case VAR15:
            if (VAR9 != sizeof(VAR5->VAR24) * 3)
            {
                FUN9(VAR7, "" VAR21 "", VAR9);
                FUN10(VAR2);
                return -1;
            }
            if (FUN13(VAR2, &VAR5->VAR24, sizeof(VAR5->VAR24), VAR7) < 0)
            {
                FUN14(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            FUN18(&VAR5->VAR24);
            if (!FUN19(VAR5->VAR24))
            {
                FUN9(VAR7, "" VAR25 "", VAR5->VAR24);
                FUN10(VAR2);
                return -1;
            }
            if (FUN13(VAR2, &VAR5->VAR26, sizeof(VAR5->VAR26), VAR7) < 0)
            {
                FUN14(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            FUN18(&VAR5->VAR26);
            if (!FUN19(VAR5->VAR26) || VAR5->VAR26 < VAR5->VAR24)
            {
                FUN9(VAR7, "" VAR25 "", VAR5->VAR26);
                FUN10(VAR2);
                return -1;
            }
            if (FUN13(VAR2, &VAR5->VAR27, sizeof(VAR5->VAR27), VAR7) < 0)
            {
                FUN14(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            FUN18(&VAR5->VAR27);
            FUN20(VAR5->VAR24, VAR5->VAR26, VAR5->VAR27);
            break;
        default:
            FUN21(VAR10, FUN22(VAR10));
            if (FUN23(VAR2, VAR9, VAR7) < 0)
            {
                FUN14(VAR7, "");
                FUN10(VAR2);
                return -1;
            }
            break;
        }
    }
}