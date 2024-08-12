static void FUN1(VAR1 *VAR2, int32_t VAR3)
{
    uint32_t VAR4, VAR5, VAR6, VAR7;
    uint32_t VAR8, VAR9, VAR10, VAR11;
    uint64_t VAR12, VAR13;
    v16u8 VAR14;
    v8u16 VAR15;
    v4u32 VAR16;
    VAR14 = FUN2(VAR2 - VAR3);
    VAR15 = FUN3((VAR17)VAR14, (VAR17)VAR14);
    VAR16 = FUN4(VAR15, VAR15);
    VAR4 = FUN5((VAR18)VAR16, 0);
    VAR5 = FUN5((VAR18)VAR16, 1);
    VAR4 += VAR2[0 * VAR3 - 1];
    VAR4 += VAR2[1 * VAR3 - 1];
    VAR4 += VAR2[2 * VAR3 - 1];
    VAR4 += VAR2[3 * VAR3 - 1];
    VAR7 = VAR2[4 * VAR3 - 1];
    VAR7 += VAR2[5 * VAR3 - 1];
    VAR7 += VAR2[6 * VAR3 - 1];
    VAR7 += VAR2[7 * VAR3 - 1];
    VAR4 = (VAR4 + 4) >> 3;
    VAR6 = (VAR5 + VAR7 + 4) >> 3;
    VAR5 = (VAR5 + 2) >> 2;
    VAR7 = (VAR7 + 2) >> 2;
    VAR8 = VAR4 * 0x01010101;
    VAR9 = VAR5 * 0x01010101;
    VAR10 = VAR7 * 0x01010101;
    VAR11 = VAR6 * 0x01010101;
    VAR12 = ((VAR19)VAR9 << 32) | VAR8;
    VAR13 = ((VAR19)VAR11 << 32) | VAR10;
    FUN6(VAR12, VAR12, VAR12, VAR12, VAR2, VAR3);
    VAR2 += (4 * VAR3);
    FUN6(VAR13, VAR13, VAR13, VAR13, VAR2, VAR3);
}