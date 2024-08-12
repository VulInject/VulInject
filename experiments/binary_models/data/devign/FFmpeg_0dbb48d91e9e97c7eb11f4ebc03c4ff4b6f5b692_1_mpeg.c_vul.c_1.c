static void FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR3]->VAR9;
    VAR13 *VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    uint8_t VAR23[128];
    VAR18 = VAR11->VAR18;
    FUN2("", VAR18, VAR4 / 90000.0);
    VAR14 = VAR23;
    if (((VAR8->VAR24 % VAR8->VAR25) == 0))
    {
        VAR15 = FUN3(VAR2, VAR14, VAR6);
        VAR14 += VAR15;
        if ((VAR8->VAR24 % VAR8->VAR26) == 0)
        {
            VAR15 = FUN4(VAR2, VAR14);
            VAR14 += VAR15;
        }
    }
    VAR15 = VAR14 - VAR23;
    FUN5(&VAR2->VAR27, VAR23, VAR15);
    if (VAR8->VAR28)
    {
        VAR22 = 3;
    }
    else
    {
        VAR22 = 0;
    }
    if (VAR4 != VAR29)
    {
        if (VAR5 != VAR29)
            VAR22 += 5 + 5;
        else
            VAR22 += 5;
    }
    else
    {
        if (!VAR8->VAR28)
            VAR22++;
    }
    VAR16 = VAR8->VAR30 - (VAR15 + 6 + VAR22);
    if (VAR18 < 0xc0)
    {
        VAR17 = VAR31;
        VAR16 -= 4;
    }
    else
    {
        VAR17 = 0x100 + VAR18;
    }
    VAR20 = VAR16 - VAR11->VAR32;
    if (VAR20 < 0)
        VAR20 = 0;
    FUN6(&VAR2->VAR27, VAR17);
    FUN7(&VAR2->VAR27, VAR16 + VAR22);
    for (VAR21 = 0; VAR21 < VAR20; VAR21++)
        FUN8(&VAR2->VAR27, 0xff);
    if (VAR8->VAR28)
    {
        FUN8(&VAR2->VAR27, 0x80);
        if (VAR4 != VAR29)
        {
            if (VAR5 != VAR29)
            {
                FUN8(&VAR2->VAR27, 0xc0);
                FUN8(&VAR2->VAR27, VAR22 - 3);
                FUN9(&VAR2->VAR27, 0x03, VAR4);
                FUN9(&VAR2->VAR27, 0x01, VAR5);
            }
            else
            {
                FUN8(&VAR2->VAR27, 0x80);
                FUN8(&VAR2->VAR27, VAR22 - 3);
                FUN9(&VAR2->VAR27, 0x02, VAR4);
            }
        }
        else
        {
            FUN8(&VAR2->VAR27, 0x00);
            FUN8(&VAR2->VAR27, VAR22 - 3);
        }
    }
    else
    {
        if (VAR4 != VAR29)
        {
            if (VAR5 != VAR29)
            {
                FUN9(&VAR2->VAR27, 0x03, VAR4);
                FUN9(&VAR2->VAR27, 0x01, VAR5);
            }
            else
            {
                FUN9(&VAR2->VAR27, 0x02, VAR4);
            }
        }
        else
        {
            FUN8(&VAR2->VAR27, 0x0f);
        }
    }
    if (VAR17 == VAR31)
    {
        FUN8(&VAR2->VAR27, VAR18);
        if (VAR18 >= 0x80 && VAR18 <= 0xbf)
        {
            FUN8(&VAR2->VAR27, 1);
            FUN8(&VAR2->VAR27, 0);
            FUN8(&VAR2->VAR27, 2);
        }
    }
    FUN5(&VAR2->VAR27, VAR11->VAR23, VAR16 - VAR20);
    FUN10(&VAR2->VAR27);
    VAR19 = VAR11->VAR32 - VAR16;
    if (VAR19 < 0)
        VAR19 = 0;
    memmove(VAR11->VAR23, VAR11->VAR23 + VAR11->VAR32 - VAR19, VAR19);
    VAR11->VAR32 = VAR19;
    VAR8->VAR24++;
    VAR11->VAR24++;
}