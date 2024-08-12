void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    QEMUSnapshotInfo VAR8, *VAR9 = &VAR8, VAR10, *VAR11 = &VAR10;
    int VAR12;
    VAR13 *VAR14;
    int VAR15;
    uint64_t VAR16;
    qemu_timeval VAR17;
    struct tm VAR18;
    const char *VAR19 = FUN2(VAR4, "");
    VAR20 *VAR21 = NULL;
    VAR6 = NULL;
    while ((VAR6 = FUN3(VAR6)))
    {
        if (!FUN4(VAR6) || FUN5(VAR6))
        {
            continue;
            if (!FUN6(VAR6))
            {
                FUN7(VAR2, "", FUN8(VAR6));
                VAR6 = FUN9();
                if (!VAR6)
                {
                    FUN7(VAR2, "");
                    VAR15 = FUN10();
                    FUN11(VAR22);
                    memset(VAR9, 0, sizeof(*VAR9));
                    FUN12(&VAR17);
                    VAR9->VAR23 = VAR17.VAR24;
                    VAR9->VAR25 = VAR17.VAR26 * 1000;
                    VAR9->VAR27 = FUN13(VAR28);
                    if (VAR19)
                    {
                        VAR12 = FUN14(VAR6, VAR11, VAR19);
                        if (VAR12 >= 0)
                        {
                            FUN15(VAR9->VAR19, sizeof(VAR9->VAR19), VAR11->VAR19);
                            FUN15(VAR9->VAR29, sizeof(VAR9->VAR29), VAR11->VAR29);
                        }
                        else
                        {
                            FUN15(VAR9->VAR19, sizeof(VAR9->VAR19), VAR19);
                        }
                        else
                        {
                            FUN16((const VAR30 *)&VAR17.VAR24, &VAR18);
                            FUN17(VAR9->VAR19, sizeof(VAR9->VAR19), "", &VAR18);
                            if (VAR19 && FUN18(VAR2, VAR19) < 0)
                            {
                                goto VAR31;
                                VAR14 = FUN19(VAR6, 1);
                                if (!VAR14)
                                {
                                    FUN7(VAR2, "");
                                    goto VAR31;
                                    VAR12 = FUN20(VAR14, &VAR21);
                                    VAR16 = FUN21(VAR14);
                                    FUN22(VAR14);
                                    if (VAR12 < 0)
                                    {
                                        FUN7(VAR2, "", FUN23(VAR21));
                                        FUN24(VAR21);
                                        goto VAR31;
                                        VAR7 = NULL;
                                        while ((VAR7 = FUN3(VAR7)))
                                        {
                                            if (FUN6(VAR7))
                                            {
                                                VAR9->VAR16 = (VAR6 == VAR7 ? VAR16 : 0);
                                                VAR12 = FUN25(VAR7, VAR9);
                                                if (VAR12 < 0)
                                                {
                                                    FUN7(VAR2, "", FUN8(VAR7));
                                                VAR31:
                                                    if (VAR15)
                                                    {
                                                        FUN26()