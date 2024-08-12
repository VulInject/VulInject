void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5)
{
    FUN2(VAR6, 1);
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        int VAR8;
        const uint32_t VAR9 = (((const struct VAR10 *)(VAR3))->VAR11);
        const uint32_t VAR12 = (((const struct VAR10 *)(VAR3 + 1))->VAR11);
        uint32_t VAR13 = (VAR9 & 0x03030303UL) + (VAR12 & 0x03030303UL) + 0x01010101UL;
        uint32_t VAR14 = ((VAR9 & 0xFCFCFCFCUL) >> 2) + ((VAR12 & 0xFCFCFCFCUL) >> 2);
        uint32_t VAR15, VAR16;
        VAR3 += VAR4;
        for (VAR8 = 0; VAR8 < VAR5; VAR8 += 2)
        {
            uint32_t VAR9 = (((const struct VAR10 *)(VAR3))->VAR11);
            uint32_t VAR12 = (((const struct VAR10 *)(VAR3 + 1))->VAR11);
            VAR15 = (VAR9 & 0x03030303UL) + (VAR12 & 0x03030303UL);
            VAR16 = ((VAR9 & 0xFCFCFCFCUL) >> 2) + ((VAR12 & 0xFCFCFCFCUL) >> 2);
            *((VAR17 *)VAR2) = VAR14 + VAR16 + (((VAR13 + VAR15) >> 2) & 0x0F0F0F0FUL);
            VAR3 += VAR4;
            VAR2 += VAR4;
            VAR9 = (((const struct VAR10 *)(VAR3))->VAR11);
            VAR12 = (((const struct VAR10 *)(VAR3 + 1))->VAR11);
            VAR13 = (VAR9 & 0x03030303UL) + (VAR12 & 0x03030303UL) + 0x01010101UL;
            VAR14 = ((VAR9 & 0xFCFCFCFCUL) >> 2) + ((VAR12 & 0xFCFCFCFCUL) >> 2);
            *((VAR17 *)VAR2) = VAR14 + VAR16 + (((VAR13 + VAR15) >> 2) & 0x0F0F0F0FUL);
            VAR3 += VAR4;
            VAR2 += VAR4;
        }
        VAR3 += 4 - VAR4 * (VAR5 + 1);
        VAR2 += 4 - VAR4 * VAR5;
    }
    FUN4(VAR6, 1);
    register int VAR8;
    register vector unsigned char VAR18, VAR19, VAR20, VAR21;
    register vector unsigned char VAR22, VAR23, VAR24;
    register vector unsigned short VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    register const vector unsigned char VAR31 = (const vector unsigned char)FUN5(0);
    register const vector unsigned short VAR32 = (const vector unsigned short)FUN6(1);
    register const vector unsigned short VAR33 = (const vector unsigned short)FUN6(2);
    FUN3(VAR6, 1);
    VAR23 = FUN7(0, VAR3);
    VAR24 = FUN7(16, VAR3);
    VAR18 = FUN8(VAR23, VAR24, FUN9(0, VAR3));
    if ((((unsigned long)VAR3) & 0x0000000F) == 0x0000000F)
    {
        VAR19 = VAR24;
    }
    else
    {
        VAR19 = FUN8(VAR23, VAR24, FUN9(1, VAR3));
    }
    VAR20 = FUN10(VAR31, VAR18);
    VAR21 = FUN10(VAR31, VAR19);
    VAR18 = FUN11(VAR31, VAR18);
    VAR19 = FUN11(VAR31, VAR19);
    VAR28 = FUN12((vector unsigned short)VAR20, (vector unsigned short)VAR21);
    VAR28 = FUN12(VAR28, VAR32);
    VAR25 = FUN12((vector unsigned short)VAR18, (vector unsigned short)VAR19);
    VAR25 = FUN12(VAR25, VAR32);
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        VAR22 = FUN7(0, VAR2);
        VAR23 = FUN7(VAR4, VAR3);
        VAR24 = FUN7(VAR4 + 16, VAR3);
        VAR18 = FUN8(VAR23, VAR24, FUN9(VAR4, VAR3));
        if (((((unsigned long)VAR3) + VAR4) & 0x0000000F) == 0x0000000F)
        {
            VAR19 = VAR24;
        }
        else
        {
            VAR19 = FUN8(VAR23, VAR24, FUN9(VAR4 + 1, VAR3));
        }
        VAR20 = FUN10(VAR31, VAR18);
        VAR21 = FUN10(VAR31, VAR19);
        VAR18 = FUN11(VAR31, VAR18);
        VAR19 = FUN11(VAR31, VAR19);
        VAR29 = FUN12((vector unsigned short)VAR20, (vector unsigned short)VAR21);
        VAR26 = FUN12((vector unsigned short)VAR18, (vector unsigned short)VAR19);
        VAR30 = FUN12(VAR28, VAR29);
        VAR30 = FUN13(VAR30, VAR33);
        VAR27 = FUN12(VAR25, VAR26);
        VAR27 = FUN13(VAR27, VAR33);
        VAR28 = FUN12(VAR29, VAR32);
        VAR25 = FUN12(VAR26, VAR32);
        VAR22 = FUN14(VAR27, VAR30);
        FUN15(VAR22, 0, VAR2);
        VAR2 += VAR4;
        VAR3 += VAR4;
    }
    FUN4(VAR6, 1);
}