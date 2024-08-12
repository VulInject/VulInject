void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    QEMUSnapshotInfo VAR10, *VAR11 = &VAR10, VAR12, *VAR13 = &VAR12;
    int VAR14, VAR15;
    VAR16 *VAR17;
    int VAR18;
    uint32_t VAR19;
    struct _timeb VAR20;
    struct timeval VAR21;
    const char *VAR22 = FUN2(VAR4, "");
    VAR8 = FUN3();
    if (!VAR8)
    {
        FUN4(VAR2, "");
        return;
    }
    FUN5();
    VAR18 = VAR23;
    FUN6(0);
    VAR14 = 0;
    if (VAR22)
    {
        VAR15 = FUN7(VAR8, VAR13, VAR22);
        if (VAR15 >= 0)
        {
            VAR14 = 1;
        }
    }
    memset(VAR11, 0, sizeof(*VAR11));
    if (VAR14)
    {
        FUN8(VAR11->VAR22, sizeof(VAR11->VAR22), VAR13->VAR22);
        FUN8(VAR11->VAR24, sizeof(VAR11->VAR24), VAR13->VAR24);
    }
    else
    {
        if (VAR22)
            FUN8(VAR11->VAR22, sizeof(VAR11->VAR22), VAR22);
    }
    FUN9(&VAR20);
    VAR11->VAR25 = VAR20.VAR26;
    VAR11->VAR27 = VAR20.VAR28 * 1000000;
    FUN10(&VAR21, NULL);
    VAR11->VAR25 = VAR21.VAR29;
    VAR11->VAR27 = VAR21.VAR30 * 1000;
    VAR11->VAR31 = FUN11(VAR32);
    VAR17 = FUN12(VAR8, 1);
    if (!VAR17)
    {
        FUN4(VAR2, "");
        goto VAR33;
    }
    VAR15 = FUN13(VAR17);
    VAR19 = FUN14(VAR17);
    FUN15(VAR17);
    if (VAR15 < 0)
    {
        FUN4(VAR2, "", VAR15);
        goto VAR33;
    }
    FUN16(VAR6, &VAR34, VAR35)
    {
        VAR9 = VAR6->VAR36;
        if (FUN17(VAR9))
        {
            if (VAR14)
            {
                VAR15 = FUN18(VAR9, VAR13->VAR24);
                if (VAR15 < 0)
                {
                    FUN4(VAR2, "", FUN19(VAR9));
                }
            }
            VAR11->VAR19 = (VAR8 == VAR9 ? VAR19 : 0);
            VAR15 = FUN20(VAR9, VAR11);
            if (VAR15 < 0)
            {
                FUN4(VAR2, "", FUN19(VAR9));
            }
        }
    }
VAR33:
    if (VAR18)
        FUN21();
}