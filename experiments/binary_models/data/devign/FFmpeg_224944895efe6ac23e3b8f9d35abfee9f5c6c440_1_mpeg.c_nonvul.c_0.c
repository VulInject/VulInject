static void FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR3]->VAR9;
    VAR13 *VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    int VAR22;
    uint8_t VAR23[128];
    int VAR24 = 0;
    int VAR25 = 0;
    int VAR26;
    int VAR27 = 0;
    VAR18 = VAR11->VAR18;
    FUN2("", VAR18, VAR4 / 90000.0);
    VAR14 = VAR23;
    if (((VAR8->VAR28 % VAR8->VAR29) == 0))
    {
        VAR15 = FUN3(VAR2, VAR14, VAR6);
        VAR14 += VAR15;
        if (VAR8->VAR30)
        {
            if (VAR11->VAR28 == 0)
            {
                VAR15 = FUN4(VAR2, VAR14, VAR18);
                VAR14 += VAR15;
            }
        }
        else
        {
            if ((VAR8->VAR28 % VAR8->VAR31) == 0)
            {
                VAR15 = FUN4(VAR2, VAR14, 0);
                VAR14 += VAR15;
            }
        }
    }
    VAR15 = VAR14 - VAR23;
    FUN5(&VAR2->VAR32, VAR23, VAR15);
    VAR22 = VAR8->VAR22 - VAR15;
    if (VAR8->VAR30 && VAR18 == VAR33)
        VAR24 += 20;
    if ((VAR8->VAR30 && VAR11->VAR28 == 0) || (VAR8->VAR34 && VAR8->VAR28 == 0))
    {
        if (VAR8->VAR34)
            VAR27 = 1;
        VAR25 = VAR22 - VAR24;
    }
    VAR22 -= VAR25 + VAR24;
    if (VAR22 > 0)
    {
        VAR22 -= 6;
        if (VAR8->VAR35)
        {
            VAR21 = 3;
            if (VAR11->VAR28 == 0)
                VAR21 += 3;
            VAR21 += 1;
        }
        else
        {
            VAR21 = 0;
        }
        if (VAR4 != VAR36)
        {
            if (VAR5 != VAR4)
                VAR21 += 5 + 5;
            else
                VAR21 += 5;
        }
        else
        {
            if (!VAR8->VAR35)
                VAR21++;
        }
        VAR16 = VAR22 - VAR21;
        if (VAR18 < 0xc0)
        {
            VAR17 = VAR37;
            VAR16 -= 4;
            if (VAR18 >= 0xa0)
                VAR16 -= 3;
        }
        else
        {
            VAR17 = 0x100 + VAR18;
        }
        VAR19 = VAR16 - VAR11->VAR38;
        if (VAR19 < 0)
            VAR19 = 0;
        if (VAR19 > 16)
        {
            VAR25 += VAR19;
            VAR22 -= VAR19;
            VAR16 -= VAR19;
            VAR19 = 0;
        }
        FUN6(&VAR2->VAR32, VAR17);
        FUN7(&VAR2->VAR32, VAR22);
        if (!VAR8->VAR35)
            for (VAR20 = 0; VAR20 < VAR19; VAR20++)
                FUN8(&VAR2->VAR32, 0xff);
        if (VAR8->VAR35)
        {
            FUN8(&VAR2->VAR32, 0x80);
            VAR26 = 0;
            if (VAR4 != VAR36)
            {
                VAR26 |= 0x80;
                if (VAR5 != VAR4)
                    VAR26 |= 0x40;
            }
            if (VAR11->VAR28 == 0)
                VAR26 |= 0x01;
            FUN8(&VAR2->VAR32, VAR26);
            FUN8(&VAR2->VAR32, VAR21 - 3 + VAR19);
            if (VAR26 & 0x80)
                FUN9(&VAR2->VAR32, (VAR26 & 0x40) ? 0x03 : 0x02, VAR4);
            if (VAR26 & 0x40)
                FUN9(&VAR2->VAR32, 0x01, VAR5);
            if (VAR26 & 0x01)
            {
                FUN8(&VAR2->VAR32, 0x10);
                if (VAR18 == VAR33)
                    FUN7(&VAR2->VAR32, 0x4000 | VAR11->VAR39 / 128);
                else
                    FUN7(&VAR2->VAR32, 0x6000 | VAR11->VAR39 / 1024);
            }
        }
        else
        {
            if (VAR4 != VAR36)
            {
                if (VAR5 != VAR4)
                {
                    FUN9(&VAR2->VAR32, 0x03, VAR4);
                    FUN9(&VAR2->VAR32, 0x01, VAR5);
                }
                else
                {
                    FUN9(&VAR2->VAR32, 0x02, VAR4);
                }
            }
            else
            {
                FUN8(&VAR2->VAR32, 0x0f);
            }
        }
        if (VAR17 == VAR37)
        {
            FUN8(&VAR2->VAR32, VAR18);
            if (VAR18 >= 0xa0)
            {
                FUN8(&VAR2->VAR32, 7);
                FUN7(&VAR2->VAR32, 4);
                FUN8(&VAR2->VAR32, VAR11->VAR40[0]);
                FUN8(&VAR2->VAR32, VAR11->VAR40[1]);
                FUN8(&VAR2->VAR32, VAR11->VAR40[2]);
            }
            else
            {
                FUN8(&VAR2->VAR32, VAR11->VAR41);
                FUN7(&VAR2->VAR32, VAR11->VAR42);
            }
        }
        if (VAR8->VAR35)
        {
            FUN8(&VAR2->VAR32, 0xff);
            for (VAR20 = 0; VAR20 < VAR19; VAR20++)
                FUN8(&VAR2->VAR32, 0xff);
        }
        FUN5(&VAR2->VAR32, VAR11->VAR23, VAR16 - VAR19);
    }
    if (VAR25 > 0)
        FUN10(VAR2, &VAR2->VAR32, VAR25);
    for (VAR20 = 0; VAR20 < VAR24; VAR20++)
        FUN8(&VAR2->VAR32, 0x00);
    FUN11(&VAR2->VAR32);
    VAR8->VAR28++;
    if (!VAR27)
        VAR11->VAR28++;
    VAR11->VAR41 = 0;
    VAR11->VAR42 = 0;
}