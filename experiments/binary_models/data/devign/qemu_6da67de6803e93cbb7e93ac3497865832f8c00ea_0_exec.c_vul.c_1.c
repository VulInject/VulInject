static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, MemTxAttrs VAR5, const VAR6 *VAR7, int VAR8, hwaddr VAR9, hwaddr VAR10, VAR11 *VAR12)
{
    VAR6 *VAR13;
    uint64_t VAR14;
    MemTxResult VAR15 = VAR16;
    bool VAR17 = false;
    for (;;)
    {
        if (!FUN2(VAR12, true))
        {
            VAR17 |= FUN3(VAR12);
            VAR10 = FUN4(VAR12, VAR10, VAR9);
            switch (VAR10)
            {
            case 8:
                VAR14 = FUN5(VAR7);
                VAR15 |= FUN6(VAR12, VAR9, VAR14, 8, VAR5);
                break;
            case 4:
                VAR14 = FUN7(VAR7);
                VAR15 |= FUN6(VAR12, VAR9, VAR14, 4, VAR5);
                break;
            case 2:
                VAR14 = FUN8(VAR7);
                VAR15 |= FUN6(VAR12, VAR9, VAR14, 2, VAR5);
                break;
            case 1:
                VAR14 = FUN9(VAR7);
                VAR15 |= FUN6(VAR12, VAR9, VAR14, 1, VAR5);
                break;
            default:
                FUN10();
            }
        }
        else
        {
            VAR13 = FUN11(VAR12->VAR18, VAR9);
            memcpy(VAR13, VAR7, VAR10);
            FUN12(VAR12, VAR9, VAR10);
        }
        if (VAR17)
        {
            FUN13();
            VAR17 = false;
        }
        VAR8 -= VAR10;
        VAR7 += VAR10;
        VAR4 += VAR10;
        if (!VAR8)
        {
            break;
        }
        VAR10 = VAR8;
        VAR12 = FUN14(VAR3, VAR4, &VAR9, &VAR10, true);
    }
    return VAR15;
}