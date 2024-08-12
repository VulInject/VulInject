static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, unsigned VAR7, unsigned VAR8)
{
    const VAR9 *VAR10 = VAR2->VAR11;
    struct VAR12 *VAR13 = VAR2->VAR14;
    unsigned VAR15;
    memset(VAR4, 0, sizeof(*VAR4));
    VAR4->VAR16 = VAR7;
    VAR4->VAR17 = VAR8;
    VAR4->VAR18 = 0;
    VAR4->VAR19 = (VAR10->VAR20 >> FUN2(VAR10)) * VAR10->VAR21 + VAR10->VAR22;
    VAR4->VAR23 = 0;
    VAR4->VAR24 = FUN3(&VAR10->VAR25);
    VAR4->VAR26 = FUN4(VAR10);
    if (VAR10->VAR27)
        VAR4->VAR26 += 5;
    VAR4->VAR28 = VAR10->VAR28;
    VAR4->VAR29 = VAR10->VAR29;
    if (VAR10->VAR30 > 0)
        VAR4->VAR31 = VAR10->VAR32[0] - 1;
    if (VAR10->VAR30 > 1)
        VAR4->VAR33 = VAR10->VAR32[1] - 1;
    VAR4->VAR34 = VAR10->VAR35 / 2;
    VAR4->VAR36 = VAR10->VAR37 / 2;
    VAR4->VAR38 = 0;
    for (VAR15 = 0; VAR15 < 2; VAR15++)
    {
        unsigned VAR39;
        for (VAR39 = 0; VAR39 < FUN5(VAR4->VAR40[VAR15]); VAR39++)
        {
            if (VAR15 < VAR10->VAR30 && VAR39 < VAR10->VAR32[VAR15])
            {
                const VAR41 *VAR42 = &VAR10->VAR43[VAR15][VAR39];
                unsigned VAR44;
                unsigned VAR45 = FUN6(VAR6, FUN7(VAR13, VAR42));
                FUN8(&VAR4->VAR40[VAR15][VAR39], VAR45, VAR42->VAR46 == VAR47);
                for (VAR44 = 0; VAR44 < 3; VAR44++)
                {
                    int VAR48, VAR49;
                    if (VAR44 == 0 && VAR10->VAR50[VAR15])
                    {
                        VAR48 = VAR10->VAR51[VAR39][VAR15][0];
                        VAR49 = VAR10->VAR51[VAR39][VAR15][1];
                    }
                    else if (VAR44 >= 1 && VAR10->VAR52[VAR15])
                    {
                        VAR48 = VAR10->VAR53[VAR39][VAR15][VAR44 - 1][0];
                        VAR49 = VAR10->VAR53[VAR39][VAR15][VAR44 - 1][1];
                    }
                    else
                    {
                        VAR48 = 1 << (VAR44 == 0 ? VAR10->VAR28 : VAR10->VAR29);
                        VAR49 = 0;
                    }
                    VAR4->VAR54[VAR15][VAR39][VAR44][0] = VAR48;
                    VAR4->VAR54[VAR15][VAR39][VAR44][1] = VAR49;
                }
            }
            else
            {
                unsigned VAR44;
                VAR4->VAR40[VAR15][VAR39].VAR55 = 0xff;
                for (VAR44 = 0; VAR44 < 3; VAR44++)
                {
                    VAR4->VAR54[VAR15][VAR39][VAR44][0] = 0;
                    VAR4->VAR54[VAR15][VAR39][VAR44][1] = 0;
                }
            }
        }
    }
    VAR4->VAR56 = 0;
    VAR4->VAR57 = VAR10->VAR58 - VAR10->VAR59.VAR60;
    VAR4->VAR61 = VAR10->VAR62;
    if (VAR10->VAR26 == VAR63)
        VAR4->VAR64 = VAR10->VAR65;
    VAR4->VAR66 = VAR10->VAR59.VAR67 ? VAR10->VAR66 : 0;
    if (VAR10->VAR68 < 2)
        VAR4->VAR69 = 1 - VAR10->VAR68;
    else
        VAR4->VAR69 = VAR10->VAR68;
    VAR4->VAR70 = VAR10->VAR71 - 1;
}