static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    GetBitContext VAR8;
    int VAR9 = 0, VAR10 = 0, VAR11 = 0, VAR12 = 0;
    int VAR13 = 0, VAR14 = 0, VAR15 = 0;
    int VAR16 = -1, VAR17 = -1;
    int64_t VAR18 = VAR19, VAR20 = VAR19;
    FUN2(&VAR8, VAR6, VAR7 * 8);
    if (VAR4->VAR21)
        VAR9 = FUN3(&VAR8);
    if (VAR4->VAR22)
        VAR10 = FUN3(&VAR8);
    if (!VAR4->VAR21 && !VAR4->VAR22)
        VAR9 = VAR10 = 1;
    if (VAR4->VAR23 > 0)
        VAR11 = FUN3(&VAR8);
    if (VAR4->VAR24)
        VAR12 = FUN3(&VAR8);
    if (VAR4->VAR25)
        VAR13 = FUN3(&VAR8);
    if (VAR13)
        VAR14 = FUN4(&VAR8, 3);
    if (!VAR12 && (!VAR13 || VAR14 != 0))
    {
        if (VAR4->VAR26)
            FUN5(&VAR8, VAR4->VAR26);
        if (VAR4->VAR27)
            if (FUN3(&VAR8))
                FUN6(&VAR8, VAR4->VAR27);
        if (VAR11)
            FUN5(&VAR8, VAR4->VAR23);
        if (VAR9)
        {
            if (VAR4->VAR28)
                FUN3(&VAR8);
            if (VAR4->VAR29 > 0)
                FUN5(&VAR8, VAR4->VAR29);
            if (VAR4->VAR30)
            {
                VAR16 = FUN3(&VAR8);
                VAR17 = FUN3(&VAR8);
            }
        }
        if (VAR4->VAR31)
            VAR15 = FUN3(&VAR8);
        if (VAR16 == 1)
            VAR18 = FUN7(&VAR8, VAR4->VAR32);
        if (VAR17 == 1)
            VAR20 = FUN7(&VAR8, VAR4->VAR32);
        if (VAR4->VAR33 > 0)
            FUN5(&VAR8, VAR4->VAR33);
        if (VAR15)
            FUN5(&VAR8, VAR4->VAR31);
    }
    if (VAR18 != VAR19)
        VAR2->VAR18 = VAR18;
    if (VAR20 != VAR19)
        VAR2->VAR34 = VAR20;
    if (VAR4->VAR32 && VAR4->VAR35)
        FUN8(VAR2->VAR36, VAR4->VAR32, 1, VAR4->VAR35);
    return (FUN9(&VAR8) + 7) >> 3;
}