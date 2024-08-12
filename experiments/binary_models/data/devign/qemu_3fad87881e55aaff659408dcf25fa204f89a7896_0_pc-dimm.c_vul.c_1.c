void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, bool VAR8, VAR9 **VAR10)
{
    int VAR11;
    VAR12 *VAR13 = FUN2(FUN3());
    VAR14 *VAR15 = FUN4(VAR2);
    VAR9 *VAR16 = NULL;
    uint64_t VAR17 = 0;
    uint64_t VAR18;
    VAR18 = FUN5(FUN6(VAR15), VAR19, &VAR16);
    if (VAR16)
    {
        VAR18 = FUN7(VAR4->VAR20, FUN8(&VAR4->VAR6), !VAR18 ? NULL : &VAR18, VAR7, VAR8, FUN8(VAR6), &VAR16);
        if (VAR16)
        {
            VAR17 = FUN9(&VAR16);
            if (VAR16)
            {
                if (VAR17 + FUN8(VAR6) > VAR13->VAR21 - VAR13->VAR22)
                {
                    FUN10(&VAR16, "" VAR23 "" VAR24, VAR17, VAR13->VAR21 - VAR13->VAR22);
                    FUN11(FUN6(VAR2), VAR18, VAR19, &VAR16);
                    if (VAR16)
                    {
                        FUN12(VAR18);
                        VAR11 = FUN5(FUN6(VAR2), VAR25, &VAR16);
                        if (VAR16)
                        {
                            VAR11 = FUN13(VAR11 == VAR26 ? NULL : &VAR11, VAR13->VAR27, &VAR16);
                            if (VAR16)
                            {
                                FUN11(FUN6(VAR2), VAR11, VAR25, &VAR16);
                                if (VAR16)
                                {
                                    FUN14(VAR11);
                                    if (FUN15() && !FUN16(VAR13))
                                    {
                                        FUN10(&VAR16, "");
                                        FUN17(&VAR4->VAR6, VAR18 - VAR4->VAR20, VAR6);
                                        FUN18(VAR6, VAR2);
                                        FUN19(VAR18, FUN8(VAR6), VAR15->VAR28);
                                    VAR29:
                                        FUN20(VAR10, VAR16)