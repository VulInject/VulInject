static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15 = 0;
    if (VAR9->VAR16 == 16000)
    {
        fprintf(VAR17, "");
    }
    if (VAR4->VAR18 == VAR19)
    {
        VAR20 *VAR21 = FUN2(sizeof(VAR20));
        VAR21->VAR22 = 0;
        VAR21->VAR23 = VAR9->VAR24;
        VAR21->VAR25 = FUN2(VAR7);
        VAR21->VAR7 = VAR7;
        memcpy(VAR21->VAR25, VAR6, VAR7);
        VAR9->VAR24 = VAR21;
        if (VAR9->VAR26 == 0)
        {
            VAR9->VAR26 = VAR21;
        }
    }
    if (VAR9->VAR27)
    {
    VAR28:
        if ((VAR9->VAR29 - VAR14) >= 4)
        {
            int VAR30 = 0;
            int VAR31 = 0;
            int VAR32 = 0;
            int VAR33 = 0;
            uint8_t VAR34[4];
            for (VAR13 = 0; VAR13 < 4; VAR13++)
            {
                VAR34[VAR13] = VAR9->VAR35[(VAR9->VAR36 + VAR14 + VAR13) % VAR37];
            }
            if (FUN3(VAR34, &VAR30, &VAR33, &VAR31, &VAR32))
            {
                if ((VAR9->VAR29 - VAR14) >= VAR30)
                {
                    VAR14 += VAR30;
                    VAR15 += VAR33;
                    if ((VAR9->VAR38 + VAR15 + VAR9->VAR39) < VAR9->VAR40)
                    {
                        goto VAR28;
                    }
                }
            }
            else
            {
                VAR9->VAR36++;
                VAR9->VAR29--;
                VAR9->VAR36 %= VAR37;
                goto VAR28;
            }
        }
        if ((VAR9->VAR38 + VAR15 + VAR9->VAR39) < VAR9->VAR40)
        {
            return 0;
        }
        if (VAR4->VAR18 == VAR19)
        {
            VAR9->VAR41 = (int)(((double)(VAR9->VAR16) * (double)VAR4->VAR42 * 44100.) / (double)(VAR4->VAR43));
            VAR9->VAR41 -= VAR9->VAR40;
        }
    }
    if (VAR9->VAR41 <= (VAR9->VAR39 / 2))
    {
        if (VAR9->VAR26)
        {
            if (VAR9->VAR44 == VAR45)
            {
                if (VAR9->VAR46 == 0)
                {
                    FUN4(VAR2, VAR47);
                    FUN5(VAR12, VAR48);
                    FUN5(VAR12, 15000);
                    FUN5(VAR12, VAR4->VAR49);
                    FUN5(VAR12, VAR4->VAR50);
                    FUN6(VAR12, 0);
                    FUN6(VAR12, VAR51);
                    FUN7(VAR2);
                    FUN4(VAR2, VAR52);
                    FUN6(VAR12, 0x36);
                    FUN5(VAR12, 1);
                    FUN5(VAR12, VAR48);
                    FUN8(VAR12, 1 << VAR53, 0, 0, 1 << VAR53, 0, 0);
                    FUN5(VAR12, VAR9->VAR46);
                    FUN6(VAR12, '');
                    FUN6(VAR12, '');
                    FUN6(VAR12, '');
                    FUN6(VAR12, '');
                    FUN6(VAR12, '');
                    FUN6(VAR12, 0x00);
                    FUN7(VAR2);
                }
                else
                {
                    FUN4(VAR2, VAR52);
                    FUN6(VAR12, 0x11);
                    FUN5(VAR12, 1);
                    FUN5(VAR12, VAR9->VAR46);
                    FUN7(VAR2);
                }
                for (; (VAR4->VAR54 - VAR9->VAR46) > 0;)
                {
                    FUN4(VAR2, VAR55 | VAR56);
                    FUN5(VAR12, VAR48);
                    FUN5(VAR12, VAR9->VAR46++);
                    FUN9(VAR12, VAR9->VAR26->VAR25, VAR9->VAR26->VAR7);
                    FUN7(VAR2);
                }
            }
            else if (VAR9->VAR44 == VAR57)
            {
                if (VAR9->VAR16 > 0)
                {
                    FUN4(VAR2, VAR58);
                    FUN5(VAR12, VAR59);
                    FUN5(VAR12, 1);
                    FUN7(VAR2);
                    FUN4(VAR2, VAR60);
                    FUN5(VAR12, VAR61);
                    FUN7(VAR2);
                }
                FUN4(VAR2, VAR62 | VAR56);
                FUN5(VAR12, VAR61);
                FUN6(VAR12, 0xff);
                FUN6(VAR12, 0xd8);
                FUN6(VAR12, 0xff);
                FUN6(VAR12, 0xd9);
                FUN9(VAR12, VAR9->VAR26->VAR25, VAR9->VAR26->VAR7);
                FUN7(VAR2);
                FUN4(VAR2, VAR63);
                FUN5(VAR12, VAR59);
                FUN5(VAR12, 1);
                FUN8(VAR12, 20 << VAR53, 0, 0, 20 << VAR53, 0, 0);
                FUN7(VAR2);
            }
            else
            {
            }
            FUN10(VAR9->VAR26->VAR25);
            VAR9->VAR26 = VAR9->VAR26->VAR22;
            if (VAR9->VAR26)
            {
                if (VAR9->VAR26->VAR23)
                {
                    FUN10(VAR9->VAR26->VAR23);
                }
                VAR9->VAR26->VAR23 = 0;
            }
            else
            {
                VAR9->VAR24 = 0;
            }
            VAR9->VAR16++;
        }
    }
    VAR9->VAR40 += VAR9->VAR39;
    if (VAR14 > 0)
    {
        FUN4(VAR2, VAR64 | VAR56);
        FUN5(VAR12, VAR15);
        FUN5(VAR12, 0);
        for (VAR13 = 0; VAR13 < VAR14; VAR13++)
        {
            FUN6(VAR12, VAR9->VAR35[(VAR9->VAR36 + VAR13) % VAR37]);
        }
        FUN7(VAR2);
        VAR9->VAR38 += VAR15;
        VAR9->VAR36 += VAR14;
        VAR9->VAR29 -= VAR14;
        VAR9->VAR36 %= VAR37;
    }
    FUN4(VAR2, VAR65);
    FUN7(VAR2);
    FUN11(&VAR2->VAR12);
    return 0;
}