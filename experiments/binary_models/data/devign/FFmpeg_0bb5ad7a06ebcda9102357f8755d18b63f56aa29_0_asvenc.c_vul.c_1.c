static inline void FUN1(VAR1 *VAR2, int16_t VAR3[64])
{
    int VAR4;
    int VAR5 = 0;
    for (VAR5 = 63; VAR5 > 3; VAR5--)
    {
        const int VAR6 = VAR7[VAR5];
        if ((VAR3[VAR6] * VAR2->VAR8[VAR6] + (1 << 15)) >> 16)
            break;
    }
    VAR5 >>= 2;
    FUN2(&VAR2->VAR9, 4, VAR5);
    FUN2(&VAR2->VAR9, 8, (VAR3[0] + 32) >> 6);
    VAR3[0] = 0;
    for (VAR4 = 0; VAR4 <= VAR5; VAR4++)
    {
        const int VAR6 = VAR7[4 * VAR4];
        int VAR10 = 0;
        if ((VAR3[VAR6 + 0] = (VAR3[VAR6 + 0] * VAR2->VAR8[VAR6 + 0] + (1 << 15)) >> 16))
            VAR10 |= 8;
        if ((VAR3[VAR6 + 8] = (VAR3[VAR6 + 8] * VAR2->VAR8[VAR6 + 8] + (1 << 15)) >> 16))
            VAR10 |= 4;
        if ((VAR3[VAR6 + 1] = (VAR3[VAR6 + 1] * VAR2->VAR8[VAR6 + 1] + (1 << 15)) >> 16))
            VAR10 |= 2;
        if ((VAR3[VAR6 + 9] = (VAR3[VAR6 + 9] * VAR2->VAR8[VAR6 + 9] + (1 << 15)) >> 16))
            VAR10 |= 1;
        FUN3(VAR4 || VAR10 < 8);
        if (VAR4)
            FUN4(&VAR2->VAR9, VAR11[VAR10][1], VAR11[VAR10][0]);
        else
            FUN4(&VAR2->VAR9, VAR12[VAR10][1], VAR12[VAR10][0]);
        if (VAR10)
        {
            if (VAR10 & 8)
                FUN5(&VAR2->VAR9, VAR3[VAR6 + 0]);
            if (VAR10 & 4)
                FUN5(&VAR2->VAR9, VAR3[VAR6 + 8]);
            if (VAR10 & 2)
                FUN5(&VAR2->VAR9, VAR3[VAR6 + 1]);
            if (VAR10 & 1)
                FUN5(&VAR2->VAR9, VAR3[VAR6 + 9]);
        }
    }
}