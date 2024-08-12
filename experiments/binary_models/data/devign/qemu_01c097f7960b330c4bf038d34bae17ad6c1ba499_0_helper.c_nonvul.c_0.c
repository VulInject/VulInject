static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    hwaddr VAR6;
    target_ulong VAR7;
    int VAR8;
    int VAR9, VAR10 = VAR4->VAR11 & 2;
    int VAR12 = VAR4->VAR11 & 1;
    uint64_t VAR13;
    VAR9 = FUN2(VAR2, VAR5, VAR12, VAR10, &VAR6, &VAR8, &VAR7);
    if (FUN3(VAR2))
    {
        VAR13 = (1 << 11);
        if (VAR9 == 0)
        {
            VAR13 |= VAR6 & ~0xfffULL;
        }
        else
        {
            VAR13 |= 1;
            VAR13 |= (VAR9 & 0x3f) << 1;
        }
    }
    else
    {
        if (VAR9 == 0)
        {
            if (VAR7 == (1 << 24) && FUN4(VAR2, VAR14))
            {
                VAR13 = (VAR6 & 0xff000000) | (1 << 1);
            }
            else
            {
                VAR13 = VAR6 & 0xfffff000;
            }
        }
        else
        {
            VAR13 = ((VAR9 & (1 << 10)) >> 5) | ((VAR9 & (1 << 12)) >> 6) | ((VAR9 & 0xf) << 1) | 1;
        }
    }
    FUN5(VAR2, VAR15, VAR13);
}