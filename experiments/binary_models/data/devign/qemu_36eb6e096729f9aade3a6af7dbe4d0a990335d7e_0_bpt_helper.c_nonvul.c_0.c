void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    target_ulong VAR4 = VAR2->VAR5[7];
    int VAR6;
    if (((VAR4 ^ VAR3) & ~0xff) == 0)
    {
        int VAR7 = ((VAR4 | VAR4 * 2) ^ (VAR3 | VAR3 * 2)) & 0xff;
        for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        {
            if ((VAR7 & (2 << VAR6 * 2)) && !FUN2(VAR3, VAR6))
            {
                FUN3(VAR2, VAR6);
            }
        }
        VAR2->VAR5[7] = VAR3;
        for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        {
            if (VAR7 & (2 << VAR6 * 2) && FUN2(VAR3, VAR6))
            {
                FUN4(VAR2, VAR6);
            }
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        {
            FUN3(VAR2, VAR6);
        }
        VAR2->VAR5[7] = VAR3;
        for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        {
            FUN4(VAR2, VAR6);
        }
    }
}