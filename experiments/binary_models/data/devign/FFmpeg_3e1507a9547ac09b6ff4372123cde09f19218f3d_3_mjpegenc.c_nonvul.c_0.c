static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR11 = (VAR5 <= 3 ? 0 : (VAR5 & 1) + 1);
    VAR12 = VAR4[0];
    VAR15 = VAR12 - VAR2->VAR23[VAR11];
    if (VAR5 < 4)
    {
        FUN2(&VAR2->VAR24, VAR15, VAR17->VAR25, VAR17->VAR26);
        VAR20 = VAR17->VAR27;
        VAR22 = VAR17->VAR28;
    }
    else
    {
        FUN2(&VAR2->VAR24, VAR15, VAR17->VAR29, VAR17->VAR30);
        VAR20 = VAR17->VAR31;
        VAR22 = VAR17->VAR32;
    }
    VAR2->VAR23[VAR11] = VAR12;
    VAR13 = 0;
    VAR14 = VAR2->VAR33[VAR5];
    for (VAR9 = 1; VAR9 <= VAR14; VAR9++)
    {
        VAR10 = VAR2->VAR34.VAR35[VAR9];
        VAR15 = VAR4[VAR10];
        if (VAR15 == 0)
        {
            VAR13++;
        }
        else
        {
            while (VAR13 >= 16)
            {
                FUN3(&VAR2->VAR24, VAR20[0xf0], VAR22[0xf0]);
                VAR13 -= 16;
            }
            VAR6 = VAR15;
            if (VAR15 < 0)
            {
                VAR15 = -VAR15;
                VAR6--;
            }
            VAR7 = FUN4(VAR15) + 1;
            VAR8 = (VAR13 << 4) | VAR7;
            FUN3(&VAR2->VAR24, VAR20[VAR8], VAR22[VAR8]);
            FUN5(&VAR2->VAR24, VAR7, VAR6);
            VAR13 = 0;
        }
    }
    if (VAR14 < 63 || VAR13 != 0)
        FUN3(&VAR2->VAR24, VAR20[0], VAR22[0]);
}