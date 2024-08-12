void FUN1(const char *VAR1)
{
    VAR2 *VAR3, *VAR4;
    QEMUSnapshotInfo VAR5, *VAR6 = &VAR5, VAR7, *VAR8 = &VAR7;
    int VAR9, VAR10, VAR11;
    BlockDriverInfo VAR12, *VAR13 = &VAR12;
    VAR14 *VAR15;
    int VAR16;
    struct _timeb VAR17;
    struct timeval VAR18;
    VAR3 = FUN2();
    if (!VAR3)
    {
        FUN3("");
        return;
    }
    FUN4();
    VAR16 = VAR19;
    FUN5(0);
    VAR9 = 0;
    if (VAR1)
    {
        VAR10 = FUN6(VAR3, VAR8, VAR1);
        if (VAR10 >= 0)
        {
            VAR9 = 1;
        }
    }
    memset(VAR6, 0, sizeof(*VAR6));
    if (VAR9)
    {
        FUN7(VAR6->VAR1, sizeof(VAR6->VAR1), VAR8->VAR1);
        FUN7(VAR6->VAR20, sizeof(VAR6->VAR20), VAR8->VAR20);
    }
    else
    {
        if (VAR1)
            FUN7(VAR6->VAR1, sizeof(VAR6->VAR1), VAR1);
    }
    FUN8(&VAR17);
    VAR6->VAR21 = VAR17.VAR22;
    VAR6->VAR23 = VAR17.VAR24 * 1000000;
    FUN9(&VAR18, NULL);
    VAR6->VAR21 = VAR18.VAR25;
    VAR6->VAR23 = VAR18.VAR26 * 1000;
    VAR6->VAR27 = FUN10(VAR28);
    if (FUN11(VAR3, VAR13) < 0 || VAR13->VAR29 <= 0)
    {
        FUN3("", FUN12(VAR3));
        goto VAR30;
    }
    VAR15 = FUN13(VAR3, VAR13->VAR29, 1);
    if (!VAR15)
    {
        FUN3("");
        goto VAR30;
    }
    VAR10 = FUN14(VAR15);
    VAR6->VAR31 = FUN15(VAR15);
    FUN16(VAR15);
    if (VAR10 < 0)
    {
        FUN3("", VAR10);
        goto VAR30;
    }
    for (VAR11 = 0; VAR11 < VAR32; VAR11++)
    {
        VAR4 = VAR33[VAR11].VAR34;
        if (FUN17(VAR4))
        {
            if (VAR9)
            {
                VAR10 = FUN18(VAR4, VAR8->VAR20);
                if (VAR10 < 0)
                {
                    FUN3("", FUN12(VAR4));
                }
            }
            VAR10 = FUN19(VAR4, VAR6);
            if (VAR10 < 0)
            {
                FUN3("", FUN12(VAR4));
            }
        }
    }
VAR30:
    if (VAR16)
        FUN20();
}