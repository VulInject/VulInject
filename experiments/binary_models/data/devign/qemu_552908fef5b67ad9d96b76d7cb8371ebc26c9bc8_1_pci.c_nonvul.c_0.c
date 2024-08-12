static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR2, VAR2);
    VAR6 *VAR7 = FUN3(VAR5);
    struct
    {
        uint32_t VAR8;
        uint32_t VAR9;
    } VAR10;
    int VAR11, VAR12;
    for (;;)
    {
        VAR11 = VAR7->VAR13 - VAR7->VAR14;
        if (VAR11 <= 0)
            break;
        if (VAR5->VAR15 == 0)
        {
            if (VAR5->VAR16 || (VAR5->VAR17 - VAR5->VAR8) >= VAR18)
                return 0;
            FUN4(&VAR5->VAR19->VAR20, VAR5->VAR17, (VAR21 *)&VAR10, 8);
            VAR5->VAR17 += 8;
            VAR10.VAR8 = FUN5(VAR10.VAR8);
            VAR10.VAR9 = FUN5(VAR10.VAR9);
            VAR12 = VAR10.VAR9 & 0xfffe;
            if (VAR12 == 0)
                VAR12 = 0x10000;
            VAR5->VAR15 = VAR12;
            VAR5->VAR22 = VAR10.VAR8;
            VAR5->VAR16 = (VAR10.VAR9 & 0x80000000);
        }
        if (VAR11 > VAR5->VAR15)
            VAR11 = VAR5->VAR15;
        if (VAR11 > 0)
        {
            if (VAR3)
            {
                FUN6(&VAR5->VAR19->VAR20, VAR5->VAR22, VAR7->VAR23 + VAR7->VAR14, VAR11);
            }
            else
            {
                FUN4(&VAR5->VAR19->VAR20, VAR5->VAR22, VAR7->VAR23 + VAR7->VAR14, VAR11);
            }
            VAR5->VAR22 += VAR11;
            VAR5->VAR15 -= VAR11;
            VAR7->VAR14 += VAR11;
        }
    }
    return 1;
}