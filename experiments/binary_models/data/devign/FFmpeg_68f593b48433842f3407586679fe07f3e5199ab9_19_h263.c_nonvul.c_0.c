static inline int FUN1(VAR1 *VAR2)
{
    const int VAR3 = FUN2(&VAR2->VAR4);
    if (VAR2->VAR5 & VAR6)
    {
        return 0;
    }
    if (VAR3 + 8 >= VAR2->VAR4.VAR7)
    {
        int VAR8 = FUN3(&VAR2->VAR4, 8);
        VAR8 |= 0x7F >> (7 - (VAR3 & 7));
        if (VAR8 == 0x7F)
            return 1;
    }
    else
    {
        if (FUN3(&VAR2->VAR4, 16) == VAR9[VAR3 & 7])
        {
            int VAR10;
            GetBitContext VAR4 = VAR2->VAR4;
            FUN4(&VAR2->VAR4, 1);
            FUN5(&VAR2->VAR4);
            for (VAR10 = 0; VAR10 < 32; VAR10++)
            {
                if (FUN6(&VAR2->VAR4))
                    break;
            }
            VAR2->VAR4 = VAR4;
            if (VAR10 >= FUN7(VAR2))
                return 1;
        }
    }
    return 0;
}