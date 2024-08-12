static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7;
    int VAR8 = VAR4->VAR9 + VAR4->VAR10 * VAR4->VAR11;
    int VAR12 = 0;
    int VAR13, VAR14;
    int VAR15 = VAR2->VAR16;
    int VAR17 = 1;
    int VAR18, VAR19;
    int VAR20;
    int VAR21 = 1;
    int VAR22, VAR23;
    int VAR24 = 0;
    int VAR25 = 0, VAR26, VAR27 = 0;
    int VAR28 = 0;
    VAR14 = VAR2->VAR29;
    VAR28 = FUN2(VAR6, VAR2->VAR30->VAR31, VAR32, 2);
    if (VAR28 <= 1)
    {
        VAR2->VAR33[VAR4->VAR9] = 0x3f;
        VAR4->VAR34 = 1;
        VAR4->VAR35.VAR36[1][VAR4->VAR37[0] + VAR2->VAR38][0] = 0;
        VAR4->VAR35.VAR36[1][VAR4->VAR37[0] + VAR2->VAR38][1] = 0;
        VAR4->VAR35.VAR39[VAR8 + VAR2->VAR40] = VAR41;
        FUN3();
        VAR4->VAR35.VAR42[VAR8] = VAR14;
        VAR4->VAR43 = VAR4->VAR44[VAR14];
        VAR4->VAR45 = VAR4->VAR46[VAR14];
        VAR2->VAR4.VAR47 = VAR2->VAR48[VAR8] = FUN4(VAR6);
        VAR17 = VAR28 & 1;
        if (VAR17)
            VAR12 = 1 + FUN2(&VAR2->VAR4.VAR6, VAR2->VAR49->VAR31, VAR50, 2);
        VAR22 = 0;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            VAR2->VAR51 = VAR2->VAR52 = 0;
            VAR2->VAR39[0][VAR4->VAR37[VAR7]] = 1;
            VAR4->VAR53[0][VAR4->VAR37[VAR7]] = 0;
            VAR22 += VAR7 >> 2;
            VAR20 = ((VAR12 >> (5 - VAR7)) & 1);
            if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR54)
                VAR2->VAR51 = VAR2->VAR39[0][VAR4->VAR37[VAR7] - VAR4->VAR55[VAR7]];
            if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR9)
                VAR2->VAR52 = VAR2->VAR39[0][VAR4->VAR37[VAR7] - 1];
            FUN5(VAR2, VAR4->VAR56[VAR7], VAR7, VAR20, VAR14, (VAR7 & 4) ? VAR2->VAR57 : VAR2->VAR58);
            if ((VAR7 > 3) && (VAR4->VAR59 & VAR60))
                continue;
            VAR2->VAR61.FUN6(VAR4->VAR56[VAR7]);
            VAR23 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR62);
            VAR4->VAR63.FUN7(VAR4->VAR56[VAR7], VAR4->VAR64[VAR22] + VAR23, (VAR7 & 4) ? VAR4->VAR65 : VAR4->VAR62);
        }
    }
    else
    {
        VAR4->VAR34 = VAR2->VAR33[VAR4->VAR9] = 0;
        VAR4->VAR35.VAR39[VAR8 + VAR2->VAR40] = VAR66;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
            VAR2->VAR39[0][VAR4->VAR37[VAR7]] = 0;
        if (VAR28 <= 5)
        {
            VAR18 = VAR19 = VAR24 = 0;
            if (VAR28 & 1)
            {
                FUN8(VAR2, &VAR18, &VAR19, &VAR24);
            }
            FUN9(VAR2, 0, VAR18, VAR19, 1, VAR2->VAR67, VAR2->VAR68, VAR2->VAR39[0], VAR24, 0);
            FUN10(VAR2, 0);
            VAR17 = !(VAR28 & 2);
        }
        else
        {
            VAR2->VAR69 = FUN2(VAR6, VAR2->VAR70->VAR31, VAR71, 1);
            for (VAR7 = 0; VAR7 < 4; VAR7++)
            {
                VAR18 = VAR19 = VAR24 = 0;
                if (VAR2->VAR69 & (8 >> VAR7))
                    FUN8(VAR2, &VAR18, &VAR19, &VAR24);
                FUN9(VAR2, VAR7, VAR18, VAR19, 0, VAR2->VAR67, VAR2->VAR68, VAR2->VAR39[0], VAR24, 0);
                FUN11(VAR2, VAR7, 0, 0);
            }
            FUN12(VAR2, 0);
            VAR17 = VAR28 & 1;
        }
        if (VAR17)
            VAR12 = 1 + FUN2(&VAR2->VAR4.VAR6, VAR2->VAR49->VAR31, VAR72, 2);
        if (VAR12)
        {
            FUN3();
        }
        VAR4->VAR35.VAR42[VAR8] = VAR14;
        if (!VAR2->VAR73 && VAR12)
        {
            VAR15 = FUN2(VAR6, VAR74[VAR2->VAR75].VAR31, VAR76, 2);
        }
        VAR22 = 0;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            VAR4->VAR53[0][VAR4->VAR37[VAR7]] = 0;
            VAR22 += VAR7 >> 2;
            VAR20 = ((VAR12 >> (5 - VAR7)) & 1);
            VAR23 = (VAR7 & 4) ? 0 : (VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR62;
            if (VAR20)
            {
                VAR26 = FUN13(VAR2, VAR4->VAR56[VAR7], VAR7, VAR14, VAR15, VAR21, VAR4->VAR64[VAR22] + VAR23, (VAR7 & 4) ? VAR4->VAR65 : VAR4->VAR62, (VAR7 & 4) && (VAR4->VAR59 & VAR60), &VAR27);
                VAR25 |= VAR26 << (VAR7 << 2);
                if (!VAR2->VAR73 && VAR15 < 8)
                    VAR15 = -1;
                VAR21 = 0;
            }
        }
    }
    if (VAR4->VAR9 == VAR4->VAR77 - 1)
        memmove(VAR2->VAR78, VAR2->VAR33, sizeof(VAR2->VAR78[0]) * VAR4->VAR11);
    return 0;
}