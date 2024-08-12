static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6[])
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16 *VAR17, *VAR18;
    int VAR19[48] = {0};
    VAR20 *VAR21 = VAR4->VAR22[VAR5].VAR23;
    VAR20 *VAR24 = VAR4->VAR22[0].VAR23;
    if (VAR5)
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR25->VAR26; VAR8++)
        {
            if (!VAR6[VAR8] || !VAR21[VAR8].VAR27)
                continue;
            VAR17 = &VAR4->VAR25->VAR28[VAR21[VAR8].VAR29];
            VAR18 = &VAR4->VAR25->VAR28[VAR24[VAR8].VAR29];
            for (VAR9 = 0; VAR9 < VAR21[VAR8].VAR27; VAR9++)
            {
                for (VAR10 = 0, VAR13 = 0, VAR12 = 1024; VAR10 < VAR24[VAR8].VAR27; VAR10++)
                {
                    VAR11 = FUN2(VAR17[VAR9].VAR30 - VAR18[VAR10].VAR30);
                    if (VAR11 < VAR12)
                    {
                        VAR12 = VAR11;
                        VAR13 = VAR10;
                    }
                }
                if (VAR12 < 8)
                    VAR19[VAR21[VAR8].VAR29 + VAR9] = VAR13 + VAR24[VAR8].VAR29;
                else if (VAR9 < VAR24[VAR8].VAR27)
                    VAR19[VAR21[VAR8].VAR29 + VAR9] = VAR9 + VAR24[VAR8].VAR29;
                else
                    VAR19[VAR21[VAR8].VAR29 + VAR9] = -1;
            }
        }
    }
    VAR7 = FUN3(VAR2, VAR5 + 1);
    switch (VAR7)
    {
    case 0:
        for (VAR8 = 0; VAR8 < VAR4->VAR25->VAR26; VAR8++)
        {
            if (!VAR6[VAR8] || !VAR21[VAR8].VAR27)
                continue;
            if (VAR4->VAR25->VAR31)
                for (VAR10 = 0; VAR10 < VAR21[VAR8].VAR27; VAR10++)
                    VAR4->VAR25->VAR28[VAR21[VAR8].VAR29 + VAR10].VAR32 = FUN3(VAR2, 6);
            else
                VAR4->VAR25->VAR28[VAR21[VAR8].VAR29].VAR32 = FUN3(VAR2, 6);
        }
        break;
    case 1:
        for (VAR8 = 0; VAR8 < VAR4->VAR25->VAR26; VAR8++)
        {
            if (!VAR6[VAR8] || !VAR21[VAR8].VAR27)
                continue;
            if (VAR4->VAR25->VAR31)
                for (VAR10 = 0; VAR10 < VAR21[VAR8].VAR27; VAR10++)
                    VAR4->VAR25->VAR28[VAR21[VAR8].VAR29 + VAR10].VAR32 = FUN4(VAR2, VAR33[3].VAR34, VAR33[3].VAR35, 1) + 20;
            else
                VAR4->VAR25->VAR28[VAR21[VAR8].VAR29].VAR32 = FUN4(VAR2, VAR33[4].VAR34, VAR33[4].VAR35, 1) + 24;
        }
        break;
    case 2:
        for (VAR8 = 0; VAR8 < VAR4->VAR25->VAR26; VAR8++)
        {
            if (!VAR6[VAR8] || !VAR21[VAR8].VAR27)
                continue;
            for (VAR10 = 0; VAR10 < VAR21[VAR8].VAR27; VAR10++)
            {
                VAR14 = FUN4(VAR2, VAR33[5].VAR34, VAR33[5].VAR35, 1);
                VAR14 = FUN5(VAR14, 5);
                VAR15 = VAR19[VAR21[VAR8].VAR29 + VAR10] >= 0 ? VAR4->VAR25->VAR28[VAR19[VAR21[VAR8].VAR29 + VAR10]].VAR32 : 34;
                VAR4->VAR25->VAR28[VAR21[VAR8].VAR29 + VAR10].VAR32 = (VAR15 + VAR14) & 0x3F;
            }
        }
        break;
    case 3:
        for (VAR8 = 0; VAR8 < VAR4->VAR25->VAR26; VAR8++)
        {
            if (!VAR6[VAR8])
                continue;
            for (VAR10 = 0; VAR10 < VAR21[VAR8].VAR27; VAR10++)
                VAR4->VAR25->VAR28[VAR21[VAR8].VAR29 + VAR10].VAR32 = VAR19[VAR21[VAR8].VAR29 + VAR10] >= 0 ? VAR4->VAR25->VAR28[VAR19[VAR21[VAR8].VAR29 + VAR10]].VAR32 : 32;
        }
        break;
    }
}