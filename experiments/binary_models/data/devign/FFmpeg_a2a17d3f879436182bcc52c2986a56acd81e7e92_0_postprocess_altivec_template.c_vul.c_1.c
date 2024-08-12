static inline int FUN1(uint8_t VAR1[], int VAR2, VAR3 *VAR4)
{
    FUN2(16, short, VAR5)
    [8] = {((VAR4->VAR6 * VAR4->VAR7.VAR8) >> 8) + 1, VAR5[0] * 2 + 1, VAR4->VAR9 * 2, VAR4->VAR9 * 4};
    int VAR10;
    VAR11 *VAR12 = VAR1;
    vector signed short VAR13;
    vector signed short VAR14;
    vector unsigned short VAR15;
    vector unsigned short VAR16;
    const int VAR17 = (VAR2 % 16);
    const int VAR18 = ((unsigned long)VAR12 % 16);
    const int VAR19 = ((VAR18 > 8) || VAR17) ? 1 : 0;
    const vector signed int VAR20 = FUN3(0);
    const vector signed short VAR21 = FUN4(1);
    vector signed int VAR22 = FUN3(0);
    vector signed short VAR23 = FUN5(0, VAR5);
    vector signed short VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31;
    register int VAR32 = 0, VAR33 = VAR2, VAR34 = 2 * VAR2, VAR35 = 3 * VAR2, VAR36 = 4 * VAR2, VAR37 = 5 * VAR2, VAR38 = 6 * VAR2, VAR39 = 7 * VAR2;
    vector unsigned char VAR40, VAR41, VAR42, VAR43, VAR44, VAR45, VAR46, VAR47;
    VAR13 = FUN6(VAR23, 0);
    VAR16 = (vector unsigned short)FUN6(VAR23, 1);
    VAR14 = FUN6(VAR23, 2);
    VAR15 = (vector unsigned short)FUN6(VAR23, 3);
    VAR12 += VAR2 * 4;
    {
        vector unsigned char VAR48##VAR49 = FUN7(VAR50##VAR49, VAR12);
        vector unsigned char VAR42##VAR49;
        vector unsigned char VAR41##VAR49 = FUN5(VAR50##VAR49, VAR12);
        if (VAR19)
            VAR42##VAR49 = FUN5(VAR50##VAR49 + 16, VAR12);
        VAR51##VAR49 = FUN8(VAR41##VAR49, VAR42##VAR49, VAR48##VAR49);
        VAR52##VAR49 = (vector signed short)FUN9((vector signed char)VAR20, (vector signed char)VAR51##VAR49);
    }
    VAR51##VAR49 = FUN5(VAR50##VAR49, VAR12);
    VAR52##VAR49 = (vector signed short)FUN9((vector signed char)VAR20, (vector signed char)VAR51##VAR49) if (VAR17 && VAR18)
    {
        FUN10(0);
        FUN10(1);
        FUN10(2);
        FUN10(3);
        FUN10(4);
        FUN10(5);
        FUN10(6);
        FUN10(7);
    }
    else
    {
        FUN11(0);
        FUN11(1);
        FUN11(2);
        FUN11(3);
        FUN11(4);
        FUN11(5);
        FUN11(6);
        FUN11(7);
    }
    const vector signed short VAR53##VAR49 = FUN12(VAR52##VAR49, VAR52##VAR50);
    const vector signed short VAR54##VAR49 = FUN13(VAR53##VAR49, VAR13);
    const vector signed short VAR55##VAR49 = (vector signed short)FUN14((vector unsigned short)VAR54##VAR49, VAR16);
    const vector signed short VAR56##VAR49 = FUN15(VAR21, VAR55##VAR49);
    {
        FUN16(0, 1)
        FUN16(1, 2) FUN16(2, 3) FUN16(3, 4) FUN16(4, 5) FUN16(5, 6) FUN16(6, 7) VAR22 = FUN17(VAR57, VAR22);
        VAR22 = FUN17(VAR58, VAR22);
        VAR22 = FUN17(VAR59, VAR22);
        VAR22 = FUN17(VAR60, VAR22);
        VAR22 = FUN17(VAR61, VAR22);
        VAR22 = FUN17(VAR62, VAR22);
        VAR22 = FUN17(VAR63, VAR22);
    }
    VAR22 = FUN18(VAR22, VAR20);
    VAR22 = FUN6(VAR22, 3);
    FUN19(VAR22, 0, &VAR10);
    if (VAR10 > VAR4->VAR7.VAR64)
    {
        const vector unsigned char VAR65 = (const vector unsigned char){0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x01, 0x12, 0x13, 0x08, 0x09, 0x1A, 0x1B};
        const vector unsigned char VAR66 = (const vector unsigned char){0x04, 0x05, 0x16, 0x17, 0x0C, 0x0D, 0x1E, 0x1F, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f};
        const vector unsigned char VAR67 = (const vector unsigned char)FUN7(8, (unsigned char *)0);
        vector signed short VAR68 = FUN8(VAR24, VAR26, VAR65);
        vector signed short VAR69 = FUN8(VAR28, VAR30, VAR66);
        vector signed short VAR70 = FUN8(VAR68, VAR69, VAR67);
        vector signed short VAR71 = FUN8(VAR29, VAR31, VAR65);
        vector signed short VAR72 = FUN8(VAR25, VAR27, VAR66);
        vector signed short VAR73 = FUN8(VAR71, VAR72, VAR67);
        vector signed short VAR74 = FUN12(VAR70, VAR73);
        vector unsigned short VAR75 = (vector unsigned short)FUN13(VAR74, VAR14);
        if (FUN20(VAR75, VAR15))
            return 0;
        else
            return 1;
    }
    else
        return 2;
}