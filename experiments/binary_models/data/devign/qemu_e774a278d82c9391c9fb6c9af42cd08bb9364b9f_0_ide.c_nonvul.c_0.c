static int FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    int64_t VAR8;
    VAR6 = VAR4;
    for (;;)
    {
        VAR5 = VAR2->VAR9 - VAR2->VAR10;
        if (VAR5 == 0)
        {
            VAR7 = VAR2->VAR9 >> 9;
            VAR8 = FUN2(VAR2);
            FUN3(VAR2->VAR11, VAR8, VAR2->VAR12, VAR2->VAR9 >> 9);
            VAR8 += VAR7;
            FUN4(VAR2, VAR8);
            VAR2->VAR13 -= VAR7;
            VAR7 = VAR2->VAR13;
            if (VAR7 == 0)
            {
                VAR2->VAR14 = VAR15 | VAR16;
                if (VAR17 && ((++VAR2->VAR18 % 16) == 0))
                {
                    FUN5(VAR2->VAR19, FUN6(VAR20) + (VAR21 / 1000));
                }
                else
                    FUN7(VAR2);
                return 0;
            }
            if (VAR7 > VAR22)
                VAR7 = VAR22;
            VAR2->VAR10 = 0;
            VAR2->VAR9 = VAR7 * 512;
            VAR5 = VAR2->VAR9;
        }
        if (VAR6 <= 0)
            break;
        if (VAR5 > VAR6)
            VAR5 = VAR6;
        FUN8(VAR3, VAR2->VAR12 + VAR2->VAR10, VAR5);
        VAR2->VAR10 += VAR5;
        VAR6 -= VAR5;
        VAR3 += VAR5;
    }
    return VAR4 - VAR6;
}