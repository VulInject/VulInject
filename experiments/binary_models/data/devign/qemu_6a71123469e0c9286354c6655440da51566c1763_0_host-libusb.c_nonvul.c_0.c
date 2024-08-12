static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct VAR5 *VAR6;
    const struct VAR7 *VAR8;
    const struct VAR9 *VAR10;
    struct VAR11 *VAR12;
    bool VAR13 = true;
    bool VAR14 = true;
    uint8_t VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    for (VAR17 = 0;; VAR17++)
    {
        VAR16 = FUN3(VAR2->VAR21, VAR17, &VAR6);
        if (VAR16 != 0)
        {
            break;
        }
        for (VAR18 = 0; VAR18 < VAR6->VAR22; VAR18++)
        {
            for (VAR19 = 0; VAR19 < VAR6->VAR23[VAR18].VAR24; VAR19++)
            {
                VAR8 = &VAR6->VAR23[VAR18].VAR25[VAR19];
                for (VAR20 = 0; VAR20 < VAR8->VAR26; VAR20++)
                {
                    VAR10 = &VAR8->VAR27[VAR20];
                    VAR15 = VAR10->VAR28 & 0x3;
                    switch (VAR15)
                    {
                    case 0x01:
                        VAR14 = false;
                        VAR13 = false;
                        break;
                    case 0x02:
                        VAR16 = FUN4(VAR29, VAR10, &VAR12);
                        if (VAR16 == VAR30)
                        {
                            int VAR31 = VAR12->VAR28 & 0x1f;
                            if (VAR31)
                            {
                                VAR14 = false;
                                VAR13 = false;
                            }
                            FUN5(VAR12);
                        }
                        break;
                    case 0x03:
                        if (VAR10->VAR32 > 64)
                        {
                            VAR14 = false;
                        }
                        if (VAR10->VAR32 > 1024)
                        {
                            VAR13 = false;
                        }
                        break;
                    }
                }
            }
        }
        FUN6(VAR6);
    }
    VAR4->VAR33 = (1 << VAR4->VAR34);
    if (VAR4->VAR34 == VAR35 && VAR13)
    {
        VAR4->VAR33 |= VAR36;
    }
    if (VAR4->VAR34 == VAR35 && VAR14)
    {
        VAR4->VAR33 |= VAR37;
    }
    if (VAR4->VAR34 == VAR38 && VAR14)
    {
        VAR4->VAR33 |= VAR37;
    }
}