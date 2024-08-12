static inline void FUN1(VAR1)(VAR2 *VAR3) static inline void FUN1(VAR4)(VAR5 *VAR6, int VAR7, VAR2 *VAR3)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16;
    VAR6[0] = FUN2((VAR8 + VAR12) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR9 + VAR13) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR10 + VAR14) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR11 + VAR15) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR11 - VAR15) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR10 - VAR14) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR9 - VAR13) >> VAR17);
    VAR6 += VAR7;
    VAR6[0] = FUN2((VAR8 - VAR12) >> VAR17);
}
static inline void FUN1(VAR18)(VAR5 *VAR6, int VAR7, VAR2 *VAR3)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16;
    VAR6[0] = FUN2(VAR6[0] + ((VAR8 + VAR12) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR9 + VAR13) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR10 + VAR14) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR11 + VAR15) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR11 - VAR15) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR10 - VAR14) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR9 - VAR13) >> VAR17));
    VAR6 += VAR7;
    VAR6[0] = FUN2(VAR6[0] + ((VAR8 - VAR12) >> VAR17));
}
static inline void FUN1(VAR19)(VAR2 *VAR3)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16;
    VAR3[0] = ((VAR8 + VAR12) >> VAR17);
    VAR3[8] = ((VAR9 + VAR13) >> VAR17);
    VAR3[16] = ((VAR10 + VAR14) >> VAR17);
    VAR3[24] = ((VAR11 + VAR15) >> VAR17);
    VAR3[32] = ((VAR11 - VAR15) >> VAR17);
    VAR3[40] = ((VAR10 - VAR14) >> VAR17);
    VAR3[48] = ((VAR9 - VAR13) >> VAR17);
    VAR3[56] = ((VAR8 - VAR12) >> VAR17);
}