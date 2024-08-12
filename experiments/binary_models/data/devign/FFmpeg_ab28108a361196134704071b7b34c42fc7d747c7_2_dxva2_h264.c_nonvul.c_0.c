static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, unsigned VAR7, unsigned VAR8)
{
    const VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR10->VAR14[0];
    VAR15 *VAR16 = FUN2(VAR2);
    unsigned VAR17;
    memset(VAR4, 0, sizeof(*VAR4));
    VAR4->VAR18 = VAR7;
    VAR4->VAR19 = VAR8;
    VAR4->VAR20 = 0;
    VAR4->VAR21 = (VAR13->VAR22 >> FUN3(VAR10)) * VAR10->VAR23 + VAR13->VAR24;
    VAR4->VAR25 = 0;
    VAR4->VAR26 = FUN4(&VAR13->VAR27) - 8;
    VAR4->VAR28 = FUN5(VAR13);
    if (VAR13->VAR29)
        VAR4->VAR28 += 5;
    VAR4->VAR30 = VAR13->VAR31.VAR30;
    VAR4->VAR32 = VAR13->VAR31.VAR32;
    if (VAR13->VAR33 > 0)
        VAR4->VAR34 = VAR13->VAR35[0] - 1;
    if (VAR13->VAR33 > 1)
        VAR4->VAR36 = VAR13->VAR35[1] - 1;
    VAR4->VAR37 = VAR13->VAR38 / 2;
    VAR4->VAR39 = VAR13->VAR40 / 2;
    VAR4->VAR41 = 0;
    for (VAR17 = 0; VAR17 < 2; VAR17++)
    {
        unsigned VAR42;
        for (VAR42 = 0; VAR42 < FUN6(VAR4->VAR43[VAR17]); VAR42++)
        {
            if (VAR17 < VAR13->VAR33 && VAR42 < VAR13->VAR35[VAR17])
            {
                const VAR44 *VAR45 = VAR13->VAR46[VAR17][VAR42].VAR47;
                unsigned VAR48;
                unsigned VAR49;
                if (FUN7(VAR2, VAR16) & VAR50)
                    VAR49 = FUN8(VAR2, VAR16, VAR45->VAR51);
                else
                    VAR49 = FUN9(VAR6, FUN8(VAR2, VAR16, VAR45->VAR51));
                FUN10(&VAR4->VAR43[VAR17][VAR42], VAR49, VAR13->VAR46[VAR17][VAR42].VAR52 == VAR53);
                for (VAR48 = 0; VAR48 < 3; VAR48++)
                {
                    int VAR54, VAR55;
                    if (VAR48 == 0 && VAR13->VAR31.VAR56[VAR17])
                    {
                        VAR54 = VAR13->VAR31.VAR57[VAR42][VAR17][0];
                        VAR55 = VAR13->VAR31.VAR57[VAR42][VAR17][1];
                    }
                    else if (VAR48 >= 1 && VAR13->VAR31.VAR58[VAR17])
                    {
                        VAR54 = VAR13->VAR31.VAR59[VAR42][VAR17][VAR48 - 1][0];
                        VAR55 = VAR13->VAR31.VAR59[VAR42][VAR17][VAR48 - 1][1];
                    }
                    else
                    {
                        VAR54 = 1 << (VAR48 == 0 ? VAR13->VAR31.VAR30 : VAR13->VAR31.VAR32);
                        VAR55 = 0;
                    }
                    VAR4->VAR60[VAR17][VAR42][VAR48][0] = VAR54;
                    VAR4->VAR60[VAR17][VAR42][VAR48][1] = VAR55;
                }
            }
            else
            {
                unsigned VAR48;
                VAR4->VAR43[VAR17][VAR42].VAR61 = 0xff;
                for (VAR48 = 0; VAR48 < 3; VAR48++)
                {
                    VAR4->VAR60[VAR17][VAR42][VAR48][0] = 0;
                    VAR4->VAR60[VAR17][VAR42][VAR48][1] = 0;
                }
            }
        }
    }
    VAR4->VAR62 = 0;
    VAR4->VAR63 = VAR13->VAR64 - VAR10->VAR65.VAR66->VAR67;
    VAR4->VAR68 = VAR13->VAR69;
    if (VAR13->VAR28 == VAR70)
        VAR4->VAR71 = VAR13->VAR72;
    VAR4->VAR73 = VAR10->VAR65.VAR66->VAR74 ? VAR13->VAR73 : 0;
    if (VAR13->VAR75 < 2)
        VAR4->VAR76 = 1 - VAR13->VAR75;
    else
        VAR4->VAR76 = VAR13->VAR75;
    VAR4->VAR77 = VAR10->VAR78 - 1;
}