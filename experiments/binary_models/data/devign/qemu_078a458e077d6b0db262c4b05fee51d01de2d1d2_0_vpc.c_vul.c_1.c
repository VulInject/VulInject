static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    int64_t VAR8;
    uint32_t VAR9, VAR10;
    int VAR11;
    uint8_t VAR12[VAR6->VAR13];
    if ((VAR4 < 0) || (VAR4 > VAR3->VAR14))
        return -1;
    VAR9 = (VAR4 * 512) / VAR6->VAR15;
    if (VAR6->VAR16[VAR9] != 0xFFFFFFFF)
        return -1;
    VAR6->VAR16[VAR9] = VAR6->VAR17 / 512;
    memset(VAR12, 0xff, VAR6->VAR13);
    FUN2(VAR3->VAR18, VAR6->VAR17, VAR12, VAR6->VAR13);
    VAR6->VAR17 += VAR6->VAR15 + VAR6->VAR13;
    VAR11 = FUN3(VAR3);
    if (VAR11 < 0)
        goto VAR19;
    VAR8 = VAR6->VAR8 + (4 * VAR9);
    VAR10 = FUN4(VAR6->VAR16[VAR9]);
    VAR11 = FUN2(VAR3->VAR18, VAR8, &VAR10, 4);
    if (VAR11 < 0)
        goto VAR19;
    return FUN5(VAR3, VAR4, 0);
VAR19:
    VAR6->VAR17 -= (VAR6->VAR15 + VAR6->VAR13);
    return -1;
}