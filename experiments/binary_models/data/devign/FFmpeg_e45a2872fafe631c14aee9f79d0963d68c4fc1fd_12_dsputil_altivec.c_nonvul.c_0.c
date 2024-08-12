void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5)
{
    FUN2(VAR6, 1);
    int VAR7;
    FUN3(VAR6, 1);
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        int VAR8;
        const uint32_t VAR9 = (((const struct VAR10 *)(VAR3))->VAR11);
        const uint32_t VAR12 = (((const struct VAR10 *)(VAR3 + 1))->VAR11);
        uint32_t VAR13 = (VAR9 & 0x03030303UL) + (VAR12 & 0x03030303UL) + 0x02020202UL;
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
            VAR13 = (VAR9 & 0x03030303UL) + (VAR12 & 0x03030303UL) + 0x02020202UL;
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
    register vector unsigned char VAR18, VAR19, VAR20;
    register vector unsigned char VAR21, VAR22, VAR23;
    register vector unsigned short VAR24, VAR25, VAR26;
    register const vector unsigned char VAR27 = (const vector unsigned char)FUN5(0);
    register const vector unsigned short VAR28 = (const vector unsigned short)FUN6(2);
    VAR22 = FUN7(0, VAR3);
    VAR23 = FUN7(16, VAR3);
    VAR18 = FUN8(VAR22, VAR23, FUN9(0, VAR3));
    if ((((unsigned long)VAR3) & 0x0000000F) == 0x0000000F)
    {
        VAR19 = VAR23;
    }
    else
    {
        VAR19 = FUN8(VAR22, VAR23, FUN9(1, VAR3));
    }
    VAR18 = FUN10(VAR27, VAR18);
    VAR19 = FUN10(VAR27, VAR19);
    VAR24 = FUN11((vector unsigned short)VAR18, (vector unsigned short)VAR19);
    VAR24 = FUN11(VAR24, VAR28);
    FUN3(VAR6, 1);
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        int VAR29 = ((unsigned long)VAR2 & 0x0000000F);
        VAR21 = FUN7(0, VAR2);
        VAR22 = FUN7(VAR4, VAR3);
        VAR23 = FUN7(VAR4 + 16, VAR3);
        VAR18 = FUN8(VAR22, VAR23, FUN9(VAR4, VAR3));
        if (((((unsigned long)VAR3) + VAR4) & 0x0000000F) == 0x0000000F)
        {
            VAR19 = VAR23;
        }
        else
        {
            VAR19 = FUN8(VAR22, VAR23, FUN9(VAR4 + 1, VAR3));
        }
        VAR18 = FUN10(VAR27, VAR18);
        VAR19 = FUN10(VAR27, VAR19);
        VAR25 = FUN11((vector unsigned short)VAR18, (vector unsigned short)VAR19);
        VAR26 = FUN11(VAR24, VAR25);
        VAR26 = FUN12(VAR26, VAR28);
        VAR24 = FUN11(VAR25, VAR28);
        VAR20 = FUN13(VAR26, (vector unsigned short)VAR27);
        if (VAR29)
        {
            VAR21 = FUN8(VAR21, VAR20, FUN14(0, 1, VAR30, VAR31));
        }
        else
        {
            VAR21 = FUN8(VAR21, VAR20, FUN14(VAR30, VAR31, 2, 3));
        }
        FUN15(VAR21, 0, VAR2);
        VAR2 += VAR4;
        VAR3 += VAR4;
    }
    FUN4(VAR6, 1);
}