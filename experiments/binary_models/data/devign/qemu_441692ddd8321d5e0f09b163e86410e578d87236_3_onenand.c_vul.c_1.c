static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR6 = FUN2(512);
    VAR7 = FUN2(512);
    memset(VAR6, 0xff, 512);
    for (; VAR4 > 0; VAR4--, VAR3++)
    {
        if (VAR2->VAR8)
        {
            int VAR9 = VAR2->VAR10 + (VAR3 >> 5);
            if (FUN3(VAR2->VAR8, VAR3, VAR6, 1) < 0)
            {
                goto VAR11;
            }
            if (FUN4(VAR2->VAR8, VAR9, VAR7, 1) < 0)
            {
                goto VAR11;
            }
            memcpy(VAR7 + ((VAR3 & 31) << 4), VAR6, 1 << 4);
            if (FUN3(VAR2->VAR8, VAR9, VAR7, 1) < 0)
            {
                goto VAR11;
            }
        }
        else
        {
            if (VAR3 + 1 > VAR2->VAR10)
            {
                goto VAR11;
            }
            memcpy(VAR2->VAR12 + (VAR3 << 9), VAR6, 512);
            memcpy(VAR2->VAR12 + (VAR2->VAR10 << 9) + (VAR3 << 4), VAR6, 1 << 4);
        }
    }
    FUN5(VAR7);
    FUN5(VAR6);
    return 0;
VAR11:
    FUN5(VAR7);
    FUN5(VAR6);
    return 1;
}