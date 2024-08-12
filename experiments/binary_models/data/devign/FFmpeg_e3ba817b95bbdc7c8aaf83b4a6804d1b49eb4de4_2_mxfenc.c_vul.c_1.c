static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8, VAR9, VAR10 = 0;
    int VAR11 = VAR4->VAR12;
    FUN2(VAR2, VAR13, "", VAR4->VAR14);
    if (!VAR4->VAR14 && !VAR4->VAR15)
        return;
    FUN3(VAR7, VAR16, 16);
    if (VAR4->VAR15)
    {
        FUN4(VAR7, 80);
    }
    else
    {
        FUN4(VAR7, 85 + 12 + (VAR2->VAR17 + 1) * 6 + 12 + VAR4->VAR14 * (11 + VAR4->VAR18 * 4));
    }
    FUN5(VAR7, 16, 0x3C0A);
    FUN6(VAR7, VAR19, 0);
    FUN5(VAR7, 8, 0x3F0B);
    FUN7(VAR7, VAR4->VAR20.VAR21);
    FUN7(VAR7, VAR4->VAR20.VAR22);
    FUN5(VAR7, 8, 0x3F0C);
    FUN8(VAR7, VAR4->VAR23);
    FUN5(VAR7, 8, 0x3F0D);
    if (VAR4->VAR15)
        FUN8(VAR7, 0);
    else
        FUN8(VAR7, VAR4->VAR14);
    FUN5(VAR7, 4, 0x3F05);
    FUN7(VAR7, VAR4->VAR15);
    FUN5(VAR7, 4, 0x3F06);
    FUN7(VAR7, 2);
    FUN5(VAR7, 4, 0x3F07);
    FUN7(VAR7, 1);
    if (!VAR4->VAR15)
    {
        FUN5(VAR7, 1, 0x3F08);
        FUN9(VAR7, VAR4->VAR18);
        FUN5(VAR7, 8 + (VAR2->VAR17 + 1) * 6, 0x3F09);
        FUN7(VAR7, VAR2->VAR17 + 1);
        FUN7(VAR7, 6);
        FUN9(VAR7, 0);
        FUN9(VAR7, 0);
        FUN7(VAR7, 0);
        for (VAR8 = 0; VAR8 < VAR2->VAR17; VAR8++)
        {
            VAR24 *VAR25 = VAR2->VAR26[VAR8];
            VAR27 *VAR28 = VAR25->VAR5;
            FUN9(VAR7, VAR28->VAR10);
            if (VAR28->VAR10)
                VAR10 = 1;
            if (VAR8 == 0)
            {
                FUN9(VAR7, 0);
                FUN7(VAR7, VAR29);
            }
            else
            {
                unsigned VAR30 = VAR28->VAR31.VAR32[0] * VAR28->VAR31.VAR33;
                VAR30 += FUN10(VAR30);
                FUN9(VAR7, 1);
                FUN7(VAR7, (VAR8 - 1) * VAR30);
            }
        }
        FUN5(VAR7, 8 + VAR4->VAR14 * (11 + VAR4->VAR18 * 4), 0x3F0A);
        FUN7(VAR7, VAR4->VAR14);
        FUN7(VAR7, 11 + VAR4->VAR18 * 4);
        for (VAR8 = 0; VAR8 < VAR4->VAR14; VAR8++)
        {
            int VAR34 = 0;
            if (!(VAR4->VAR35[VAR8].VAR36 & 0x33))
            {
                VAR4->VAR12 = VAR11;
                VAR11 = VAR8;
            }
            if (VAR10)
            {
                int VAR37 = VAR8 - VAR11;
                if (VAR37 != VAR4->VAR35[VAR8].VAR38)
                {
                    for (VAR9 = VAR11; VAR9 < VAR4->VAR14; VAR9++)
                    {
                        if (VAR37 == VAR4->VAR35[VAR9].VAR38)
                            break;
                    }
                    if (VAR9 == VAR4->VAR14)
                        FUN2(VAR2, VAR39, "");
                    VAR34 = VAR9 - VAR11 - VAR37;
                }
            }
            FUN9(VAR7, VAR34);
            if ((VAR4->VAR35[VAR8].VAR36 & 0x30) == 0x30)
            {
                FUN9(VAR7, VAR4->VAR12 - VAR8);
            }
            else
            {
                FUN9(VAR7, VAR11 - VAR8);
                if ((VAR4->VAR35[VAR8].VAR36 & 0x20) == 0x20)
                    VAR4->VAR12 = VAR11;
            }
            if (!(VAR4->VAR35[VAR8].VAR36 & 0x33) && VAR4->VAR35[VAR8].VAR36 & 0x40 && !VAR34)
                VAR4->VAR35[VAR8].VAR36 |= 0x80;
            FUN9(VAR7, VAR4->VAR35[VAR8].VAR36);
            FUN8(VAR7, VAR4->VAR35[VAR8].VAR40);
            if (VAR2->VAR17 > 1)
                FUN7(VAR7, VAR4->VAR35[VAR8].VAR41);
        }
        VAR4->VAR12 = VAR11 - VAR4->VAR14;
        VAR4->VAR23 += VAR4->VAR14;
        VAR4->VAR14 = 0;
    }
}