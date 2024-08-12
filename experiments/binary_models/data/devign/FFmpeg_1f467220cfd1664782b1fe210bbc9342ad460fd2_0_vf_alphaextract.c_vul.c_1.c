static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    VAR10 *VAR12 = VAR2->VAR8->VAR13[0]->VAR12;
    if (VAR7->VAR14)
    {
        int VAR15, VAR16;
        VAR17 *VAR18, *VAR19;
        for (VAR16 = VAR3; VAR16 < (VAR3 + VAR4); VAR16++)
        {
            VAR18 = VAR11->VAR20[0] + VAR16 * VAR11->VAR21[0] + VAR7->VAR22[VAR23];
            VAR19 = VAR12->VAR20[0] + VAR16 * VAR12->VAR21[0];
            for (VAR15 = 0; VAR15 < VAR12->VAR24->VAR25; VAR15++)
            {
                *VAR19 = *VAR18;
                VAR19 += 1;
                VAR18 += 4;
            }
        }
    }
    else if (VAR11->VAR21[VAR23] == VAR12->VAR21[VAR26])
    {
        const int VAR21 = VAR11->VAR21[VAR23];
        memcpy(VAR12->VAR20[VAR26] + VAR3 * VAR21, VAR11->VAR20[VAR23] + VAR3 * VAR21, VAR21 * VAR4);
    }
    else
    {
        const int VAR21 = FUN2(VAR12->VAR21[VAR26], VAR11->VAR21[VAR23]);
        int VAR16;
        for (VAR16 = VAR3; VAR16 < (VAR3 + VAR4); VAR16++)
        {
            memcpy(VAR12->VAR20[VAR26] + VAR16 * VAR12->VAR21[VAR26], VAR11->VAR20[VAR23] + VAR16 * VAR11->VAR21[VAR23], VAR21);
        }
    }
    return FUN3(VAR2->VAR8->VAR13[0], VAR3, VAR4, VAR5);
}