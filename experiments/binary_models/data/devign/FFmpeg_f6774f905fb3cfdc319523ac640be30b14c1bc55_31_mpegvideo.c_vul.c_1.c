void FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4.VAR5.VAR3[0];
    const int VAR6 = VAR2->VAR4.VAR5.VAR3[1];
    const int VAR7 = 4;
    VAR2->VAR8[0] = VAR2->VAR9 * (VAR2->VAR10 * 2) - 2 + VAR2->VAR11 * 2;
    VAR2->VAR8[1] = VAR2->VAR9 * (VAR2->VAR10 * 2) - 1 + VAR2->VAR11 * 2;
    VAR2->VAR8[2] = VAR2->VAR9 * (VAR2->VAR10 * 2 + 1) - 2 + VAR2->VAR11 * 2;
    VAR2->VAR8[3] = VAR2->VAR9 * (VAR2->VAR10 * 2 + 1) - 1 + VAR2->VAR11 * 2;
    VAR2->VAR8[4] = VAR2->VAR12 * (VAR2->VAR10 + 1) + VAR2->VAR9 * VAR2->VAR13 * 2 + VAR2->VAR11 - 1;
    VAR2->VAR8[5] = VAR2->VAR12 * (VAR2->VAR10 + VAR2->VAR13 + 2) + VAR2->VAR9 * VAR2->VAR13 * 2 + VAR2->VAR11 - 1;
    VAR2->VAR14[0] = VAR2->VAR4.VAR5.VAR15[0] + ((VAR2->VAR11 - 1) << VAR7);
    VAR2->VAR14[1] = VAR2->VAR4.VAR5.VAR15[1] + ((VAR2->VAR11 - 1) << (VAR7 - VAR2->VAR16));
    VAR2->VAR14[2] = VAR2->VAR4.VAR5.VAR15[2] + ((VAR2->VAR11 - 1) << (VAR7 - VAR2->VAR16));
    if (!(VAR2->VAR17 == VAR18 && VAR2->VAR19->VAR20 && VAR2->VAR21 == VAR22))
    {
        if (VAR2->VAR21 == VAR22)
        {
            VAR2->VAR14[0] += VAR2->VAR10 * VAR3 << VAR7;
            VAR2->VAR14[1] += VAR2->VAR10 * VAR6 << (VAR7 - VAR2->VAR23);
            VAR2->VAR14[2] += VAR2->VAR10 * VAR6 << (VAR7 - VAR2->VAR23);
        }
        else
        {
            VAR2->VAR14[0] += (VAR2->VAR10 >> 1) * VAR3 << VAR7;
            VAR2->VAR14[1] += (VAR2->VAR10 >> 1) * VAR6 << (VAR7 - VAR2->VAR23);
            VAR2->VAR14[2] += (VAR2->VAR10 >> 1) * VAR6 << (VAR7 - VAR2->VAR23);
            assert((VAR2->VAR10 & 1) == (VAR2->VAR21 == VAR24));
        }
    }
}