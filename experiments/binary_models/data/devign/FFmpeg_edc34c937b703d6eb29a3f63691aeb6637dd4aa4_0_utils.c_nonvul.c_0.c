static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR6;
    int VAR8, VAR9;
    switch (VAR2->VAR10)
    {
    case VAR11:
    {
        VAR12 *VAR13[4];
        int VAR14[4];
        int VAR15[4] = {0};
        int VAR16 = VAR4->VAR17;
        int VAR18 = VAR4->VAR19;
        int VAR20, VAR21;
        if (VAR6->VAR22 == VAR4->VAR22 && VAR6->VAR17 == VAR4->VAR17 && VAR6->VAR19 == VAR4->VAR19)
            return 0;
        FUN2(VAR2, &VAR16, &VAR18, VAR6->VAR23);
        do
        {
            VAR9 = FUN3(VAR14, VAR2->VAR24, VAR16);
            if (VAR9 < 0)
                return VAR9;
            VAR16 += VAR16 & ~(VAR16 - 1);
            VAR21 = 0;
            for (VAR8 = 0; VAR8 < 4; VAR8++)
                VAR21 |= VAR14[VAR8] % VAR6->VAR23[VAR8];
        } while (VAR21);
        VAR20 = FUN4(VAR13, VAR2->VAR24, VAR18, NULL, VAR14);
        if (VAR20 < 0)
            return -1;
        for (VAR8 = 0; VAR8 < 3 && VAR13[VAR8 + 1]; VAR8++)
            VAR15[VAR8] = VAR13[VAR8 + 1] - VAR13[VAR8];
        VAR15[VAR8] = VAR20 - (VAR13[VAR8] - VAR13[0]);
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            FUN5(&VAR6->VAR25[VAR8]);
            VAR6->VAR14[VAR8] = VAR14[VAR8];
            if (VAR15[VAR8])
            {
                VAR6->VAR25[VAR8] = FUN6(VAR15[VAR8] + 16 + VAR26 - 1, VAR27 ? NULL : VAR28);
                if (!VAR6->VAR25[VAR8])
                {
                    VAR9 = FUN7(VAR29);
                    goto VAR30;
                }
            }
        }
        VAR6->VAR22 = VAR4->VAR22;
        VAR6->VAR17 = VAR4->VAR17;
        VAR6->VAR19 = VAR4->VAR19;
        break;
    }
    case VAR31:
    {
        int VAR32 = FUN8(VAR4);
        int VAR33 = FUN9(VAR4->VAR22);
        int VAR34 = VAR33 ? VAR32 : 1;
        if (VAR6->VAR22 == VAR4->VAR22 && VAR6->VAR34 == VAR34 && VAR6->VAR35 == VAR32 && VAR4->VAR36 == VAR6->VAR37)
            return 0;
        FUN5(&VAR6->VAR25[0]);
        VAR9 = FUN10(&VAR6->VAR14[0], VAR32, VAR4->VAR36, VAR4->VAR22, 0);
        if (VAR9 < 0)
            goto VAR30;
        VAR6->VAR25[0] = FUN6(VAR6->VAR14[0], NULL);
        if (!VAR6->VAR25[0])
        {
            VAR9 = FUN7(VAR29);
            goto VAR30;
        }
        VAR6->VAR22 = VAR4->VAR22;
        VAR6->VAR34 = VAR34;
        VAR6->VAR35 = VAR32;
        VAR6->VAR37 = VAR4->VAR36;
        break;
    }
    default:
        FUN11(0);
    }
    return 0;
VAR30:
    for (VAR8 = 0; VAR8 < 4; VAR8++)
        FUN5(&VAR6->VAR25[VAR8]);
    VAR6->VAR22 = -1;
    VAR6->VAR34 = VAR6->VAR35 = VAR6->VAR37 = 0;
    VAR6->VAR17 = VAR6->VAR19 = 0;
    return VAR9;
}