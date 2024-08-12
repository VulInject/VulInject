static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    int VAR12;
    while (VAR8--)
    {
        VAR11 = VAR2->VAR13.FUN2(VAR5->VAR14, VAR5->VAR15 - VAR9, VAR5->VAR16 - VAR9, VAR9, FUN3(*VAR7));
        VAR11 = (VAR11 + (1 << (VAR10 - 1))) >> VAR10;
        VAR11 += *VAR7;
        *VAR7++ = VAR11;
        *VAR5->VAR15++ = FUN4(VAR11);
        if (VAR3 < 3980)
        {
            VAR5->VAR16[0] = (VAR11 == 0) ? 0 : ((VAR11 >> 28) & 8) - 4;
            VAR5->VAR16[-4] >>= 1;
            VAR5->VAR16[-8] >>= 1;
        }
        else
        {
            VAR12 = FUN5(VAR11);
            if (VAR12)
                *VAR5->VAR16 = ((VAR11 & (-(1 << 31))) ^ (-(1 << 30))) >> (25 + (VAR12 <= VAR5->VAR17 * 3) + (VAR12 <= VAR5->VAR17 * 4 / 3));
            else
                *VAR5->VAR16 = 0;
            VAR5->VAR17 += (VAR12 - VAR5->VAR17) / 16;
            VAR5->VAR16[-1] >>= 1;
            VAR5->VAR16[-2] >>= 1;
            VAR5->VAR16[-8] >>= 1;
        }
        VAR5->VAR16++;
        if (VAR5->VAR15 == VAR5->VAR18 + VAR19 + (VAR9 * 2))
        {
            memmove(VAR5->VAR18, VAR5->VAR15 - (VAR9 * 2), (VAR9 * 2) * sizeof(*VAR5->VAR18));
            VAR5->VAR15 = VAR5->VAR18 + VAR9 * 2;
            VAR5->VAR16 = VAR5->VAR18 + VAR9;
        }
    }
}