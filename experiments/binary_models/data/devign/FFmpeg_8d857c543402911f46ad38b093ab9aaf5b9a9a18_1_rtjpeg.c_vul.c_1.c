static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, const VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11;
    int8_t VAR12;
    uint8_t VAR13 = FUN2(VAR2, 8);
    if (VAR13 == 255)
        VAR9 = FUN2(VAR2, 6);
    memset(VAR4, 0, 64 * sizeof(VAR3));
    while (VAR9)
    {
        VAR12 = FUN3(VAR2, 2);
        if (VAR12 == -2)
            break;
        FUN4(VAR12);
    }
    FUN5(4);
    if (FUN6(VAR2) + (VAR9 << 2) >= VAR2->VAR14)
        while (VAR9)
        {
            VAR12 = FUN3(VAR2, 4);
            if (VAR12 == -8)
                break;
            FUN4(VAR12);
        }
    FUN5(8);
    if (FUN6(VAR2) + (VAR9 << 3) >= VAR2->VAR14)
        while (VAR9)
        {
            VAR12 = FUN3(VAR2, 8);
            FUN4(VAR12);
        }
    FUN4(VAR13);
    return 1;