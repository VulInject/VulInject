static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10 = VAR6->VAR11[0];
    VAR9 *VAR12 = VAR4->VAR13.VAR14->VAR11[0];
    VAR9 *VAR15 = VAR4->VAR16 == VAR17 ? VAR4->VAR18.VAR14->VAR11[0] : VAR4->VAR13.VAR14->VAR11[0];
    int VAR19 = FUN2(FUN3(VAR6->VAR20, VAR4->VAR21, 0), VAR4->VAR21 * VAR4->VAR22);
    if (VAR4->VAR23 == VAR24 && VAR2->VAR25 != VAR26 && VAR2->VAR25 != VAR27)
    {
        FUN4(VAR2, "", FUN5(VAR2->VAR25));
        return VAR28;
    }
    FUN6(&VAR4->VAR13, VAR29, 0);
    if (VAR4->VAR16 == VAR17)
        FUN6(&VAR4->VAR18, VAR29, 0);
    for (VAR8 = 0; VAR8 < VAR4->VAR30; VAR8++)
    {
        memcpy(VAR10, VAR12, VAR19);
        VAR10 += VAR4->VAR31;
        VAR12 += VAR4->VAR31;
    }
    if (VAR4->VAR16 != VAR32 && VAR4->VAR23 == VAR24)
    {
        uint8_t VAR33, VAR34, VAR35, VAR36;
        VAR15 += VAR4->VAR30 * VAR4->VAR31;
        if (VAR2->VAR25 == VAR26)
        {
            VAR33 = 0;
            VAR34 = 1;
            VAR35 = 2;
            VAR36 = 3;
        }
        else
        {
            VAR33 = 3;
            VAR34 = 2;
            VAR35 = 1;
            VAR36 = 0;
        }
        for (VAR8 = VAR4->VAR30; VAR8 < VAR4->VAR30 + VAR4->VAR37; VAR8++)
        {
            VAR7 = VAR4->VAR38 * VAR4->VAR22;
            if (VAR7)
                memcpy(VAR10, VAR12, VAR7);
            for (; VAR7 < (VAR4->VAR38 + VAR4->VAR39) * VAR4->VAR22; VAR7 += VAR4->VAR22)
            {
                uint8_t VAR40 = VAR10[VAR7 + VAR36];
                switch (VAR40)
                {
                case 0:
                    VAR10[VAR7 + VAR33] = VAR15[VAR7 + VAR33];
                    VAR10[VAR7 + VAR34] = VAR15[VAR7 + VAR34];
                    VAR10[VAR7 + VAR35] = VAR15[VAR7 + VAR35];
                    VAR10[VAR7 + VAR36] = 0xff;
                    break;
                case 255:
                    break;
                default:
                    VAR10[VAR7 + VAR33] = FUN7(VAR40 * VAR10[VAR7 + VAR33] + (255 - VAR40) * VAR15[VAR7 + VAR33]);
                    VAR10[VAR7 + VAR34] = FUN7(VAR40 * VAR10[VAR7 + VAR34] + (255 - VAR40) * VAR15[VAR7 + VAR34]);
                    VAR10[VAR7 + VAR35] = FUN7(VAR40 * VAR10[VAR7 + VAR35] + (255 - VAR40) * VAR15[VAR7 + VAR35]);
                    VAR10[VAR7 + VAR36] = 0xff;
                    break;
                }
            }
            if (VAR19 - VAR7)
                memcpy(VAR10 + VAR7, VAR12 + VAR7, VAR19 - VAR7);
            VAR10 += VAR4->VAR31;
            VAR12 += VAR4->VAR31;
            VAR15 += VAR4->VAR31;
        }
    }
    else
    {
        for (VAR8 = VAR4->VAR30; VAR8 < VAR4->VAR30 + VAR4->VAR37; VAR8++)
        {
            int VAR41 = (VAR4->VAR38 + VAR4->VAR39) * VAR4->VAR22;
            int VAR42 = VAR19 - VAR41;
            if (VAR4->VAR38)
                memcpy(VAR10, VAR12, VAR4->VAR38 * VAR4->VAR22);
            if (VAR42)
                memcpy(VAR10 + VAR41, VAR12 + VAR41, VAR42);
            VAR10 += VAR4->VAR31;
            VAR12 += VAR4->VAR31;
        }
    }
    for (VAR8 = VAR4->VAR30 + VAR4->VAR37; VAR8 < VAR4->VAR43; VAR8++)
    {
        memcpy(VAR10, VAR12, VAR19);
        VAR10 += VAR4->VAR31;
        VAR12 += VAR4->VAR31;
    }
    return 0;
}