void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    char VAR8[1024];
    unsigned long VAR9;
    target_long VAR10;
    int64_t VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    int VAR24;
    VAR25 *VAR26;
    VAR27 *VAR28;
    int VAR29;
    int VAR30;
    VAR31 *VAR32[VAR33 * VAR34];
    VAR31 *VAR35[VAR36];
    int VAR37 = 0;
    int VAR38 = 0;
    if (VAR7 == NULL)
    {
        VAR7 = "";
        VAR7 = "";
        VAR15 = FUN2(VAR7);
        if (!VAR15)
        {
            fprintf(VAR39, "");
            FUN3(VAR40, VAR15);
            FUN4(0, VAR1, VAR41);
            VAR9 = VAR1 + VAR2;
            FUN4(0x1e000000LL, VAR42, VAR9 | VAR43);
            FUN4(0x1fc00000LL, VAR42, VAR9 | VAR43);
            VAR21 = FUN5(0x1f000000LL, VAR15->VAR44[2], VAR45[2]);
            if (VAR4)
            {
                VAR46.VAR1 = VAR1;
                VAR46.VAR4 = VAR4;
                VAR46.VAR5 = VAR5;
                VAR46.VAR6 = VAR6;
                VAR11 = FUN6(VAR15);
                VAR15->VAR47 &= ~((1 << VAR48) | (1 << VAR49));
                FUN7(VAR15, VAR9, VAR11);
            }
            else
            {
                VAR30 = FUN8(VAR50, 0, VAR37);
                if (VAR30 != -1)
                {
                    VAR10 = 0x400000;
                    VAR38 = VAR10 >> 16;
                    FUN9("" VAR51 ""
                           "",
                           VAR37, VAR10, VAR9, 0x1e000000LL, FUN10(VAR52[VAR30].VAR53), VAR38);
                    FUN11(0x1e000000LL, VAR9, VAR52[VAR30].VAR53, 65536, VAR38, 4, 0x0000, 0x0000, 0x0000, 0x0000);
                    VAR37++;
                }
                else
                {
                    if (VAR54 == NULL)
                        VAR54 = VAR55;
                    snprintf(VAR8, sizeof(VAR8), "", VAR56, VAR54);
                    VAR10 = FUN12(VAR8, VAR57 + VAR9);
                    if ((VAR10 < 0 || VAR10 > VAR42) && !VAR4)
                    { "" , VAR8 ) ;
                        {
                            VAR58 *VAR59;
                            for (VAR59 = (VAR58 *)(VAR57 + VAR9); VAR59 < (VAR58 *)(VAR57 + VAR9 + VAR10); VAR59++)
                            {
                                *VAR59 = FUN13(*VAR59);
                                FUN14(VAR57 + VAR9 + 0x10, 0x00000420);
                                FUN15(VAR15);
                                FUN16(VAR15);
                                VAR23 = FUN17(VAR15->VAR44[2]);
                                VAR13 = FUN18(VAR23);
                                if (FUN19(VAR60) >= VAR33)
                                {
                                    fprintf(VAR39, "");
                                    for (VAR29 = 0; VAR29 < VAR33 * VAR34; VAR29++)
                                    {
                                        VAR30 = FUN8(VAR60, VAR29 / VAR34, VAR29 % VAR34);
                                        if (VAR30 != -1)
                                            VAR32[VAR29] = VAR52[VAR30].VAR53;
                                        else
                                            VAR32[VAR29] = NULL;
                                        VAR24 = FUN20(VAR13, 80);
                                        FUN21(VAR13, VAR32, VAR24 + 1, VAR23);
                                        FUN22(VAR13, VAR24 + 2);
                                        VAR28 = FUN23(VAR13, VAR24 + 3, 0x1100, VAR23[9]);
                                        VAR26 = FUN24(8 * 256);
                                        for (VAR29 = 0; VAR29 < 8; VAR29++)
                                        {
                                            FUN25(VAR28, 0x50 + VAR29, VAR26 + (VAR29 * 256));
                                            VAR61 = FUN26(0x40, VAR23[0]);
                                            FUN27(0);
                                            FUN28(VAR23[1], VAR23[12], 0x60);
                                            VAR17 = FUN29(0x70, VAR23[8]);
                                            FUN30(0x3f8, VAR23[4], 115200, VAR45[0]);
                                            FUN30(0x2f8, VAR23[3], 115200, VAR45[1]);
                                            if (VAR62[0])
                                                FUN31(0x378, VAR23[7], VAR62[0]);
                                            for (VAR29 = 0; VAR29 < VAR36; VAR29++)
                                            {
                                                VAR30 = FUN8(VAR63, 0, VAR29);
                                                if (VAR30 != -1)
                                                    VAR35[VAR29] = VAR52[VAR30].VAR53;
                                                else
                                                    VAR35[VAR29] = NULL;
                                                VAR19 = FUN32(VAR23[6], 2, 0, 0x3f0, VAR35);
                                                FUN33(VAR13);
                                                FUN34(VAR13);
                                                FUN35(VAR13, VAR57 + VAR1, VAR1, VAR2);