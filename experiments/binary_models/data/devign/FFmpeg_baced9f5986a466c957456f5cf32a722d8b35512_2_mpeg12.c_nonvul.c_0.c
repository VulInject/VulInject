static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    unsigned int VAR4, VAR5;
    int VAR6;
    uint64_t VAR7;
    float VAR8 = 1E10;
    float VAR9 = FUN2(VAR2->VAR10->VAR11);
    int VAR12;
    if (VAR9 == 0.0)
        VAR9 = 1.0;
    if (VAR2->VAR13.VAR14)
    {
        AVRational VAR15 = VAR16[VAR2->VAR17];
        FUN3(VAR2, VAR18);
        FUN4(&VAR2->VAR19, 12, VAR2->VAR20);
        FUN4(&VAR2->VAR19, 12, VAR2->VAR21);
        for (VAR6 = 1; VAR6 < 15; VAR6++)
        {
            float VAR22 = VAR9;
            if (VAR2->VAR23 == VAR24 || VAR6 <= 1)
                VAR22 -= 1.0 / VAR25[VAR6];
            else
                VAR22 -= FUN2(VAR26[VAR6]) * VAR2->VAR21 / VAR2->VAR20;
            VAR22 = FUN5(VAR22);
            if (VAR22 < VAR8)
            {
                VAR8 = VAR22;
                VAR2->VAR27 = VAR6;
            }
        }
        FUN4(&VAR2->VAR19, 4, VAR2->VAR27);
        FUN4(&VAR2->VAR19, 4, VAR2->VAR17);
        if (VAR2->VAR10->VAR28)
        {
            VAR5 = (VAR2->VAR10->VAR28 + 399) / 400;
            if (VAR5 > 0x3ffff && VAR2->VAR23 == VAR24)
                VAR5 = 0x3ffff;
        }
        else
        {
            VAR5 = 0x3FFFF;
        }
        if (VAR2->VAR10->VAR29)
            VAR3 = VAR2->VAR10->VAR29;
        else
            VAR3 = ((20 * VAR2->VAR30) / (1151929 / 2)) * 8 * 1024;
        VAR3 = (VAR3 + 16383) / 16384;
        FUN4(&VAR2->VAR19, 18, VAR5 & 0x3FFFF);
        FUN4(&VAR2->VAR19, 1, 1);
        FUN4(&VAR2->VAR19, 10, VAR3 & 0x3FF);
        VAR12 = VAR2->VAR20 <= 768 && VAR2->VAR21 <= 576 && VAR2->VAR31 * VAR2->VAR32 <= 396 && VAR2->VAR31 * VAR2->VAR32 * VAR15.VAR33 <= VAR15.VAR34 * 396 * 25 && VAR15.VAR33 <= VAR15.VAR34 * 30 && VAR3 <= 20 && VAR5 <= 1856000 / 400 && VAR2->VAR23 == VAR24;
        FUN4(&VAR2->VAR19, 1, VAR12);
        FUN6(&VAR2->VAR19, VAR2->VAR10->VAR35);
        FUN6(&VAR2->VAR19, VAR2->VAR10->VAR36);
        if (VAR2->VAR23 == VAR37)
        {
            FUN3(VAR2, VAR38);
            FUN4(&VAR2->VAR19, 4, 1);
            FUN4(&VAR2->VAR19, 1, 0);
            if (VAR2->VAR10->VAR39 == VAR40)
            {
                FUN4(&VAR2->VAR19, 3, 4);
            }
            else
            {
                FUN4(&VAR2->VAR19, 3, VAR2->VAR10->VAR39);
            }
            if (VAR2->VAR10->VAR41 == VAR42)
            {
                FUN4(&VAR2->VAR19, 4, 8);
            }
            else
            {
                FUN4(&VAR2->VAR19, 4, VAR2->VAR10->VAR41);
            }
            FUN4(&VAR2->VAR19, 1, VAR2->VAR43);
            FUN4(&VAR2->VAR19, 2, 1);
            FUN4(&VAR2->VAR19, 2, 0);
            FUN4(&VAR2->VAR19, 2, 0);
            FUN4(&VAR2->VAR19, 12, VAR5 >> 18);
            FUN4(&VAR2->VAR19, 1, 1);
            FUN4(&VAR2->VAR19, 8, VAR3 >> 10);
            FUN4(&VAR2->VAR19, 1, VAR2->VAR44);
            FUN4(&VAR2->VAR19, 2, 0);
            FUN4(&VAR2->VAR19, 5, 0);
        }
        FUN3(VAR2, VAR45);
        FUN4(&VAR2->VAR19, 1, 0);
        VAR4 = (VAR15.VAR33 + VAR15.VAR34 / 2) / VAR15.VAR34;
        VAR7 = VAR2->VAR46->VAR47;
        VAR2->VAR48 = VAR7;
        FUN4(&VAR2->VAR19, 5, (VAR49)((VAR7 / (VAR4 * 3600)) % 24));
        FUN4(&VAR2->VAR19, 6, (VAR49)((VAR7 / (VAR4 * 60)) % 60));
        FUN4(&VAR2->VAR19, 1, 1);
        FUN4(&VAR2->VAR19, 6, (VAR49)((VAR7 / VAR4) % 60));
        FUN4(&VAR2->VAR19, 6, (VAR49)((VAR7 % VAR4)));
        FUN4(&VAR2->VAR19, 1, !!(VAR2->VAR50 & VAR51));
        FUN4(&VAR2->VAR19, 1, 0);
    }
}