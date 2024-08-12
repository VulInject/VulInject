static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5)
{
    HBitmapIter VAR6;
    uint64_t VAR7 = 0;
    uint64_t VAR8 = VAR5 + 1;
    unsigned long VAR9;
    size_t VAR10;
    FUN2(&VAR6, VAR3, VAR4 << VAR3->VAR11);
    for (;;)
    {
        VAR10 = FUN3(&VAR6, &VAR9);
        if (VAR10 >= (VAR8 >> VAR12))
        {
            break;
        }
        VAR7 += FUN4(VAR9);
    }
    if (VAR10 == (VAR8 >> VAR12))
    {
        int VAR13 = VAR8 & (VAR14 - 1);
        VAR9 &= (1UL << VAR13) - 1;
        VAR7 += FUN4(VAR9);
    }
    return VAR7;
}