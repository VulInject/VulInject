static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int64_t VAR7)
{
    const VAR8 *VAR9, *VAR10;
    VAR8 *VAR11;
    int VAR12;
    if (VAR7 > 61444)
        return -1;
    FUN2(VAR6, VAR7);
    FUN3(VAR2, VAR6->VAR13, VAR7);
    VAR11 = VAR6->VAR13;
    VAR10 = VAR6->VAR13 + VAR7;
    VAR9 = VAR6->VAR13 + 4;
    for (; VAR9 < VAR10;)
    {
        for (VAR12 = 0; VAR12 < VAR4->VAR14->VAR15; VAR12++)
        {
            uint32_t VAR16 = FUN4(&VAR9);
            if (VAR4->VAR14->VAR17 == 24)
                FUN5(&VAR11, (VAR16 >> 4) & 0xffffff);
            else
                FUN6(&VAR11, (VAR16 >> 12) & 0xffff);
        }
        VAR9 += 32 - VAR4->VAR14->VAR15 * 4;
    }
    VAR6->VAR18 = VAR11 - VAR6->VAR13;
    return 0;
}