static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    if (VAR2->VAR7 < 3990)
    {
        int VAR8;
        VAR6 = FUN2(VAR2, VAR9, VAR10);
        if (VAR6 == (VAR11 - 1))
        {
            VAR8 = FUN3(VAR2, 5);
            VAR6 = 0;
        }
        else
            VAR8 = (VAR4->VAR12 < 1) ? 0 : VAR4->VAR12 - 1;
        if (VAR8 <= 16)
            VAR5 = FUN3(VAR2, VAR8);
        else if (VAR8 <= 32)
        {
            VAR5 = FUN3(VAR2, 16);
            VAR5 |= (FUN3(VAR2, VAR8 - 16) << 16);
        }
        else
        {
            FUN4(VAR2->VAR13, VAR14, "", VAR8);
            return VAR15;
        }
        VAR5 += VAR6 << VAR8;
    }
    else
    {
        int VAR16, VAR17;
        VAR17 = VAR4->VAR18 >> 5;
        if (VAR17 == 0)
            VAR17 = 1;
        VAR6 = FUN2(VAR2, VAR19, VAR20);
        if (VAR6 == (VAR11 - 1))
        {
            VAR6 = FUN3(VAR2, 16) << 16;
            VAR6 |= FUN3(VAR2, 16);
        }
        if (VAR17 < 0x10000)
        {
            VAR16 = FUN5(VAR2, VAR17);
            FUN6(VAR2, 1, VAR16);
        }
        else
        {
            int VAR21 = VAR17, VAR22;
            int VAR23 = 0;
            while (VAR21 & ~0xFFFF)
            {
                VAR21 >>= 1;
                VAR23++;
            }
            VAR21 = FUN5(VAR2, VAR21 + 1);
            FUN6(VAR2, 1, VAR21);
            VAR22 = FUN5(VAR2, 1 << VAR23);
            FUN6(VAR2, 1, VAR22);
            VAR16 = (VAR21 << VAR23) + VAR22;
        }
        VAR5 = VAR16 + VAR6 * VAR17;
    }
    FUN7(VAR4, VAR5);
    if (VAR5 & 1)
        return (VAR5 >> 1) + 1;
    else
        return -(VAR5 >> 1);
}