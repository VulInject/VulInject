static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, VAR5 *VAR10, int *VAR11)
{
    PutBitContext VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19, VAR20;
    int VAR21 = 0;
    FUN2(&VAR12, VAR6, VAR7 * 8);
    FUN3(&VAR12, 4, VAR8 / 16 - 1);
    FUN3(&VAR12, 12, VAR2->VAR22);
    FUN3(&VAR12, 4, VAR9 / 16 - 1);
    FUN3(&VAR12, 12, VAR2->VAR23);
    FUN4(&VAR12);
    VAR19 = 4;
    VAR13 = VAR2->VAR22 / VAR8;
    VAR15 = VAR2->VAR22 % VAR8;
    VAR14 = VAR2->VAR23 / VAR9;
    VAR16 = VAR2->VAR23 % VAR9;
    for (VAR18 = 0; VAR18 < VAR14 + (VAR16 ? 1 : 0); VAR18++)
    {
        int VAR24 = VAR18 * VAR9;
        int VAR25 = (VAR18 < VAR14) ? VAR9 : VAR16;
        for (VAR17 = 0; VAR17 < VAR13 + (VAR15 ? 1 : 0); VAR17++)
        {
            int VAR26 = VAR17 * VAR8;
            int VAR27 = (VAR17 < VAR13) ? VAR8 : VAR15;
            int VAR28 = VAR29;
            VAR5 *VAR30 = VAR6 + VAR19;
            VAR20 = FUN5(VAR4->VAR31[0], VAR2->VAR32, VAR2->VAR23 - (VAR24 + VAR25 + 1), VAR26, VAR25, VAR27, VAR4->VAR33[0], VAR10);
            if (VAR20 || *VAR11)
            {
                unsigned long VAR34 = 3 * VAR8 * VAR9;
                VAR28 = FUN6(VAR30 + 2, &VAR34, VAR2->VAR32, 3 * VAR27 * VAR25, 9);
                if (VAR28 != VAR29)
                    FUN7(VAR2->VAR35, VAR36, "", VAR17, VAR18);
                FUN8(&VAR30, VAR34);
                VAR19 += VAR34 + 2;
                FUN9(VAR2->VAR35, "", VAR19);
            }
            else
            {
                VAR21++;
                FUN8(&VAR30, 0);
                VAR19 += 2;
            }
        }
    }
    if (VAR21)
        *VAR11 = 0;
    else
        *VAR11 = 1;
    return VAR19;
}