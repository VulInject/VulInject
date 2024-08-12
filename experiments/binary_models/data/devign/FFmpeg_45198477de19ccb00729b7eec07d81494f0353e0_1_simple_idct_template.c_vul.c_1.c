static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4) static inline void FUN1(VAR5)(VAR2 *VAR3, int VAR4)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    if (((FUN2(VAR3) & ~VAR14) | FUN2(VAR3 + 4)) == 0)
    {
        uint64_t VAR15;
        if (VAR16 - VAR4 >= 0)
        {
            VAR15 = (VAR3[0] * (1 << (VAR16 - VAR4))) & 0xffff;
        }
        else
        {
            VAR15 = ((VAR3[0] + (1 << (VAR4 - VAR16 - 1))) >> (VAR4 - VAR16)) & 0xffff;
        }
        VAR15 += VAR15 * (1 << 16);
        VAR15 += VAR15 * ((VAR17)1 << 32);
        FUN3(VAR3, VAR15);
        FUN3(VAR3 + 4, VAR15);
        return;
    }
    if (!(FUN4(VAR3 + 2) | FUN4(VAR3 + 4) | FUN4(VAR3 + 6) | VAR3[1]))
    {
        uint32_t VAR15;
        if (VAR16 - VAR4 >= 0)
        {
            VAR15 = (VAR3[0] * (1 << (VAR16 - VAR4))) & 0xffff;
        }
        else
        {
            VAR15 = ((VAR3[0] + (1 << (VAR4 - VAR16 - 1))) >> (VAR4 - VAR16)) & 0xffff;
        }
        VAR15 += VAR15 * (1 << 16);
        FUN5(VAR3, VAR15);
        FUN5(VAR3 + 2, VAR15);
        FUN5(VAR3 + 4, VAR15);
        FUN5(VAR3 + 6, VAR15);
        return;
    }
    VAR6 = (VAR18 * VAR3[0]) + (1 << (VAR19 + VAR4 - 1));
    VAR7 = VAR6;
    VAR8 = VAR6;
    VAR9 = VAR6;
    VAR6 += VAR20 * VAR3[2];
    VAR7 += VAR21 * VAR3[2];
    VAR8 -= VAR21 * VAR3[2];
    VAR9 -= VAR20 * VAR3[2];
    VAR10 = FUN6(VAR22, VAR3[1]);
    FUN7(VAR10, VAR23, VAR3[3]);
    VAR11 = FUN6(VAR23, VAR3[1]);
    FUN7(VAR11, -VAR24, VAR3[3]);
    VAR12 = FUN6(VAR25, VAR3[1]);
    FUN7(VAR12, -VAR22, VAR3[3]);
    VAR13 = FUN6(VAR24, VAR3[1]);
    FUN7(VAR13, -VAR25, VAR3[3]);
    if (FUN2(VAR3 + 4))
    {
        VAR6 += VAR18 * VAR3[4] + VAR21 * VAR3[6];
        VAR7 += -VAR18 * VAR3[4] - VAR20 * VAR3[6];
        VAR8 += -VAR18 * VAR3[4] + VAR20 * VAR3[6];
        VAR9 += VAR18 * VAR3[4] - VAR21 * VAR3[6];
        FUN7(VAR10, VAR25, VAR3[5]);
        FUN7(VAR10, VAR24, VAR3[7]);
        FUN7(VAR11, -VAR22, VAR3[5]);
        FUN7(VAR11, -VAR25, VAR3[7]);
        FUN7(VAR12, VAR24, VAR3[5]);
        FUN7(VAR12, VAR23, VAR3[7]);
        FUN7(VAR13, VAR23, VAR3[5]);
        FUN7(VAR13, -VAR22, VAR3[7]);
    }
    VAR3[0] = (VAR6 + VAR10) >> (VAR19 + VAR4);
    VAR3[7] = (VAR6 - VAR10) >> (VAR19 + VAR4);
    VAR3[1] = (VAR7 + VAR11) >> (VAR19 + VAR4);
    VAR3[6] = (VAR7 - VAR11) >> (VAR19 + VAR4);
    VAR3[2] = (VAR8 + VAR12) >> (VAR19 + VAR4);
    VAR3[5] = (VAR8 - VAR12) >> (VAR19 + VAR4);
    VAR3[3] = (VAR9 + VAR13) >> (VAR19 + VAR4);
    VAR3[4] = (VAR9 - VAR13) >> (VAR19 + VAR4);
}