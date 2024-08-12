static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6;
    uint32_t VAR7, VAR8, VAR9;
    VAR7 = VAR4->VAR10[3] & ~0xfff;
    for (VAR5 = 0; VAR5 < 1024; VAR5++)
    {
        FUN2(VAR7 + VAR5 * 4, &VAR8, 4);
        VAR8 = FUN3(VAR8);
        if (VAR8 & VAR11)
        {
            if ((VAR8 & VAR12) && (VAR4->VAR10[4] & VAR13))
            {
                FUN4(VAR2, (VAR5 << 22), VAR8, ~((1 << 21) - 1));
            }
            else
            {
                for (VAR6 = 0; VAR6 < 1024; VAR6++)
                {
                    FUN2((VAR8 & ~0xfff) + VAR6 * 4, &VAR9, 4);
                    VAR9 = FUN3(VAR9);
                    if (VAR9 & VAR11)
                    {
                        FUN4(VAR2, (VAR5 << 22) + (VAR6 << 12), VAR9 & ~VAR12, ~0xfff);
                    }
                }
            }
        }
    }
}