static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    FUN2(*VAR14)
    [16], *VAR15, *VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21[3];
    if (VAR2->VAR22 & VAR23)
    {
        if (!VAR2->VAR24)
        {
            VAR14 = VAR25;
            VAR10 = 7;
        }
        else
        {
            VAR14 = VAR26[VAR5->VAR27 & 1];
            VAR10 = 16;
        }
        VAR15 = VAR4->VAR28 + 576;
        VAR16 = VAR5->VAR28 + 576;
        VAR21[0] = 0;
        VAR21[1] = 0;
        VAR21[2] = 0;
        VAR8 = (13 - VAR5->VAR29) * 3 + VAR5->VAR30 - 3;
        for (VAR6 = 12; VAR6 >= VAR5->VAR29; VAR6--)
        {
            if (VAR6 != 11)
                VAR8 -= 3;
            VAR12 = VAR31[VAR2->VAR32][VAR6];
            for (VAR9 = 2; VAR9 >= 0; VAR9--)
            {
                VAR15 -= VAR12;
                VAR16 -= VAR12;
                if (!VAR21[VAR9])
                {
                    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                    {
                        if (VAR16[VAR7] != 0)
                        {
                            VAR21[VAR9] = 1;
                            goto VAR33;
                        }
                    }
                    VAR11 = VAR5->VAR34[VAR8 + VAR9];
                    if (VAR11 >= VAR10)
                        goto VAR33;
                    VAR19 = VAR14[0][VAR11];
                    VAR20 = VAR14[1][VAR11];
                    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                    {
                        VAR17 = VAR15[VAR7];
                        VAR15[VAR7] = FUN3(VAR17, VAR19, VAR35);
                        VAR16[VAR7] = FUN3(VAR17, VAR20, VAR35);
                    }
                }
                else
                {
                VAR33:
                    if (VAR2->VAR22 & VAR36)
                    {
                        for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                        {
                            VAR17 = VAR15[VAR7];
                            VAR18 = VAR16[VAR7];
                            VAR15[VAR7] = FUN3(VAR17 + VAR18, VAR37, VAR35);
                            VAR16[VAR7] = FUN3(VAR17 - VAR18, VAR37, VAR35);
                        }
                    }
                }
            }
        }
        VAR13 = VAR21[0] | VAR21[1] | VAR21[2];
        for (VAR6 = VAR5->VAR30 - 1; VAR6 >= 0; VAR6--)
        {
            VAR12 = VAR38[VAR2->VAR32][VAR6];
            VAR15 -= VAR12;
            VAR16 -= VAR12;
            if (!VAR13)
            {
                for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                {
                    if (VAR16[VAR7] != 0)
                    {
                        VAR13 = 1;
                        goto VAR39;
                    }
                }
                VAR8 = (VAR6 == 21) ? 20 : VAR6;
                VAR11 = VAR5->VAR34[VAR8];
                if (VAR11 >= VAR10)
                    goto VAR39;
                VAR19 = VAR14[0][VAR11];
                VAR20 = VAR14[1][VAR11];
                for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                {
                    VAR17 = VAR15[VAR7];
                    VAR15[VAR7] = FUN3(VAR17, VAR19, VAR35);
                    VAR16[VAR7] = FUN3(VAR17, VAR20, VAR35);
                }
            }
            else
            {
            VAR39:
                if (VAR2->VAR22 & VAR36)
                {
                    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                    {
                        VAR17 = VAR15[VAR7];
                        VAR18 = VAR16[VAR7];
                        VAR15[VAR7] = FUN3(VAR17 + VAR18, VAR37, VAR35);
                        VAR16[VAR7] = FUN3(VAR17 - VAR18, VAR37, VAR35);
                    }
                }
            }
        }
    }
    else if (VAR2->VAR22 & VAR36)
    {
        VAR2->VAR40->FUN4(VAR4->VAR28, VAR5->VAR28, 576);
        VAR15 = VAR4->VAR28;
        VAR16 = VAR5->VAR28;
        for (VAR6 = 0; VAR6 < 576; VAR6++)
        {
            VAR17 = VAR15[VAR6];
            VAR18 = VAR16[VAR6];
            VAR15[VAR6] = VAR17 + VAR18;
            VAR16[VAR6] = VAR17 - VAR18;
        }
    }
}