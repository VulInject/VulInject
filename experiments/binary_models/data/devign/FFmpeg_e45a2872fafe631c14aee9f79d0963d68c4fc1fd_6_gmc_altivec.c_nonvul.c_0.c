void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    FUN2(VAR9, VAR10);
    const int VAR11 = (16 - VAR6) * (16 - VAR7);
    const int VAR12 = (VAR6) * (16 - VAR7);
    const int VAR13 = (16 - VAR6) * (VAR7);
    const int VAR14 = (VAR6) * (VAR7);
    int VAR15;
    FUN3(VAR9, VAR10);
    for (VAR15 = 0; VAR15 < VAR5; VAR15++)
    {
        VAR2[0] = (VAR11 * VAR3[0] + VAR12 * VAR3[1] + VAR13 * VAR3[VAR4 + 0] + VAR14 * VAR3[VAR4 + 1] + VAR8) >> 8;
        VAR2[1] = (VAR11 * VAR3[1] + VAR12 * VAR3[2] + VAR13 * VAR3[VAR4 + 1] + VAR14 * VAR3[VAR4 + 2] + VAR8) >> 8;
        VAR2[2] = (VAR11 * VAR3[2] + VAR12 * VAR3[3] + VAR13 * VAR3[VAR4 + 2] + VAR14 * VAR3[VAR4 + 3] + VAR8) >> 8;
        VAR2[3] = (VAR11 * VAR3[3] + VAR12 * VAR3[4] + VAR13 * VAR3[VAR4 + 3] + VAR14 * VAR3[VAR4 + 4] + VAR8) >> 8;
        VAR2[4] = (VAR11 * VAR3[4] + VAR12 * VAR3[5] + VAR13 * VAR3[VAR4 + 4] + VAR14 * VAR3[VAR4 + 5] + VAR8) >> 8;
        VAR2[5] = (VAR11 * VAR3[5] + VAR12 * VAR3[6] + VAR13 * VAR3[VAR4 + 5] + VAR14 * VAR3[VAR4 + 6] + VAR8) >> 8;
        VAR2[6] = (VAR11 * VAR3[6] + VAR12 * VAR3[7] + VAR13 * VAR3[VAR4 + 6] + VAR14 * VAR3[VAR4 + 7] + VAR8) >> 8;
        VAR2[7] = (VAR11 * VAR3[7] + VAR12 * VAR3[8] + VAR13 * VAR3[VAR4 + 7] + VAR14 * VAR3[VAR4 + 8] + VAR8) >> 8;
        VAR2 += VAR4;
        VAR3 += VAR4;
    }
    FUN4(VAR9, VAR10);
    const unsigned short FUN5((FUN6(16))) VAR16[8] = {VAR8, VAR8, VAR8, VAR8, VAR8, VAR8, VAR8, VAR8};
    const unsigned short FUN5((FUN6(16))) VAR17[8] = {(16 - VAR6) * (16 - VAR7), (VAR6) * (16 - VAR7), (16 - VAR6) * (VAR7), (VAR6) * (VAR7), 0, 0, 0, 0};
    register const vector unsigned char VAR18 = (const vector unsigned char)FUN7(0);
    register const vector unsigned short VAR19 = (const vector unsigned short)FUN8(8);
    register vector unsigned char VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    register vector unsigned short VAR28, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35, VAR36;
    int VAR15;
    unsigned long VAR37 = (unsigned long)VAR2 & 0x0000000F;
    unsigned long VAR38 = (unsigned long)VAR3 & 0x0000000F;
    FUN3(VAR9, VAR10);
    VAR33 = FUN9(0, (unsigned short *)VAR17);
    VAR28 = FUN10(VAR33, 0);
    VAR29 = FUN10(VAR33, 1);
    VAR30 = FUN10(VAR33, 2);
    VAR31 = FUN10(VAR33, 3);
    VAR32 = FUN9(0, (unsigned short *)VAR16);
    VAR22 = FUN9(0, VAR3);
    VAR23 = FUN9(16, VAR3);
    VAR24 = FUN11(VAR22, VAR23, FUN12(0, VAR3));
    if (VAR38 != 0x0000000F)
    {
        VAR25 = FUN11(VAR22, VAR23, FUN12(1, VAR3));
    }
    else
    {
        VAR25 = VAR23;
    }
    VAR24 = FUN13(VAR18, VAR24);
    VAR25 = FUN13(VAR18, VAR25);
    for (VAR15 = 0; VAR15 < VAR5; VAR15++)
    {
        VAR37 = (unsigned long)VAR2 & 0x0000000F;
        VAR38 = (((unsigned long)VAR3) + VAR4) & 0x0000000F;
        VAR20 = FUN9(0, VAR2);
        VAR22 = FUN9(VAR4 + 0, VAR3);
        VAR23 = FUN9(VAR4 + 16, VAR3);
        VAR26 = FUN11(VAR22, VAR23, FUN12(VAR4 + 0, VAR3));
        if (VAR38 != 0x0000000F)
        {
            VAR27 = FUN11(VAR22, VAR23, FUN12(VAR4 + 1, VAR3));
        }
        else
        {
            VAR27 = VAR23;
        }
        VAR26 = FUN13(VAR18, VAR26);
        VAR27 = FUN13(VAR18, VAR27);
        VAR33 = FUN14((vector unsigned short)VAR24, VAR28, VAR32);
        VAR34 = FUN14((vector unsigned short)VAR25, VAR29, VAR33);
        VAR35 = FUN14((vector unsigned short)VAR26, VAR30, VAR34);
        VAR36 = FUN14((vector unsigned short)VAR27, VAR31, VAR35);
        VAR24 = VAR26;
        VAR25 = VAR27;
        VAR36 = FUN15(VAR36, VAR19);
        VAR21 = FUN16(VAR36, (vector unsigned short)VAR18);
        if (VAR37)
        {
            VAR21 = FUN11(VAR20, VAR21, FUN17(0, 1, VAR39, VAR40));
        }
        else
        {
            VAR21 = FUN11(VAR20, VAR21, FUN17(VAR39, VAR40, 2, 3));
        }
        FUN18(VAR21, 0, VAR2);
        VAR2 += VAR4;
        VAR3 += VAR4;
    }
    FUN4(VAR9, VAR10);
}