static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    char *VAR6, *VAR7 = NULL;
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        VAR9 *VAR10 = VAR4->VAR11[VAR5];
        VAR12 *VAR13 = VAR10->VAR14;
        VAR15 *VAR16 = FUN2(sizeof(*VAR16));
        char *VAR17 = NULL;
        if (!VAR16)
            FUN3(1);
        FUN4(VAR18, VAR19);
        VAR18[VAR19 - 1] = VAR16;
        VAR16->VAR10 = VAR10;
        VAR16->VAR20 = VAR21;
        VAR16->VAR22 = 1;
        VAR10->VAR22 = VAR23;
        VAR16->VAR24 = 1.0;
        FUN5(VAR24, VAR25, VAR16->VAR24, VAR4, VAR10);
        FUN5(VAR26, VAR27, VAR7, VAR4, VAR10);
        if (VAR7)
        {
            uint32_t VAR28 = FUN6(VAR7, &VAR6, 0);
            if (*VAR6)
                VAR28 = FUN7(VAR7);
            VAR10->VAR14->VAR7 = VAR28;
        }
        VAR16->VAR13 = FUN8(VAR2, VAR4, VAR10);
        VAR16->VAR29 = FUN9(VAR2->VAR30->VAR31, VAR16->VAR10->VAR14->VAR32, VAR4, VAR10, VAR16->VAR13);
        VAR16->VAR33 = -1;
        FUN5(VAR33, VAR5, VAR16->VAR33, VAR4, VAR10);
        VAR16->VAR34 = VAR35;
        switch (VAR13->VAR36)
        {
        case VAR37:
            if (!VAR16->VAR13)
                VAR16->VAR13 = FUN10(VAR13->VAR32);
            if (VAR13->VAR38)
            {
                VAR13->VAR39 |= VAR40;
            }
            VAR16->VAR41 = VAR13->VAR42;
            VAR16->VAR43 = VAR13->VAR44;
            VAR16->VAR45 = VAR13->VAR46;
            FUN5(VAR47, VAR27, VAR17, VAR4, VAR10);
            if (VAR17 && FUN11(&VAR16->VAR17, VAR17) < 0)
            {
                FUN12(NULL, VAR48, "", VAR17);
                FUN3(1);
            }
            VAR16->VAR49 = -1;
            FUN5(VAR49, VAR5, VAR16->VAR49, VAR4, VAR10);
            break;
        case VAR50:
            VAR16->VAR51 = VAR52;
            FUN5(VAR51, VAR5, VAR16->VAR51, VAR4, VAR10);
            FUN13(VAR16);
            VAR16->VAR53 = VAR13->VAR54;
            VAR16->VAR55 = VAR13->VAR56;
            VAR16->VAR57 = VAR13->VAR58;
            VAR16->VAR59 = VAR13->VAR60;
            break;
        case VAR61:
        case VAR62:
        {
            char *VAR63 = NULL;
            if (!VAR16->VAR13)
                VAR16->VAR13 = FUN10(VAR13->VAR32);
            FUN5(VAR64, VAR5, VAR16->VAR64, VAR4, VAR10);
            FUN5(VAR65, VAR27, VAR63, VAR4, VAR10);
            if (VAR63 && FUN14(&VAR13->VAR44, &VAR13->VAR42, VAR63) < 0)
            {
                FUN12(NULL, VAR66, "", VAR63);
                FUN3(1);
            }
            break;
        }
        case VAR67:
        case VAR68:
            break;
        default:
            FUN15();
        }
    }
}