static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint16_t VAR5;
    int VAR6, VAR7, VAR8 = 0, VAR9;
    uint32_t VAR10;
    uint8_t VAR11[8192], *VAR12, *VAR13, *VAR14;
    hwaddr VAR15, VAR16, VAR17, VAR18 = 0;
    VAR19 *VAR20;
    char *VAR21;
    VAR22 *VAR23 = FUN2(VAR2);
    const char *VAR24 = VAR23->VAR24;
    const char *VAR25 = VAR23->VAR25;
    const char *VAR26 = VAR23->VAR26;
    VAR9 = (strlen(VAR26) + 16) & ~15;
    VAR20 = fopen(VAR24, "");
    if (!VAR20 || !(VAR7 = FUN3(VAR20)) || fread(VAR11, 1, FUN4(FUN5(VAR11), VAR7), VAR20) != FUN4(FUN5(VAR11), VAR7))
    {
        fprintf(VAR27, "", VAR24, strerror(VAR28));
        fprintf(VAR27, "", FUN6(VAR11 + 0x202));
        if (FUN6(VAR11 + 0x202) == 0x53726448)
        {
            VAR5 = FUN7(VAR11 + 0x206);
        }
        else
        {
            if (FUN8(VAR4, VAR20, VAR24, VAR25, VAR26, VAR7, VAR11))
            {
                return;
                VAR5 = 0;
                if (VAR5 < 0x200 || !(VAR11[0x211] & 0x01))
                {
                    VAR15 = 0x90000;
                    VAR17 = 0x9a000 - VAR9;
                    VAR16 = 0x10000;
                }
                else if (VAR5 < 0x202)
                {
                    VAR15 = 0x90000;
                    VAR17 = 0x9a000 - VAR9;
                    VAR16 = 0x100000;
                }
                else
                {
                    VAR15 = 0x10000;
                    VAR17 = 0x20000;
                    VAR16 = 0x100000;
                    fprintf(VAR27, "" VAR29 ""
                                    "" VAR29 ""
                                    "" VAR29 "",
                            VAR15, VAR17, VAR16);
                    if (VAR5 >= 0x203)
                    {
                        VAR10 = FUN6(VAR11 + 0x22c);
                    }
                    else
                    {
                        VAR10 = 0x37ffffff;
                        if (VAR10 >= VAR2->VAR30 - VAR31)
                        {
                            VAR10 = VAR2->VAR30 - VAR31 - 1;
                            FUN9(VAR4, VAR32, VAR17);
                            FUN9(VAR4, VAR33, strlen(VAR26) + 1);
                            FUN10(VAR4, VAR34, VAR26);
                            if (VAR5 >= 0x202)
                            {
                                FUN11(VAR11 + 0x228, VAR17);
                            }
                            else
                            {
                                FUN12(VAR11 + 0x20, 0xA33F);
                                FUN12(VAR11 + 0x22, VAR17 - VAR15);
                                VAR21 = strstr(VAR26, "");
                                if (VAR21)
                                {
                                    unsigned int VAR35;
                                    VAR21 += 4;
                                    if (!FUN13(VAR21, "", 6))
                                    {
                                        VAR35 = 0xffff;
                                    }
                                    else if (!FUN13(VAR21, "", 3))
                                    {
                                        VAR35 = 0xfffe;
                                    }
                                    else if (!FUN13(VAR21, "", 3))
                                    {
                                        VAR35 = 0xfffd;
                                    }
                                    else
                                    {
                                        VAR35 = FUN14(VAR21, NULL, 0);
                                        FUN12(VAR11 + 0x1fa, VAR35);
                                        if (VAR5 >= 0x200)
                                        {
                                            VAR11[0x210] = 0xB0;
                                            if (VAR5 >= 0x201)
                                            {
                                                VAR11[0x211] |= 0x80;
                                                FUN12(VAR11 + 0x224, VAR17 - VAR15 - 0x200);
                                                if (VAR25)
                                                {
                                                    if (VAR5 < 0x200)
                                                    {
                                                        fprintf(VAR27, "");
                                                        VAR8 = FUN15(VAR25);
                                                        if (VAR8 < 0)
                                                        {
                                                            fprintf(VAR27, "", VAR25, strerror(VAR28));
                                                            VAR18 = (VAR10 - VAR8) & ~4095;
                                                            VAR14 = FUN16(VAR8);
                                                            FUN17(VAR25, VAR14);
                                                            FUN9(VAR4, VAR36, VAR18);
                                                            FUN9(VAR4, VAR37, VAR8);
                                                            FUN18(VAR4, VAR38, VAR14, VAR8);
                                                            FUN11(VAR11 + 0x218, VAR18);
                                                            FUN11(VAR11 + 0x21c, VAR8);
                                                            VAR6 = VAR11[0x1f1];
                                                            if (VAR6 == 0)
                                                            {
                                                                VAR6 = 4;
                                                                VAR6 = (VAR6 + 1) * 512;
                                                                VAR7 -= VAR6;
                                                                VAR12 = FUN16(VAR6);
                                                                VAR13 = FUN16(VAR7);
                                                                FUN19(VAR20, 0, VAR39);
                                                                if (fread(VAR12, 1, VAR6, VAR20) != VAR6)
                                                                {
                                                                    fprintf(VAR27, "");
                                                                    if (fread(VAR13, 1, VAR7, VAR20) != VAR7)
                                                                    {
                                                                        fprintf(VAR27, "");
                                                                        fclose(VAR20);
                                                                        memcpy(VAR12, VAR11, FUN4(sizeof(VAR11), VAR6));
                                                                        FUN9(VAR4, VAR40, VAR16);
                                                                        FUN9(VAR4, VAR41, VAR7);
                                                                        FUN18(VAR4, VAR42, VAR13, VAR7);
                                                                        FUN9(VAR4, VAR43, VAR15);
                                                                        FUN9(VAR4, VAR44, VAR6);
                                                                        FUN18(VAR4, VAR45, VAR12, VAR6);
                                                                        VAR46[VAR47].VAR48 = "";
                                                                        VAR46[VAR47].VAR49 = 0;
                                                                        VAR47++;