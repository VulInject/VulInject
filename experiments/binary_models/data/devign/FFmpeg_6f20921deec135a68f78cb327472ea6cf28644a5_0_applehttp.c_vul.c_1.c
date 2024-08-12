static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    if ((VAR5 & VAR12) || !VAR7->VAR13[0]->VAR14)
        return FUN2(VAR15);
    VAR4 = FUN3(VAR4, 1, VAR3 >= 0 ? VAR2->VAR16[VAR3]->VAR17.VAR18 : VAR19, VAR5 & VAR20 ? VAR21 : VAR22);
    VAR11 = FUN2(VAR23);
    for (VAR9 = 0; VAR9 < VAR7->VAR24; VAR9++)
    {
        struct VAR25 *VAR26 = VAR7->VAR13[VAR9];
        int64_t VAR27 = 0;
        if (VAR26->VAR28)
        {
            FUN4(VAR26->VAR28);
            VAR26->VAR28 = NULL;
        }
        FUN5(&VAR26->VAR29);
        FUN6(&VAR26->VAR29);
        VAR26->VAR30.VAR31 = 0;
        for (VAR10 = 0; VAR10 < VAR26->VAR32; VAR10++)
        {
            if (VAR4 >= VAR27 && VAR4 < VAR27 + VAR26->VAR33[VAR10]->VAR34)
            {
                VAR26->VAR35 = VAR26->VAR36 + VAR10;
                VAR11 = 0;
                break;
            }
            VAR27 += VAR26->VAR33[VAR10]->VAR34;
        }
    }
    return VAR11;
}