static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned char VAR7;
    int VAR8;
    GetBitContext VAR9;
    FUN2(&VAR2->VAR10, 14);
    if (!VAR2->VAR11)
    {
        memcpy(VAR4->VAR12[1], VAR2->VAR13, VAR14);
        VAR2->VAR15 = VAR4->VAR16[0];
    }
    else
    {
        VAR2->VAR15 = VAR4->VAR16[0] >> 1;
        VAR2->VAR17 = VAR2->VAR10;
        FUN2(&VAR2->VAR17, FUN3(&VAR2->VAR10));
    }
    VAR2->VAR18 = VAR2->VAR15 - 8;
    VAR2->VAR19 = (VAR2->VAR20->VAR21 - 8) * VAR4->VAR16[0] + (VAR2->VAR20->VAR22 - 8) * (1 + VAR2->VAR11);
    FUN4(&VAR9, VAR2->VAR23, VAR2->VAR24 * 8);
    for (VAR6 = 0; VAR6 < VAR2->VAR20->VAR21; VAR6 += 8)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR20->VAR22; VAR5 += 8)
        {
            VAR7 = FUN5(&VAR9, 4);
            FUN6(VAR2->VAR20, "", VAR5, VAR6, VAR7, FUN7(&VAR2->VAR10));
            if (!VAR2->VAR11)
            {
                VAR2->VAR25 = VAR4->VAR12[0] + VAR5 + VAR6 * VAR4->VAR16[0];
                VAR8 = VAR26[VAR7](VAR2, VAR4);
            }
            else
            {
                VAR2->VAR25 = VAR4->VAR12[0] + VAR5 * 2 + VAR6 * VAR4->VAR16[0];
                VAR8 = VAR27[VAR7](VAR2, VAR4);
            }
            if (VAR8 != 0)
            {
                FUN8(VAR2->VAR20, VAR28, "", VAR2->VAR20->VAR29, VAR5, VAR6);
            }
        }
    }
    if (FUN9(&VAR2->VAR10) > 1)
    {
        FUN8(VAR2->VAR20, VAR30, "", FUN9(&VAR2->VAR10));
    }