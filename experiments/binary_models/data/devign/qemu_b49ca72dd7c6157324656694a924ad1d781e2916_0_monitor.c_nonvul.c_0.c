static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6;
    int VAR7, VAR8;
    uint32_t VAR9, VAR10, VAR11;
    target_phys_addr_t VAR12, VAR13;
    VAR9 = VAR4->VAR14[3] & ~0xfff;
    VAR8 = 0;
    VAR12 = -1;
    for (VAR5 = 0; VAR5 < 1024; VAR5++)
    {
        FUN2(VAR9 + VAR5 * 4, &VAR10, 4);
        VAR10 = FUN3(VAR10);
        VAR13 = VAR5 << 22;
        if (VAR10 & VAR15)
        {
            if ((VAR10 & VAR16) && (VAR4->VAR14[4] & VAR17))
            {
                VAR7 = VAR10 & (VAR18 | VAR19 | VAR15);
                FUN4(VAR2, &VAR12, &VAR8, VAR13, VAR7);
            }
            else
            {
                for (VAR6 = 0; VAR6 < 1024; VAR6++)
                {
                    FUN2((VAR10 & ~0xfff) + VAR6 * 4, &VAR11, 4);
                    VAR11 = FUN3(VAR11);
                    VAR13 = (VAR5 << 22) + (VAR6 << 12);
                    if (VAR11 & VAR15)
                    {
                        VAR7 = VAR11 & (VAR18 | VAR19 | VAR15);
                    }
                    else
                    {
                        VAR7 = 0;
                    }
                    FUN4(VAR2, &VAR12, &VAR8, VAR13, VAR7);
                }
            }
        }
        else
        {
            VAR7 = 0;
            FUN4(VAR2, &VAR12, &VAR8, VAR13, VAR7);
        }
    }
}