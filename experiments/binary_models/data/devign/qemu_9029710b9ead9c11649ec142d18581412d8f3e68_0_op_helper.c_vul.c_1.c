VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, uint32_t VAR5, uint32_t VAR6, uint32_t VAR7)
{
    int64_t VAR8 = (VAR9)VAR4;
    int64_t VAR10 = FUN2(VAR5, 0, 32);
    int64_t VAR11 = FUN2(VAR6, 0, 32);
    int64_t VAR12, VAR13;
    int64_t VAR14;
    VAR13 = (VAR10 * VAR11) << VAR7;
    VAR12 = VAR8 - VAR13;
    VAR3->VAR15 = (VAR12 ^ VAR12 * 2u) >> 32;
    VAR3->VAR16 |= VAR3->VAR15;
    VAR14 = (VAR12 ^ VAR8) & (VAR8 ^ VAR13);
    if (VAR13 == 0x8000000000000000LL)
    {
        if (VAR14 >= 0)
        {
            VAR3->VAR17 = (1 << 31);
            VAR3->VAR18 = (1 << 31);
            if (VAR13 >= 0)
            {
                VAR12 = VAR19;
                VAR12 = VAR20;
            }
        }
        if (VAR14 < 0)
        {
            VAR3->VAR17 = (1 << 31);
            VAR3->VAR18 = (1 << 31);
            if (VAR13 < 0)
            {
                VAR12 = VAR19;
                VAR12 = VAR20;
            }
        }
    }
    return (VAR1)VAR12;