static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    uint64_t VAR10, VAR11, VAR12;
    uint64_t VAR13, VAR14, VAR15;
    target_phys_addr_t VAR16, VAR17;
    VAR13 = VAR4->VAR18[3] & ~0x1f;
    VAR9 = 0;
    VAR16 = -1;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        FUN2(VAR13 + VAR5 * 8, &VAR10, 8);
        VAR10 = FUN3(VAR10);
        VAR17 = VAR5 << 30;
        if (VAR10 & VAR19)
        {
            VAR14 = VAR10 & 0x3fffffffff000ULL;
            for (VAR6 = 0; VAR6 < 512; VAR6++)
            {
                FUN2(VAR14 + VAR6 * 8, &VAR11, 8);
                VAR11 = FUN3(VAR11);
                VAR17 = (VAR5 << 30) + (VAR6 << 21);
                if (VAR11 & VAR19)
                {
                    if (VAR11 & VAR20)
                    {
                        VAR8 = VAR11 & (VAR21 | VAR22 | VAR19);
                        FUN4(VAR2, &VAR16, &VAR9, VAR17, VAR8);
                    }
                    else
                    {
                        VAR15 = VAR11 & 0x3fffffffff000ULL;
                        for (VAR7 = 0; VAR7 < 512; VAR7++)
                        {
                            FUN2(VAR15 + VAR7 * 8, &VAR12, 8);
                            VAR12 = FUN3(VAR12);
                            VAR17 = (VAR5 << 30) + (VAR6 << 21) + (VAR7 << 12);
                            if (VAR12 & VAR19)
                            {
                                VAR8 = VAR12 & VAR11 & (VAR21 | VAR22 | VAR19);
                            }
                            else
                            {
                                VAR8 = 0;
                            }
                            FUN4(VAR2, &VAR16, &VAR9, VAR17, VAR8);
                        }
                    }
                }
                else
                {
                    VAR8 = 0;
                    FUN4(VAR2, &VAR16, &VAR9, VAR17, VAR8);
                }
            }
        }
        else
        {
            VAR8 = 0;
            FUN4(VAR2, &VAR16, &VAR9, VAR17, VAR8);
        }
    }
    FUN4(VAR2, &VAR16, &VAR9, (VAR23)1 << 32, 0);
}