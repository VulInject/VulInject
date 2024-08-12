static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, const VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11;
    int8_t VAR12;
    uint8_t VAR13 = FUN2(VAR2, 8);
    if (VAR13 == 255)
        VAR9 = FUN2(VAR2, 6);
    if (FUN3(VAR2) + (VAR9 << 1) >= VAR2->VAR14)
        memset(VAR4, 0, 64 * sizeof(VAR3));
    while (VAR9)
    {
        VAR12 = FUN4(VAR2, 2);
        if (VAR12 == -2)
            break;
        FUN5(VAR12);
    }
    FUN6(4);
    while (VAR9)
    {
        VAR12 = FUN4(VAR2, 4);
        if (VAR12 == -8)
            break;
        FUN5(VAR12);
    }
    FUN6(8);
    if (FUN3(VAR2) + (VAR9 << 3) >= VAR2->VAR14)
        while (VAR9)
        {
            VAR12 = FUN4(VAR2, 8);
            FUN5(VAR12);
        }
    FUN5(VAR13);
    return 1;