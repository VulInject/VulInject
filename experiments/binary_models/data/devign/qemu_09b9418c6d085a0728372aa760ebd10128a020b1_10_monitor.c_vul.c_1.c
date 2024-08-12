static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6, VAR7, VAR8;
    uint32_t VAR9, VAR10, VAR11, VAR12, VAR13;
    VAR4 = FUN2();
    if (!VAR4)
        return;
    if (!(VAR4->VAR14[0] & VAR15))
    {
        FUN3(VAR2, "");
        return;
    }
    VAR9 = VAR4->VAR14[3] & ~0xfff;
    VAR8 = 0;
    VAR12 = -1;
    for (VAR5 = 0; VAR5 < 1024; VAR5++)
    {
        FUN4(VAR9 + VAR5 * 4, (VAR16 *)&VAR10, 4);
        VAR10 = FUN5(VAR10);
        VAR13 = VAR5 << 22;
        if (VAR10 & VAR17)
        {
            if ((VAR10 & VAR18) && (VAR4->VAR14[4] & VAR19))
            {
                VAR7 = VAR10 & (VAR20 | VAR21 | VAR17);
                FUN6(VAR2, &VAR12, &VAR8, VAR13, VAR7);
            }
            else
            {
                for (VAR6 = 0; VAR6 < 1024; VAR6++)
                {
                    FUN4((VAR10 & ~0xfff) + VAR6 * 4, (VAR16 *)&VAR11, 4);
                    VAR11 = FUN5(VAR11);
                    VAR13 = (VAR5 << 22) + (VAR6 << 12);
                    if (VAR11 & VAR17)
                    {
                        VAR7 = VAR11 & (VAR20 | VAR21 | VAR17);
                    }
                    else
                    {
                        VAR7 = 0;
                    }
                    FUN6(VAR2, &VAR12, &VAR8, VAR13, VAR7);
                }
            }
        }
        else
        {
            VAR7 = 0;
            FUN6(VAR2, &VAR12, &VAR8, VAR13, VAR7);
        }
    }
}