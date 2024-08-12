static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    float VAR13;
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
            VAR18->VAR25[VAR8] = 1;
    }
    VAR18->VAR19 += FUN2(VAR4);
    if (VAR18->VAR19 == 2)
    {
        FUN4(VAR2->VAR26, VAR27, "");
        memset(VAR18, 0, sizeof(VAR17));
        return -1;
    }
    VAR12 = FUN3(VAR4, 1);
    VAR13 = FUN5(2., FUN5(2., (int)FUN3(VAR4, 2) - 3));
    if ((VAR11 = FUN6(VAR2, VAR15, VAR4, 0, 0)))
        return VAR11;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        int VAR28 = 0;
        int VAR29 = 1;
        int VAR30 = 0;
        float VAR31 = 1.;
        if (VAR8)
        {
            VAR29 = VAR18->VAR19 == VAR32 ? 1 : FUN2(VAR4);
            VAR30 = VAR29 ? FUN7(VAR4, VAR33.VAR34, 7, 3) - 60 : 0;
            VAR31 = FUN5(VAR13, VAR30);
        }
        for (VAR9 = 0; VAR9 < VAR15->VAR35.VAR36; VAR9++)
        {
            for (VAR10 = 0; VAR10 < VAR15->VAR35.VAR37; VAR10++, VAR28++)
            {
                if (VAR15->VAR38[VAR28] != VAR39)
                {
                    if (!VAR29)
                    {
                        int VAR40 = FUN7(VAR4, VAR33.VAR34, 7, 3) - 60;
                        if (VAR40)
                        {
                            int VAR41 = 1;
                            if (VAR12)
                            {
                                VAR41 -= 2 * (VAR40 & 0x1);
                                VAR40 >>= 1;
                            }
                            VAR30 += VAR40;
                            VAR31 = FUN5(VAR13, VAR30) * VAR41;
                        }
                    }
                    VAR18->VAR30[VAR8][VAR28] = VAR31;
                }
            }
        }
    }
    return 0;
}