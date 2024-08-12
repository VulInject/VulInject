static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    unsigned int VAR9, VAR10, VAR11, VAR12;
    unsigned long VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    const VAR3 *VAR20, *VAR21;
    VAR21 = VAR4;
    VAR21 += 18;
    VAR13 = FUN2(&VAR21);
    VAR15 = FUN3(&VAR21);
    VAR14 = *VAR21++;
    VAR21 += 3;
    VAR10 = FUN2(&VAR21);
    VAR9 = FUN2(&VAR21);
    if (FUN4(VAR2, VAR9, VAR10))
        return -1;
    VAR12 = ((VAR10 >> 2) + 3) & 0x7ffc;
    VAR11 = ((VAR9 >> 2) + 3) & 0x7ffc;
    VAR16 = FUN3(&VAR21);
    VAR17 = FUN3(&VAR21);
    VAR18 = FUN3(&VAR21);
    VAR21 += 4;
    VAR20 = VAR21;
    if (VAR15 == 0x80)
        return 4;
    if (FUN5(VAR16, VAR17, VAR18) >= VAR5 - 16)
    {
        FUN6(VAR7->VAR2, VAR22, "");
        return -1;
        if (VAR13 & 0x200)
        {
            VAR7->VAR23 = VAR7->VAR24 + 1;
            VAR7->VAR25 = VAR7->VAR24;
        }
        else
        {
            VAR7->VAR23 = VAR7->VAR24;
            VAR7->VAR25 = VAR7->VAR24 + 1;
            VAR21 = VAR4 + 16 + VAR16;
            VAR19 = FUN3(&VAR21);
            if (2LL * VAR19 >= VAR5 - 16 - VAR16)
            {
                FUN6(VAR7->VAR2, VAR22, "");
                return -1;
                FUN7(VAR7, VAR7->VAR23->VAR26, VAR7->VAR25->VAR26, VAR9, VAR10, VAR21 + VAR19 * 2, VAR14, VAR20, VAR21, FUN8(VAR9, 160));
                if (!(VAR7->VAR2->VAR13 & VAR27))
                {
                    VAR21 = VAR4 + 16 + VAR17;
                    VAR19 = FUN3(&VAR21);
                    if (2LL * VAR19 >= VAR5 - 16 - VAR17)
                    {
                        FUN6(VAR7->VAR2, VAR22, "");
                        return -1;
                        FUN7(VAR7, VAR7->VAR23->VAR28, VAR7->VAR25->VAR28, VAR11, VAR12, VAR21 + VAR19 * 2, VAR14, VAR20, VAR21, FUN8(VAR11, 40));
                        VAR21 = VAR4 + 16 + VAR18;
                        VAR19 = FUN3(&VAR21);
                        if (2LL * VAR19 >= VAR5 - 16 - VAR18)
                        {
                            FUN6(VAR7->VAR2, VAR22, "");
                            return -1;
                            FUN7(VAR7, VAR7->VAR23->VAR29, VAR7->VAR25->VAR29, VAR11, VAR12, VAR21 + VAR19 * 2, VAR14, VAR20, VAR21, FUN8(VAR11, 40));
                            return 8;