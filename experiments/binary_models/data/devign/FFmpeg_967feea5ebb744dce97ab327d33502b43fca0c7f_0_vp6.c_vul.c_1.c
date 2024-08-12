static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11;
    int VAR12, VAR13;
    int VAR14 = 0;
    int VAR15;
    int VAR16 = VAR4[0] & 1;
    VAR2->VAR17[VAR18]->VAR19 = !(VAR4[0] & 0x80);
    FUN2(VAR2, (VAR4[0] >> 1) & 0x3F);
    if (VAR2->VAR17[VAR18]->VAR19)
    {
        VAR11 = VAR4[1] >> 3;
        if (VAR11 > 8)
            return VAR20;
        VAR2->VAR21 = VAR4[1] & 0x06;
        if (VAR4[1] & 1)
        {
            FUN3(VAR2->VAR22, "");
            return VAR23;
        }
        if (VAR16 || !VAR2->VAR21)
        {
            VAR9 = FUN4(VAR4 + 2) - 2;
            VAR4 += 2;
            VAR5 -= 2;
        }
        VAR12 = VAR4[2];
        VAR13 = VAR4[3];
        if (!VAR12 || !VAR13)
        {
            FUN5(VAR2->VAR22, VAR24, "", VAR13 << 4, VAR12 << 4);
            return VAR20;
        }
        if (!VAR2->VAR25 || 16 * VAR13 != VAR2->VAR22->VAR26 || 16 * VAR12 != VAR2->VAR22->VAR27)
        {
            if (VAR2->VAR22->VAR28 == 0 && FUN6(VAR2->VAR22->VAR29, 16) == 16 * VAR13 && FUN6(VAR2->VAR22->VAR30, 16) == 16 * VAR12)
            {
                VAR2->VAR22->VAR26 = 16 * VAR13;
                VAR2->VAR22->VAR27 = 16 * VAR12;
            }
            else
            {
                VAR15 = FUN7(VAR2->VAR22, 16 * VAR13, 16 * VAR12);
                if (VAR15 < 0)
                    return VAR15;
                if (VAR2->VAR22->VAR28 == 1)
                {
                    VAR2->VAR22->VAR29 -= VAR2->VAR22->VAR31[0] >> 4;
                    VAR2->VAR22->VAR30 -= VAR2->VAR22->VAR31[0] & 0x0F;
                }
            }
            VAR14 = VAR32;
        }
        VAR15 = FUN8(VAR7, VAR4 + 6, VAR5 - 6);
        if (VAR15 < 0)
            return VAR15;
        FUN9(VAR7, 2);
        VAR8 = VAR2->VAR21;
        if (VAR11 < 8)
            VAR10 = 5;
        VAR2->VAR11 = VAR11;
        VAR2->VAR33 = 0;
    }
    else
    {
        if (!VAR2->VAR11 || !VAR2->VAR22->VAR26 || !VAR2->VAR22->VAR27)
            return VAR20;
        if (VAR16 || !VAR2->VAR21)
        {
            VAR9 = FUN4(VAR4 + 1) - 2;
            VAR4 += 2;
            VAR5 -= 2;
        }
        VAR15 = FUN8(VAR7, VAR4 + 1, VAR5 - 1);
        if (VAR15 < 0)
            return VAR15;
        VAR2->VAR33 = FUN10(VAR7);
        if (VAR2->VAR21)
        {
            VAR2->VAR34 = FUN10(VAR7);
            if (VAR2->VAR34)
                FUN10(VAR7);
            if (VAR2->VAR11 > 7)
                VAR8 = FUN10(VAR7);
        }
    }
    if (VAR8)
    {
        if (FUN10(VAR7))
        {
            VAR2->VAR35 = 2;
            VAR2->VAR36 = FUN9(VAR7, 5) << VAR10;
            VAR2->VAR37 = 2 << FUN9(VAR7, 3);
        }
        else if (FUN10(VAR7))
        {
            VAR2->VAR35 = 1;
        }
        else
        {
            VAR2->VAR35 = 0;
        }
        if (VAR2->VAR11 > 7)
            VAR2->VAR38 = FUN9(VAR7, 4);
        else
            VAR2->VAR38 = 16;
    }
    VAR2->VAR39 = FUN10(VAR7);
    VAR2->VAR40 = VAR41;
    if (VAR9)
    {
        VAR4 += VAR9;
        VAR5 -= VAR9;
        if (VAR5 < 0)
        {
            if (VAR2->VAR17[VAR18]->VAR19)
                FUN7(VAR2->VAR22, 0, 0);
            return VAR20;
        }
        if (VAR2->VAR39)
        {
            VAR2->VAR40 = VAR42;
            FUN11(&VAR2->VAR43, VAR4, VAR5 << 3);
        }
        else
        {
            VAR15 = FUN8(&VAR2->VAR44, VAR4, VAR5);
            if (VAR15 < 0)
                return VAR15;
            VAR2->VAR45 = &VAR2->VAR44;
        }
    }
    else
    {
        VAR2->VAR45 = &VAR2->VAR7;
    }
    return VAR14;
}