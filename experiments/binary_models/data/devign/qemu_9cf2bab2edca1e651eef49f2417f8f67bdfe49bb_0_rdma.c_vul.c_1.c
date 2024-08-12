static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    RDMACapabilities VAR5 = {
        .VAR6 = VAR7,
        .VAR8 = 0,
    };
    struct rdma_conn_param VAR9 = {
        .VAR10 = 2,
        .VAR11 = 5,
        .VAR12 = &VAR5,
        .VAR13 = sizeof(VAR5),
    };
    struct VAR14 *VAR15;
    int VAR16;
    if (VAR2->VAR17)
    {
        FUN2();
        VAR5.VAR8 |= VAR18;
    }
    FUN3(&VAR5);
    VAR16 = FUN4(VAR2->VAR19, &VAR9);
    if (VAR16)
    {
        FUN5("");
        FUN6(VAR4, "");
        goto VAR20;
    }
    VAR16 = FUN7(VAR2->VAR21, &VAR15);
    if (VAR16)
    {
        FUN5("");
        FUN6(VAR4, "");
        FUN8(VAR15);
        goto VAR20;
    }
    if (VAR15->VAR22 != VAR23)
    {
        FUN5("");
        FUN6(VAR4, "");
        FUN8(VAR15);
        goto VAR20;
    }
    VAR2->VAR24 = true;
    memcpy(&VAR5, VAR15->VAR25.VAR26.VAR12, sizeof(VAR5));
    FUN9(&VAR5);
    if (VAR2->VAR17 && !(VAR5.VAR8 & VAR18))
    {
        FUN6(VAR4, ""
                    "");
        VAR2->VAR17 = false;
    }
    FUN10(VAR2->VAR17);
    FUN8(VAR15);
    VAR16 = FUN11(VAR2, VAR27);
    if (VAR16)
    {
        FUN6(VAR4, "");
        goto VAR20;
    }
    VAR2->VAR28 = 1;
    VAR2->VAR29 = 0;
    return 0;
VAR20:
    FUN12(VAR2);
    return -1;
}