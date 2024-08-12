static int FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(&(VAR2->VAR7), VAR3);
    uint32_t VAR8 = FUN3(VAR6);
    uint32_t VAR9 = VAR8;
    VAR10 *VAR11 = FUN4(VAR2, VAR8);
    uint32_t VAR12 = FUN5(VAR6);
    char *VAR13 = FUN6(VAR2->VAR14);
    uint32_t VAR15;
    int VAR16 = 0;
    assert(VAR4 < VAR12);
    assert((VAR4 % VAR2->VAR14) == 0);
    for (VAR15 = VAR2->VAR14; VAR15 < VAR4; VAR15 += VAR2->VAR14)
        VAR8 = FUN7(VAR2, VAR8);
    VAR16 = open(VAR11->VAR17, VAR18 | VAR19 | VAR20, 0666);
    if (VAR16 < 0)
    {
        fprintf(VAR21, "", VAR11->VAR17, strerror(VAR22), VAR22);
        return VAR16;
    }
    if (VAR4 > 0)
        if (FUN8(VAR16, VAR4, VAR23) != VAR4)
            return -3;
    while (VAR4 < VAR12)
    {
        uint32_t VAR24;
        int VAR25 = (VAR12 - VAR4 > VAR2->VAR14 ? VAR2->VAR14 : VAR12 - VAR4);
        int VAR26;
        VAR24 = FUN7(VAR2, VAR8);
        assert((VAR12 - VAR4 == 0 && FUN9(VAR2, VAR8)) || (VAR12 > VAR4 && VAR8 >= 2 && !FUN9(VAR2, VAR8)));
        VAR26 = FUN10(VAR2->VAR27, FUN11(VAR2, VAR8), (VAR28 *)VAR13, (VAR25 + 0x1ff) / 0x200);
        if (VAR26 < 0)
            return VAR26;
        if (write(VAR16, VAR13, VAR25) < 0)
            return -2;
        VAR4 += VAR25;
        VAR8 = VAR24;
    }
    if (FUN12(VAR16, VAR12))
    {
        FUN13("");
        close(VAR16);
        return -4;
    }
    close(VAR16);
    return FUN14(VAR2, VAR9, VAR3);
}