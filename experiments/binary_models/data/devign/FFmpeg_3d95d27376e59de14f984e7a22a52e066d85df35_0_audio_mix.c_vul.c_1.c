int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 1;
    int VAR6 = VAR4->VAR7;
    int VAR8, VAR9;
    if (VAR2->VAR10)
    {
        int VAR11 = FUN2(VAR6, VAR2->VAR12);
        if (!(VAR4->VAR13 % VAR2->VAR13) && VAR4->VAR12 >= VAR11)
        {
            VAR6 = VAR11;
            VAR5 = 0;
        }
    }
    FUN3(VAR2->VAR14, "", VAR4->VAR7, VAR2->VAR15, VAR2->VAR16, VAR5 ? VAR2->VAR17 : VAR2->VAR18);
    if (VAR2->VAR19 && VAR2->VAR20)
    {
        VAR21 **VAR22;
        VAR21 *VAR23[VAR24];
        if (VAR2->VAR20 < VAR2->VAR16 || VAR2->VAR19 < VAR2->VAR15)
        {
            for (VAR8 = 0, VAR9 = 0; VAR8 < FUN4(VAR2->VAR15, VAR2->VAR16); VAR8++)
            {
                if (VAR2->VAR25[VAR8] || VAR2->VAR26[VAR8] || VAR2->VAR27[VAR8])
                    continue;
                VAR23[VAR9++] = VAR4->VAR22[VAR8];
            }
            VAR22 = VAR23;
        }
        else
        {
            VAR22 = VAR4->VAR22;
        }
        if (VAR5)
            VAR2->FUN5(VAR22, VAR2->VAR28, VAR6, VAR2->VAR20, VAR2->VAR19);
        else
            VAR2->FUN6(VAR22, VAR2->VAR28, VAR6, VAR2->VAR20, VAR2->VAR19);
    }
    if (VAR2->VAR20 < VAR2->VAR16)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR16; VAR8++)
            if (VAR2->VAR27[VAR8])
                FUN7(&VAR4->VAR22[VAR8], 0, VAR6, 1, VAR2->VAR29);
    }
    FUN8(VAR4, VAR2->VAR16);
    return 0;
}