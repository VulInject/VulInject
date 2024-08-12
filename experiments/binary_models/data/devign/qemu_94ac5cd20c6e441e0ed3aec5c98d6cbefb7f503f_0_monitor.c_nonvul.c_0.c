static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6, VAR7;
    uint64_t VAR8, VAR9, VAR10;
    uint64_t VAR11, VAR12, VAR13;
    VAR11 = VAR4->VAR14[3] & ~0x1f;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        FUN2(VAR11 + VAR5 * 8, &VAR8, 8);
        VAR8 = FUN3(VAR8);
        if (VAR8 & VAR15)
        {
            VAR12 = VAR8 & 0x3fffffffff000ULL;
            for (VAR6 = 0; VAR6 < 512; VAR6++)
            {
                FUN2(VAR12 + VAR6 * 8, &VAR9, 8);
                VAR9 = FUN3(VAR9);
                if (VAR9 & VAR15)
                {
                    if (VAR9 & VAR16)
                    {
                        FUN4(VAR2, (VAR5 << 30) + (VAR6 << 21), VAR9, ~((VAR17)(1 << 20) - 1));
                    }
                    else
                    {
                        VAR13 = VAR9 & 0x3fffffffff000ULL;
                        for (VAR7 = 0; VAR7 < 512; VAR7++)
                        {
                            FUN2(VAR13 + VAR7 * 8, &VAR10, 8);
                            VAR10 = FUN3(VAR10);
                            if (VAR10 & VAR15)
                            {
                                FUN4(VAR2, (VAR5 << 30) + (VAR6 << 21) + (VAR7 << 12), VAR10 & ~VAR16, ~(VAR17)0xfff);
                            }
                        }
                    }
                }
            }
        }
    }
}