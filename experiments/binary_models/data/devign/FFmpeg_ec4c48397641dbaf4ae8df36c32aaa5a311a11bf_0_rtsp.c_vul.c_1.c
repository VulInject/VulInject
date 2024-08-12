static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[VAR4];
    char VAR5[500], VAR6[500];
    int VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    int VAR11;
    AVCodecContext VAR12 = {0};
    struct sockaddr_storage VAR13;
    AVIOContext VAR14;
    socklen_t VAR15 = sizeof(VAR13);
    VAR16 *VAR17 = VAR2->VAR18;
    if (!FUN2())
        return FUN3(VAR19);
    if (!VAR17->VAR20)
    {
        VAR17->VAR20 = FUN4(NULL, NULL);
        if (!VAR17->VAR20)
            return FUN3(VAR21);
    }
    VAR7 = FUN5(&VAR10, VAR2->VAR22, VAR23, &VAR2->VAR24, NULL, VAR17->VAR20);
    if (VAR7)
        goto VAR25;
    while (1)
    {
        VAR7 = FUN6(VAR10, VAR3, sizeof(VAR3));
        if (VAR7 == FUN3(VAR26))
            continue;
        if (VAR7 < 0)
            goto VAR25;
        if (VAR7 < 12)
        {
            FUN7(VAR2, VAR27, "");
            continue;
        }
        if ((VAR3[0] & 0xc0) != 0x80)
        {
            FUN7(VAR2, VAR27, ""
                                      "");
            continue;
        }
        if (FUN8(VAR3[1]))
            continue;
        VAR11 = VAR3[1] & 0x7f;
        break;
    }
    FUN9(FUN10(VAR10), (struct VAR28 *)&VAR13, &VAR15);
    FUN11(VAR10);
    VAR10 = NULL;
    if (FUN12(&VAR12, VAR11))
    {
        FUN7(VAR2, VAR29, ""
                                "",
               VAR11);
        goto VAR25;
    }
    if (VAR12.VAR30 != VAR31)
    {
        FUN7(VAR2, VAR27, ""
                                  ""
                                  "");
    }
    FUN13(NULL, 0, NULL, 0, VAR5, sizeof(VAR5), &VAR8, NULL, 0, VAR2->VAR22);
    snprintf(VAR6, sizeof(VAR6), "", VAR13.VAR32 == VAR33 ? 4 : 6, VAR5, VAR12.VAR30 == VAR31 ? "" : VAR12.VAR30 == VAR34 ? ""
                                                                                                                                                                                                                        : "",
             VAR8, VAR11);
    FUN7(VAR2, VAR35, "", VAR6);
    FUN14(&VAR14, VAR6, strlen(VAR6), 0, NULL, NULL, NULL, NULL);
    VAR2->VAR14 = &VAR14;
    FUN15();
    VAR17->VAR36 = (1 << (VAR31 + 1)) - 1;
    VAR7 = FUN16(VAR2);
    VAR2->VAR14 = NULL;
    return VAR7;
VAR25:
    if (VAR10)
        FUN11(VAR10);
    FUN15();
    return VAR7;
}