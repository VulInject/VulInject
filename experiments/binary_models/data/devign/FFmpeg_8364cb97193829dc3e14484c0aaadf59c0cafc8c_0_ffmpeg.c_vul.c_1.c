static int FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4 = NULL;
    int VAR5, VAR6, VAR7;
    unsigned VAR8, VAR9;
    int64_t VAR10;
    while (1)
    {
        for (VAR5 = 0; VAR5 < VAR11; VAR5++)
        {
            VAR12 *VAR13 = VAR14[VAR5];
            VAR15 *VAR16 = VAR17[VAR13->VAR18];
            int VAR6 = 0;
            if (!VAR13->VAR19 || VAR13->VAR20)
                continue;
            if (!VAR13->VAR4 && !(VAR13->VAR4 = FUN2()))
            {
                return FUN3(VAR21);
            }
            else
                FUN4(VAR13->VAR4);
            VAR4 = VAR13->VAR4;
            while (1)
            {
                AVRational VAR22 = VAR13->VAR19->VAR19->VAR23[0]->VAR24;
                if (VAR13->VAR25->VAR26 == VAR27 && !(VAR13->VAR25->VAR28 & VAR29))
                    VAR6 = FUN5(VAR13->VAR19->VAR19, &VAR2, VAR13->VAR30->VAR31->VAR32);
                else
                    VAR6 = FUN6(VAR13->VAR19->VAR19, &VAR2);
                VAR6 = FUN7(VAR13->VAR19->VAR19, &VAR2, VAR33);
                if (VAR6 < 0)
                {
                    if (VAR6 != FUN3(VAR34) && VAR6 != VAR35)
                    {
                        char VAR36[256];
                        FUN8(VAR6, VAR36, sizeof(VAR36));
                        FUN9(NULL, VAR37, "", VAR36);
                    }
                    break;
                }
                if (VAR13->VAR25->VAR26 == VAR38)
                    VAR4->VAR39 = VAR10 = FUN10(VAR2->VAR39, VAR22, VAR40);
                else if (VAR2->VAR39 != VAR41)
                    VAR4->VAR39 = VAR10 = FUN10(VAR2->VAR39, VAR13->VAR19->VAR19->VAR23[0]->VAR24, VAR13->VAR30->VAR31->VAR24) - FUN10(VAR16->VAR42, VAR40, VAR13->VAR30->VAR31->VAR24);
                if (VAR16->VAR42 && VAR4->VAR39 < VAR16->VAR42)
                {
                    FUN11(VAR2);
                    continue;
                }
                switch (VAR13->VAR19->VAR19->VAR23[0]->VAR26)
                {
                case VAR38:
                    FUN12(VAR4, VAR2);
                    VAR4->VAR39 = VAR10;
                    if (!VAR13->VAR43)
                        VAR13->VAR30->VAR31->VAR44 = VAR2->VAR45->VAR44;
                    FUN13(VAR16->VAR46, VAR13, VAR4, VAR47 ? VAR13->VAR48 : VAR13->VAR30->VAR31->VAR49);
                    break;
                case VAR27:
                    FUN14(VAR4, VAR2);
                    VAR4->VAR39 = VAR10;
                    FUN15(VAR16->VAR46, VAR13, VAR4);
                    break;
                default:
                    FUN16(0);
                }
                FUN11(VAR2);
            }
        }
        VAR7 = VAR8 = VAR9 = 0;
        for (VAR5 = 0; VAR5 < VAR50; VAR5++)
        {
            VAR6 = FUN17(VAR51[VAR5]->VAR52);
            if (!VAR6)
            {
                VAR8++;
            }
            else if (VAR6 == VAR35)
            {
                VAR9++;
            }
            else if (VAR6 != FUN3(VAR34))
            {
                char VAR36[256];
                FUN8(VAR6, VAR36, sizeof(VAR36));
                FUN9(NULL, VAR37, "", VAR36);
                VAR7 = VAR6;
            }
        }
        if (!VAR8)
            break;
    }
    return VAR9 == VAR50 ? VAR35 : VAR7;