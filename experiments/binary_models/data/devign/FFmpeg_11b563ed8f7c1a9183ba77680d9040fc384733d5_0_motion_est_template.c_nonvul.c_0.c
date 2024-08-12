static int FUN1(VAR1 *VAR2, int *VAR3, int VAR4, int VAR5, int VAR6, int const VAR7, int VAR8, int VAR9, int VAR10)
{
    VAR11 *const VAR12 = &VAR2->VAR13;
    me_cmp_func VAR14, VAR15;
    Minima VAR16[VAR17];
    const int VAR18 = FUN2(VAR12->VAR19);
    int VAR20, VAR21;
    LOAD_COMMON LOAD_COMMON2 unsigned VAR22 = VAR12->VAR22;
    FUN3(VAR18 <= VAR17);
    VAR14 = VAR2->VAR23.VAR24[VAR8];
    VAR15 = VAR2->VAR23.VAR24[VAR8 + 1];
    for (VAR21 = VAR20 = 0; VAR20 < VAR25 && VAR21 < VAR17; VAR20++)
    {
        uint32_t VAR26 = VAR27[VAR20];
        VAR26 += (1 << (VAR28 - 1)) + (1 << (2 * VAR28 - 1));
        if ((VAR26 & (-(1 << (2 * VAR28)))) != VAR22)
            continue;
        VAR16[VAR21].VAR29 = VAR30[VAR20];
        VAR16[VAR21].VAR31 = VAR26 & ((1 << VAR28) - 1);
        VAR26 >>= VAR28;
        VAR16[VAR21].VAR32 = VAR26 & ((1 << VAR28) - 1);
        VAR16[VAR21].VAR31 -= (1 << (VAR28 - 1));
        VAR16[VAR21].VAR32 -= (1 << (VAR28 - 1));
        if (VAR16[VAR21].VAR31 > VAR33 || VAR16[VAR21].VAR31 < VAR34 || VAR16[VAR21].VAR32 > VAR35 || VAR16[VAR21].VAR32 < VAR36)
            continue;
        VAR16[VAR21].VAR37 = 0;
        if (VAR16[VAR21].VAR31 || VAR16[VAR21].VAR32)
            VAR16[VAR21].VAR29 += (VAR38[((VAR16[VAR21].VAR31) << VAR39) - VAR40] + VAR38[((VAR16[VAR21].VAR32) << VAR39) - VAR41]) * VAR7;
        VAR21++;
    }
    FUN4(VAR16, VAR21, sizeof(VAR42), VAR43);
    for (; VAR21 < VAR18; VAR21++)
    {
        VAR16[VAR21].VAR29 = 256 * 256 * 256 * 64;
        VAR16[VAR21].VAR37 = 0;
        VAR16[VAR21].VAR31 = VAR16[VAR21].VAR32 = 0;
    }
    for (VAR20 = 0; VAR20 < VAR18; VAR20++)
    {
        const int VAR31 = VAR16[VAR20].VAR31;
        const int VAR32 = VAR16[VAR20].VAR32;
        int VAR44;
        if (VAR16[VAR20].VAR37)
            continue;
        if (VAR31 >= VAR33 || VAR31 <= VAR34 || VAR32 >= VAR35 || VAR32 <= VAR36)
            continue;
        FUN5(VAR31 - 1, VAR32)
        FUN5(VAR31 + 1, VAR32) FUN5(VAR31, VAR32 - 1) FUN5(VAR31, VAR32 + 1) VAR16[VAR20].VAR37 = 1;
    }
    VAR3[0] = VAR16[0].VAR31;
    VAR3[1] = VAR16[0].VAR32;
    VAR4 = VAR16[0].VAR29;
    if (VAR3[0] < VAR33 && VAR3[0] > VAR34 && VAR3[1] < VAR35 && VAR3[1] > VAR36)
    {
        int VAR44;
        FUN6(VAR3[0] - 1, VAR3[1])
        FUN6(VAR3[0] + 1, VAR3[1]) FUN6(VAR3[0], VAR3[1] - 1) FUN6(VAR3[0], VAR3[1] + 1)
    }
    return VAR4;
}