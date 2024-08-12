static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    INTFLOAT VAR13;
    VAR14 *VAR15 = &VAR6->VAR16[0];
    VAR17 *VAR18 = &VAR6->VAR18;
    VAR18->VAR19 = 2 * FUN2(VAR4);
    VAR18->VAR20 = FUN3(VAR4, 3);
    for (VAR8 = 0; VAR8 <= VAR18->VAR20; VAR8++)
    {
        VAR7++;
        VAR18->VAR21[VAR8] = FUN2(VAR4) ? VAR22 : VAR23;
        VAR18->VAR24[VAR8] = FUN3(VAR4, 4);
        if (VAR18->VAR21[VAR8] == VAR22)
        {
            VAR18->VAR25[VAR8] = FUN3(VAR4, 2);
            if (VAR18->VAR25[VAR8] == 3)
                VAR7++;
        }
        else
            VAR18->VAR25[VAR8] = 2;
    }
    VAR18->VAR19 += FUN2(VAR4) || (VAR18->VAR19 >> 1);
    VAR12 = FUN3(VAR4, 1);
    VAR13 = FUN4(VAR26)[FUN3(VAR4, 2)];
    if ((VAR11 = FUN5(VAR2, VAR15, VAR4, 0, 0)))
        return VAR11;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        int VAR27 = 0;
        int VAR28 = 1;
        int VAR29 = 0;
        INTFLOAT VAR30 = FUN6(1.);
        if (VAR8)
        {
            VAR28 = VAR18->VAR19 == VAR31 ? 1 : FUN2(VAR4);
            VAR29 = VAR28 ? FUN7(VAR4, VAR32.VAR33, 7, 3) - 60 : 0;
            VAR30 = FUN8(VAR13, VAR29);
        }
        if (VAR18->VAR19 == VAR31)
        {
            VAR18->VAR29[VAR8][0] = VAR30;
        }
        else
        {
            for (VAR9 = 0; VAR9 < VAR15->VAR34.VAR35; VAR9++)
            {
                for (VAR10 = 0; VAR10 < VAR15->VAR34.VAR36; VAR10++, VAR27++)
                {
                    if (VAR15->VAR37[VAR27] != VAR38)
                    {
                        if (!VAR28)
                        {
                            int VAR39 = FUN7(VAR4, VAR32.VAR33, 7, 3) - 60;
                            if (VAR39)
                            {
                                int VAR40 = 1;
                                VAR39 = VAR29 += VAR39;
                                if (VAR12)
                                {
                                    VAR40 -= 2 * (VAR39 & 0x1);
                                    VAR39 >>= 1;
                                }
                                VAR30 = FUN8(VAR13, VAR39) * VAR40;
                            }
                        }
                        VAR18->VAR29[VAR8][VAR27] = VAR30;
                    }
                }
            }
        }
    }
    return 0;
}