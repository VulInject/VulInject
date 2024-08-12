static void FUN1(const char *VAR1, VAR2 *VAR3, int VAR4, VAR2 *VAR5, const char *VAR6, int64_t VAR7, uint32_t VAR8, int64_t VAR9, BlockMirrorBackingMode VAR10, BlockdevOnError VAR11, BlockdevOnError VAR12, bool VAR13, VAR14 *VAR15, void *VAR16, const VAR17 *VAR18, bool VAR19, VAR2 *VAR20, bool VAR21, const char *VAR22, VAR23 **VAR24)
{
    VAR25 *VAR26;
    VAR2 *VAR27;
    bool VAR28;
    bool VAR29;
    VAR23 *VAR30 = NULL;
    int VAR31;
    if (VAR8 == 0)
    {
        VAR8 = FUN2(VAR5);
        assert((VAR8 & (VAR8 - 1)) == 0);
        assert(VAR8 >= VAR32);
        if (VAR9 < 0)
        {
            FUN3(VAR24, "");
            return;
            if (VAR9 == 0)
            {
                VAR9 = VAR33;
                VAR27 = FUN4(&VAR34, VAR22, VAR35, VAR24);
                if (VAR27 == NULL)
                {
                    return;
                    VAR27->VAR36 = VAR3->VAR36;
                    FUN5(VAR27, FUN6(VAR3));
                    FUN7(VAR27);
                    FUN8(VAR3);
                    FUN9(VAR27, VAR3, &VAR30);
                    FUN10(VAR3);
                    if (VAR30)
                    {
                        FUN11(VAR27);
                        FUN12(VAR24, VAR30);
                        return;
                        VAR26 = FUN13(VAR1, VAR18, VAR27, VAR37, VAR37 | VAR38 | VAR39 | VAR40, VAR7, VAR4, VAR15, VAR16, VAR24);
                        if (!VAR26)
                        {
                            goto VAR41;
                            FUN11(VAR27);
                            VAR26->VAR42 = VAR3;
                            VAR26->VAR27 = VAR27;
                            VAR29 = FUN14(VAR3, VAR5);
                            VAR28 = (VAR10 != VAR43);
                            VAR26->VAR5 = FUN15(VAR39 | VAR44 | (VAR28 ? VAR40 : 0), VAR38 | (VAR29 ? VAR37 | VAR39 | VAR40 : 0));
                            VAR31 = FUN16(VAR26->VAR5, VAR5, VAR24);
                            if (VAR31 < 0)
                            {
                                goto VAR41;
                                VAR26->VAR6 = FUN17(VAR6);
                                VAR26->VAR11 = VAR11;
                                VAR26->VAR12 = VAR12;
                                VAR26->VAR19 = VAR19;
                                VAR26->VAR10 = VAR10;
                                VAR26->VAR20 = VAR20;
                                VAR26->VAR8 = VAR8;
                                VAR26->VAR9 = FUN18(VAR9, VAR8);
                                VAR26->VAR13 = VAR13;
                                if (VAR21)
                                {
                                    VAR26->VAR45 = true;
                                    VAR26->VAR46 = FUN19(VAR3, VAR8, NULL, VAR24);
                                    if (!VAR26->VAR46)
                                    {
                                        goto VAR41;
                                        FUN20(&VAR26->VAR47, "", VAR5, 0, VAR48, &VAR49);
                                        if (VAR29)
                                        {
                                            VAR2 *VAR50;
                                            for (VAR50 = FUN21(VAR3); VAR50 != VAR5; VAR50 = FUN21(VAR50))
                                            {
                                                VAR31 = FUN20(&VAR26->VAR47, "", VAR50, 0, VAR38 | VAR39, VAR24);
                                                if (VAR31 < 0)
                                                {
                                                    goto VAR41;
                                                    FUN22(VAR3, VAR26, VAR16);
                                                    FUN23(&VAR26->VAR47);
                                                    return;
                                                VAR41:
                                                    if (VAR26)
                                                    {
                                                        FUN7(VAR27);
                                                        FUN24(VAR26->VAR6);
                                                        FUN25(VAR26->VAR5);
                                                        FUN26(&VAR26->VAR47);
                                                        FUN27(VAR27->VAR51, 0, VAR48, &VAR49);
                                                        FUN28(VAR27, FUN21(VAR27), &VAR49);
                                                        FUN11(VAR27);