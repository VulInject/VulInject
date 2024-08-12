static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    if (((((VAR13 *)VAR3)[0] & ~VAR14) | ((VAR13 *)VAR3)[1]) == 0)
    {
        uint64_t VAR15;
        if (VAR16 - VAR4 > 0)
        {
            VAR15 = (VAR3[0] * (1 << (VAR16 - VAR4))) & 0xffff;
        }
        else
        {
            VAR15 = (VAR3[0] >> (VAR4 - VAR16)) & 0xffff;
        }
        VAR15 += VAR15 * (1 << 16);
        VAR15 += VAR15 * ((VAR13)1 << 32);
        ((VAR13 *)VAR3)[0] = VAR15;
        ((VAR13 *)VAR3)[1] = VAR15;
        return;
    }
    if (!(((VAR17 *)VAR3)[1] | ((VAR17 *)VAR3)[2] | ((VAR17 *)VAR3)[3] | VAR3[1]))
    {
        uint32_t VAR15;
        if (VAR16 - VAR4 > 0)
        {
            VAR15 = (VAR3[0] * (1 << (VAR16 - VAR4))) & 0xffff;
        }
        else
        {
            VAR15 = (VAR3[0] >> (VAR4 - VAR16)) & 0xffff;
        }
        VAR15 += VAR15 * (1 << 16);
        ((VAR17 *)VAR3)[0] = ((VAR17 *)VAR3)[1] = ((VAR17 *)VAR3)[2] = ((VAR17 *)VAR3)[3] = VAR15;
        return;
    }
    VAR5 = (VAR18 * VAR3[0]) + (1 << (VAR19 - 1));
    VAR6 = VAR5;
    VAR7 = VAR5;
    VAR8 = VAR5;
    VAR5 += VAR20 * VAR3[2];
    VAR6 += VAR21 * VAR3[2];
    VAR7 -= VAR21 * VAR3[2];
    VAR8 -= VAR20 * VAR3[2];
    VAR9 = FUN2(VAR22, VAR3[1]);
    FUN3(VAR9, VAR23, VAR3[3]);
    VAR10 = FUN2(VAR23, VAR3[1]);
    FUN3(VAR10, -VAR24, VAR3[3]);
    VAR11 = FUN2(VAR25, VAR3[1]);
    FUN3(VAR11, -VAR22, VAR3[3]);
    VAR12 = FUN2(VAR24, VAR3[1]);
    FUN3(VAR12, -VAR25, VAR3[3]);
    if (FUN4(VAR3 + 4))
    {
        VAR5 += VAR18 * VAR3[4] + VAR21 * VAR3[6];
        VAR6 += -VAR18 * VAR3[4] - VAR20 * VAR3[6];
        VAR7 += -VAR18 * VAR3[4] + VAR20 * VAR3[6];
        VAR8 += VAR18 * VAR3[4] - VAR21 * VAR3[6];
        FUN3(VAR9, VAR25, VAR3[5]);
        FUN3(VAR9, VAR24, VAR3[7]);
        FUN3(VAR10, -VAR22, VAR3[5]);
        FUN3(VAR10, -VAR25, VAR3[7]);
        FUN3(VAR11, VAR24, VAR3[5]);
        FUN3(VAR11, VAR23, VAR3[7]);
        FUN3(VAR12, VAR23, VAR3[5]);
        FUN3(VAR12, -VAR22, VAR3[7]);
    }
    VAR3[0] = (VAR5 + VAR9) >> (VAR19 + VAR4);
    VAR3[7] = (VAR5 - VAR9) >> (VAR19 + VAR4);
    VAR3[1] = (VAR6 + VAR10) >> (VAR19 + VAR4);
    VAR3[6] = (VAR6 - VAR10) >> (VAR19 + VAR4);
    VAR3[2] = (VAR7 + VAR11) >> (VAR19 + VAR4);
    VAR3[5] = (VAR7 - VAR11) >> (VAR19 + VAR4);
    VAR3[3] = (VAR8 + VAR12) >> (VAR19 + VAR4);
    VAR3[4] = (VAR8 - VAR12) >> (VAR19 + VAR4);
}