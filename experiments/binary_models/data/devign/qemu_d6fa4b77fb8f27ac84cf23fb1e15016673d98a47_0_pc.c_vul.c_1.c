static void FUN1(void *VAR1, const char *VAR2, const char *VAR3, const char *VAR4, target_phys_addr_t VAR5)
{
    uint16_t VAR6;
    int VAR7, VAR8, VAR9 = 0, VAR10;
    uint32_t VAR11;
    uint8_t VAR12[8192], *VAR13, *VAR14, *VAR15;
    target_phys_addr_t VAR16, VAR17, VAR18, VAR19 = 0;
    VAR20 *VAR21;
    char *VAR22;
    VAR10 = (strlen(VAR4) + 16) & ~15;
    VAR21 = fopen(VAR2, "");
    if (!VAR21 || !(VAR8 = FUN2(VAR21)) || fread(VAR12, 1, FUN3(FUN4(VAR12), VAR8), VAR21) != FUN3(FUN4(VAR12), VAR8))
    {
        fprintf(VAR23, "", VAR2, strerror(VAR24));
        fprintf(VAR23, "", FUN5(VAR12 + 0x202));
        if (FUN5(VAR12 + 0x202) == 0x53726448)
            VAR6 = FUN6(VAR12 + 0x206);
        else
        {
            if (FUN7(VAR1, VAR21, VAR2, VAR3, VAR4, VAR8, VAR12))
                return;
            VAR6 = 0;
            if (VAR6 < 0x200 || !(VAR12[0x211] & 0x01))
            {
                VAR16 = 0x90000;
                VAR18 = 0x9a000 - VAR10;
                VAR17 = 0x10000;
            }
            else if (VAR6 < 0x202)
            {
                VAR16 = 0x90000;
                VAR18 = 0x9a000 - VAR10;
                VAR17 = 0x100000;
            }
            else
            {
                VAR16 = 0x10000;
                VAR18 = 0x20000;
                VAR17 = 0x100000;
                fprintf(VAR23, "" VAR25 ""
                                "" VAR25 ""
                                "" VAR25 "",
                        VAR16, VAR18, VAR17);
                if (VAR6 >= 0x203)
                    VAR11 = FUN5(VAR12 + 0x22c);
                else
                    VAR11 = 0x37ffffff;
                if (VAR11 >= VAR5 - VAR26)
                    VAR11 = VAR5 - VAR26 - 1;
                FUN8(VAR1, VAR27, VAR18);
                FUN8(VAR1, VAR28, strlen(VAR4) + 1);
                FUN9(VAR1, VAR29, (VAR30 *)strdup(VAR4), strlen(VAR4) + 1);
                if (VAR6 >= 0x202)
                {
                    FUN10(VAR12 + 0x228, VAR18);
                }
                else
                {
                    FUN11(VAR12 + 0x20, 0xA33F);
                    FUN11(VAR12 + 0x22, VAR18 - VAR16);
                    VAR22 = strstr(VAR4, "");
                    if (VAR22)
                    {
                        unsigned int VAR31;
                        VAR22 += 4;
                        if (!FUN12(VAR22, "", 6))
                        {
                            VAR31 = 0xffff;
                        }
                        else if (!FUN12(VAR22, "", 3))
                        {
                            VAR31 = 0xfffe;
                        }
                        else if (!FUN12(VAR22, "", 3))
                        {
                            VAR31 = 0xfffd;
                        }
                        else
                        {
                            VAR31 = FUN13(VAR22, NULL, 0);
                            FUN11(VAR12 + 0x1fa, VAR31);
                            if (VAR6 >= 0x200)
                                VAR12[0x210] = 0xB0;
                            if (VAR6 >= 0x201)
                            {
                                VAR12[0x211] |= 0x80;
                                FUN11(VAR12 + 0x224, VAR18 - VAR16 - 0x200);
                                if (VAR3)
                                {
                                    if (VAR6 < 0x200)
                                    {
                                        fprintf(VAR23, "");
                                        VAR9 = FUN14(VAR3);
                                        VAR19 = (VAR11 - VAR9) & ~4095;
                                        VAR15 = FUN15(VAR9);
                                        FUN16(VAR3, VAR15);
                                        FUN8(VAR1, VAR32, VAR19);
                                        FUN8(VAR1, VAR33, VAR9);
                                        FUN9(VAR1, VAR34, VAR15, VAR9);
                                        FUN10(VAR12 + 0x218, VAR19);
                                        FUN10(VAR12 + 0x21c, VAR9);
                                        VAR7 = VAR12[0x1f1];
                                        if (VAR7 == 0)
                                            VAR7 = 4;
                                        VAR7 = (VAR7 + 1) * 512;
                                        VAR8 -= VAR7;
                                        VAR13 = FUN15(VAR7);
                                        VAR14 = FUN15(VAR8);
                                        FUN17(VAR21, 0, VAR35);
                                        if (fread(VAR13, 1, VAR7, VAR21) != VAR7)
                                        {
                                            fprintf(VAR23, "");
                                            if (fread(VAR14, 1, VAR8, VAR21) != VAR8)
                                            {
                                                fprintf(VAR23, "");
                                                fclose(VAR21);
                                                memcpy(VAR13, VAR12, FUN3(sizeof(VAR12), VAR7));
                                                FUN8(VAR1, VAR36, VAR17);
                                                FUN8(VAR1, VAR37, VAR8);
                                                FUN9(VAR1, VAR38, VAR14, VAR8);
                                                FUN8(VAR1, VAR39, VAR16);
                                                FUN8(VAR1, VAR40, VAR7);
                                                FUN9(VAR1, VAR41, VAR13, VAR7);
                                                VAR42[VAR43] = "";
                                                VAR43++