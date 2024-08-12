VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, ram_addr_t VAR6, ram_addr_t VAR7, VAR4 *VAR8, VAR4 **VAR9, VAR10 *VAR11)
{
    int VAR12, VAR13;
    VAR4 *VAR14, *VAR15;
    VAR4 *VAR16, *VAR17;
    VAR1 *VAR18;
    VAR19 *VAR20 = FUN2(VAR3);
    assert(VAR3->VAR21 == VAR6 + VAR7);
    VAR12 = (VAR3->VAR22 != NULL);
    VAR14 = FUN3(sizeof(*VAR14));
    FUN4(VAR14, NULL, "", VAR3->VAR21);
    *VAR9 = VAR14;
    VAR16 = FUN3(sizeof(*VAR16));
    FUN5(VAR16, NULL, "", VAR14, 0, VAR6);
    FUN6(VAR5, 0, VAR16);
    FUN7(0, VAR6, VAR23);
    if (VAR7 > 0)
    {
        VAR17 = FUN3(sizeof(*VAR17));
        FUN5(VAR17, NULL, "", VAR14, VAR6, VAR7);
        FUN6(VAR5, 0x100000000ULL, VAR17);
        FUN7(0x100000000ULL, VAR7, VAR23);
        if (!VAR11->VAR24 && (VAR3->VAR25 || (VAR3->VAR26 > VAR3->VAR21)))
        {
            VAR27 *VAR28 = FUN8(VAR3);
            FUN9(""-VAR29 ''\"", VAR28->VAR30);
            if (VAR11->VAR24 && (VAR3->VAR21 < VAR3->VAR26))
            {
                ram_addr_t VAR31 = VAR3->VAR26 - VAR3->VAR21;
                if (VAR3->VAR25 > VAR32)
                {
                    FUN9("" VAR33, VAR3->VAR25);
                    VAR20->VAR34 = FUN10(0x100000000ULL + VAR7, 1ULL << 30);
                    if (VAR20->VAR35)
                    {
                        VAR31 += (1ULL << 30) * VAR3->VAR25;
                        if ((VAR20->VAR34 + VAR31) < VAR31)
                        {
                            FUN9("" VAR36, VAR3->VAR26);
                            FUN11(&VAR20->VAR37, FUN12(VAR20), "", VAR31);
                            FUN6(VAR5, VAR20->VAR34, &VAR20->VAR37);
                            FUN13(VAR8, VAR11->VAR38);
                            VAR15 = FUN3(sizeof(*VAR15));
                            FUN14(VAR15, NULL, "", VAR39, &VAR40);
                            FUN15(VAR15);
                            FUN16(VAR8, VAR41, VAR15, 1);
                            VAR18 = FUN17();
                            FUN18(VAR18);
                            if (VAR11->VAR24 && VAR20->VAR34)
                            {
                                VAR42 *VAR43 = FUN3(sizeof(*VAR43));
                                *VAR43 = FUN19(FUN10(VAR20->VAR34, 0x1ULL << 30));
                                FUN20(VAR18, "", VAR43, sizeof(*VAR43));
                                if (VAR12)
                                {
                                    FUN21(VAR18, VAR3->VAR22, VAR3->VAR44, VAR3->VAR45, VAR6);
                                    for (VAR13 = 0; VAR13 < VAR46; VAR13++)
                                    {
                                        FUN22(VAR47[VAR13].VAR30, VAR47[VAR13].VAR48);
                                        VAR11->VAR18 = VAR18;
                                        return VAR18