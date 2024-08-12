static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR6;
    int VAR8, VAR9;
    switch (VAR2->VAR10)
    {
    case VAR11:
    {
        AVPicture VAR12;
        int VAR13[4] = {0};
        int VAR14 = VAR4->VAR15;
        int VAR16 = VAR4->VAR17;
        int VAR18, VAR19;
        if (VAR6->VAR20 == VAR4->VAR20 && VAR6->VAR15 == VAR4->VAR15 && VAR6->VAR17 == VAR4->VAR17)
            return 0;
        FUN2(VAR2, &VAR14, &VAR16, VAR6->VAR21);
        if (!(VAR2->VAR22 & VAR23))
        {
            VAR14 += VAR24 * 2;
            VAR16 += VAR24 * 2;
        }
        do
        {
            FUN3(VAR12.VAR25, VAR2->VAR26, VAR14);
            VAR14 += VAR14 & ~(VAR14 - 1);
            VAR19 = 0;
            for (VAR8 = 0; VAR8 < 4; VAR8++)
                VAR19 |= VAR12.VAR25[VAR8] % VAR6->VAR21[VAR8];
        } while (VAR19);
        VAR18 = FUN4(VAR12.VAR27, VAR2->VAR26, VAR16, NULL, VAR12.VAR25);
        if (VAR18 < 0)
            return -1;
        for (VAR8 = 0; VAR8 < 3 && VAR12.VAR27[VAR8 + 1]; VAR8++)
            VAR13[VAR8] = VAR12.VAR27[VAR8 + 1] - VAR12.VAR27[VAR8];
        VAR13[VAR8] = VAR18 - (VAR12.VAR27[VAR8] - VAR12.VAR27[0]);
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            FUN5(&VAR6->VAR28[VAR8]);
            VAR6->VAR25[VAR8] = VAR12.VAR25[VAR8];
            if (VAR13[VAR8])
            {
                VAR6->VAR28[VAR8] = FUN6(VAR13[VAR8] + 16, NULL);
                if (!VAR6->VAR28[VAR8])
                {
                    VAR9 = FUN7(VAR29);
                    goto VAR30;
                }
            }
        }
        VAR6->VAR20 = VAR4->VAR20;
        VAR6->VAR15 = VAR4->VAR15;
        VAR6->VAR17 = VAR4->VAR17;
        break;
    }
    case VAR31:
    {
        int VAR32 = FUN8(VAR4);
        int VAR33 = FUN9(VAR4->VAR20);
        int VAR34 = VAR33 ? VAR32 : 1;
        if (VAR6->VAR20 == VAR4->VAR20 && VAR6->VAR34 == VAR34 && VAR6->VAR35 == VAR32 && VAR4->VAR36 == VAR6->VAR37)
            return 0;
        FUN5(&VAR6->VAR28[0]);
        VAR9 = FUN10(&VAR6->VAR25[0], VAR32, VAR4->VAR36, VAR4->VAR20, 0);
        if (VAR9 < 0)
            goto VAR30;
        VAR6->VAR28[0] = FUN6(VAR6->VAR25[0], NULL);
        if (!VAR6->VAR28[0])
        {
            VAR9 = FUN7(VAR29);
            goto VAR30;
        }
        VAR6->VAR20 = VAR4->VAR20;
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
        FUN5(&VAR6->VAR28[VAR8]);
    VAR6->VAR20 = -1;
    VAR6->VAR34 = VAR6->VAR35 = VAR6->VAR37 = 0;
    VAR6->VAR15 = VAR6->VAR17 = 0;
    return VAR9;
}