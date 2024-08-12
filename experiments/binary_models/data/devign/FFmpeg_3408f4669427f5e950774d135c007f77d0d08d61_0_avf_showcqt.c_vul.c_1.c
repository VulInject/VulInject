static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    float *VAR20;
    VAR3 *VAR21 = NULL;
    if (!VAR4)
    {
        while (VAR11->VAR22 < VAR11->VAR23 / 2)
        {
            memset(&VAR11->VAR24[VAR11->VAR23 - VAR11->VAR22], 0, sizeof(*VAR11->VAR24) * VAR11->VAR22);
            VAR15 = FUN2(VAR6, &VAR21);
            if (VAR15 < 0)
                return VAR15;
            VAR14 = VAR11->VAR14 + (VAR11->VAR25.VAR26 + VAR11->VAR27) / VAR11->VAR25.VAR28;
            VAR11->VAR27 = (VAR11->VAR25.VAR26 + VAR11->VAR27) % VAR11->VAR25.VAR28;
            for (VAR16 = 0; VAR16 < (VAR11->VAR23 - VAR14); VAR16++)
                VAR11->VAR24[VAR16] = VAR11->VAR24[VAR16 + VAR14];
            VAR11->VAR22 += VAR14;
            if (VAR21)
                return FUN3(VAR8, VAR21);
        }
        return VAR29;
    }
    VAR13 = VAR4->VAR30;
    VAR20 = (float *)VAR4->VAR31[0];
    while (VAR13)
    {
        VAR17 = VAR4->VAR30 - VAR13;
        VAR18 = VAR11->VAR23 - VAR11->VAR22;
        if (VAR13 >= VAR11->VAR22)
        {
            for (VAR19 = 0; VAR19 < VAR11->VAR22; VAR19++)
            {
                VAR11->VAR24[VAR18 + VAR19].VAR32 = VAR20[2 * (VAR17 + VAR19)];
                VAR11->VAR24[VAR18 + VAR19].VAR33 = VAR20[2 * (VAR17 + VAR19) + 1];
            }
            VAR15 = FUN2(VAR6, &VAR21);
            if (VAR15 < 0)
            {
                FUN4(&VAR4);
                return VAR15;
            }
            VAR13 -= VAR11->VAR22;
            if (VAR21)
            {
                int64_t VAR34 = FUN5(VAR4->VAR34, VAR2->VAR35, FUN6(1, VAR2->VAR36));
                VAR34 += VAR4->VAR30 - VAR13 - VAR11->VAR23 / 2;
                VAR34 = FUN5(VAR34, FUN6(1, VAR2->VAR36), VAR8->VAR35);
                if (FUN7(VAR34 - VAR21->VAR34) > VAR37)
                {
                    FUN8(VAR6, VAR38, "" VAR39 "" VAR39 "", VAR21->VAR34, VAR21->VAR34 * FUN9(VAR8->VAR35), VAR34, VAR34 * FUN9(VAR8->VAR35));
                    VAR21->VAR34 = VAR34;
                    VAR11->VAR40 = VAR34 + VAR41;
                }
                VAR15 = FUN3(VAR8, VAR21);
                if (VAR15 < 0)
                {
                    FUN4(&VAR4);
                    return VAR15;
                }
                VAR21 = NULL;
            }
            VAR14 = VAR11->VAR14 + (VAR11->VAR25.VAR26 + VAR11->VAR27) / VAR11->VAR25.VAR28;
            VAR11->VAR27 = (VAR11->VAR25.VAR26 + VAR11->VAR27) % VAR11->VAR25.VAR28;
            for (VAR19 = 0; VAR19 < VAR11->VAR23 - VAR14; VAR19++)
                VAR11->VAR24[VAR19] = VAR11->VAR24[VAR19 + VAR14];
            VAR11->VAR22 = VAR14;
        }
        else
        {
            for (VAR19 = 0; VAR19 < VAR13; VAR19++)
            {
                VAR11->VAR24[VAR18 + VAR19].VAR32 = VAR20[2 * (VAR17 + VAR19)];
                VAR11->VAR24[VAR18 + VAR19].VAR33 = VAR20[2 * (VAR17 + VAR19) + 1];
            }
            VAR11->VAR22 -= VAR13;
            VAR13 = 0;
        }
    }
    FUN4(&VAR4);
    return 0;
}