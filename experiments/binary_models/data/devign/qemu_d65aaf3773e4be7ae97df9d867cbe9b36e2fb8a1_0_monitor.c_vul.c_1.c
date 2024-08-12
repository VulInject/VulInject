static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    uint32_t VAR7, VAR8, VAR9;
    VAR4 = FUN2();
    if (!(VAR4->VAR10[0] & VAR11))
    {
        FUN3(VAR2, "");
        return;
    }
    VAR7 = VAR4->VAR10[3] & ~0xfff;
    for (VAR5 = 0; VAR5 < 1024; VAR5++)
    {
        FUN4(VAR7 + VAR5 * 4, (VAR12 *)&VAR8, 4);
        VAR8 = FUN5(VAR8);
        if (VAR8 & VAR13)
        {
            if ((VAR8 & VAR14) && (VAR4->VAR10[4] & VAR15))
            {
                FUN6(VAR2, (VAR5 << 22), VAR8, ~((1 << 20) - 1));
            }
            else
            {
                for (VAR6 = 0; VAR6 < 1024; VAR6++)
                {
                    FUN4((VAR8 & ~0xfff) + VAR6 * 4, (VAR12 *)&VAR9, 4);
                    VAR9 = FUN5(VAR9);
                    if (VAR9 & VAR13)
                    {
                        FUN6(VAR2, (VAR5 << 22) + (VAR6 << 12), VAR9 & ~VAR14, ~0xfff);
                    }
                }
            }
        }
    }
}