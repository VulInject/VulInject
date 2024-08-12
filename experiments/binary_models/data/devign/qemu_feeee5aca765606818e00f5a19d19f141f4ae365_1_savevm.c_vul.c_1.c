void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    QEMUSnapshotInfo VAR10, *VAR11 = &VAR10, VAR12, *VAR13 = &VAR12;
    int VAR14;
    VAR15 *VAR16;
    int VAR17;
    uint32_t VAR18;
    struct _timeb VAR19;
    struct timeval VAR20;
    const char *VAR21 = FUN2(VAR4, "");
    VAR8 = FUN3();
    if (!VAR8)
    {
        FUN4(VAR2, "");
        return;
    }
    FUN5();
    VAR17 = VAR22;
    FUN6(0);
    memset(VAR11, 0, sizeof(*VAR11));
    if (VAR21)
    {
        VAR14 = FUN7(VAR8, VAR13, VAR21);
        if (VAR14 >= 0)
        {
            FUN8(VAR11->VAR21, sizeof(VAR11->VAR21), VAR13->VAR21);
            FUN8(VAR11->VAR23, sizeof(VAR11->VAR23), VAR13->VAR23);
        }
        else
        {
            FUN8(VAR11->VAR21, sizeof(VAR11->VAR21), VAR21);
        }
    }
    FUN9(&VAR19);
    VAR11->VAR24 = VAR19.VAR25;
    VAR11->VAR26 = VAR19.VAR27 * 1000000;
    FUN10(&VAR20, NULL);
    VAR11->VAR24 = VAR20.VAR28;
    VAR11->VAR26 = VAR20.VAR29 * 1000;
    VAR11->VAR30 = FUN11(VAR31);
    if (VAR21 && FUN12(VAR2, VAR21) < 0)
    {
        goto VAR32;
    }
    VAR16 = FUN13(VAR8, 1);
    if (!VAR16)
    {
        FUN4(VAR2, "");
        goto VAR32;
    }
    VAR14 = FUN14(VAR2, VAR16);
    VAR18 = FUN15(VAR16);
    FUN16(VAR16);
    if (VAR14 < 0)
    {
        FUN4(VAR2, "", VAR14);
        goto VAR32;
    }
    FUN17(VAR6, &VAR33, VAR34)
    {
        VAR9 = VAR6->VAR35;
        if (FUN18(VAR9))
        {
            VAR11->VAR18 = (VAR8 == VAR9 ? VAR18 : 0);
            VAR14 = FUN19(VAR9, VAR11);
            if (VAR14 < 0)
            {
                FUN4(VAR2, "", FUN20(VAR9));
            }
        }
    }
VAR32:
    if (VAR17)
        FUN21();
}