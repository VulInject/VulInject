void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    char VAR8[1024];
    unsigned long VAR9;
    int VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    VAR16 *VAR17;
    int VAR18;
    VAR19 *VAR20[VAR21 * VAR22];
    if (VAR7 == NULL)
    {
        VAR7 = "";
        VAR7 = "";
        VAR12 = FUN2(VAR7);
        if (!VAR12)
        {
            fprintf(VAR23, "");
            FUN3(VAR24, VAR12);
            FUN4(0, VAR1, VAR25);
            if (!VAR26)
            {
                VAR26 = FUN5(0, VAR27, VAR28, NULL);
                FUN4(0x1fbf0000, 0x10000, VAR26);
                VAR9 = VAR1 + VAR2;
                if (VAR29 == NULL)
                    VAR29 = VAR30;
                snprintf(VAR8, sizeof(VAR8), "", VAR31, VAR29);
                VAR10 = FUN6(VAR8, VAR32 + VAR9);
                if ((VAR10 > 0) && (VAR10 <= VAR33))
                {
                    FUN4(0x1fc00000, VAR33, VAR9 | VAR34);
                }
                else if ((VAR18 = FUN7(VAR35, 0, 0)) > -1)
                {
                    uint32_t VAR36 = 0x00400000;
                    FUN4(0x1fc00000, VAR36, FUN8(VAR36) | VAR34);
                    if (!FUN9(0x1fc00000, FUN8(VAR36), VAR37[VAR18].VAR38, VAR39, VAR36 / VAR39, 4, 0, 0, 0, 0))
                    {
                        fprintf(VAR23, "");
                        else
                        {
                            fprintf(VAR23, "", VAR8);
                            if (VAR4)
                            {
                                VAR40.VAR1 = VAR1;
                                VAR40.VAR4 = VAR4;
                                VAR40.VAR5 = VAR5;
                                VAR40.VAR6 = VAR6;
                                FUN10(VAR12);
                                FUN11(VAR12);
                                FUN12(VAR12);
                                VAR17 = FUN13(VAR12->VAR41[2]);
                                VAR14 = FUN14(0x70, VAR17[8]);
                                FUN15(0x14000000, 0x00010000);
                                VAR42 = 0x10000000;
                                VAR43 = FUN16(0x40, VAR17[0]);
                                for (VAR15 = 0; VAR15 < VAR44; VAR15++)
                                {
                                    if (VAR45[VAR15])
                                    {
                                        FUN17(VAR46[VAR15], VAR17[VAR47[VAR15]], 115200, VAR45[VAR15]);
                                        FUN18(VAR32 + VAR1, VAR1, VAR2);
                                        if (VAR48[0].VAR49)
                                            FUN19(0x300, VAR17[9], &VAR48[0]);
                                        if (FUN20(VAR50) >= VAR21)
                                        {
                                            fprintf(VAR23, "");
                                            for (VAR15 = 0; VAR15 < VAR21 * VAR22; VAR15++)
                                            {
                                                VAR18 = FUN7(VAR50, VAR15 / VAR22, VAR15 % VAR22);
                                                if (VAR18 != -1)
                                                    VAR20[VAR15] = VAR37[VAR18].VAR38;
                                                else
                                                    VAR20[VAR15] = NULL;
                                                for (VAR15 = 0; VAR15 < VAR21; VAR15++)
                                                    FUN21(VAR51[VAR15], VAR52[VAR15], VAR17[VAR53[VAR15]], VAR20[VAR22 * VAR15], VAR20[VAR22 * VAR15 + 1]);
                                                FUN22(VAR17[1], VAR17[12], 0x60);