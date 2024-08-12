static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR11 *VAR12 = FUN2(VAR2->VAR13);
    VAR14 *VAR15;
    int VAR16, VAR17, VAR18;
    x264_picture_t VAR19 = {0};
    int VAR20;
    FUN3(&VAR9->VAR21);
    VAR9->VAR21.VAR22.VAR23 = VAR9->VAR24.VAR23;
    if (VAR12->VAR25[0].VAR26 > 8)
        VAR9->VAR21.VAR22.VAR23 |= VAR27;
    VAR9->VAR21.VAR22.VAR28 = FUN4(VAR2->VAR13);
    if (VAR6)
    {
        for (VAR17 = 0; VAR17 < VAR9->VAR21.VAR22.VAR28; VAR17++)
        {
            VAR9->VAR21.VAR22.VAR29[VAR17] = VAR6->VAR30[VAR17];
            VAR9->VAR21.VAR22.VAR31[VAR17] = VAR6->VAR32[VAR17];
        }
        VAR9->VAR21.VAR33 = VAR6->VAR34;
        switch (VAR6->VAR20)
        {
        case VAR35:
            VAR9->VAR21.VAR36 = VAR9->VAR37 > 0 ? VAR38 : VAR39;
            break;
        case VAR40:
            VAR9->VAR21.VAR36 = VAR41;
            break;
        case VAR42:
            VAR9->VAR21.VAR36 = VAR43;
            break;
        default:
            VAR9->VAR21.VAR36 = VAR44;
            break;
        }
        FUN5(VAR2, VAR6);
        if (VAR9->VAR45)
        {
            void *VAR46;
            size_t VAR47;
            VAR18 = FUN6(VAR6, 0, &VAR46, &VAR47);
            if (VAR18 < 0)
            {
                FUN7(VAR2, VAR48, "");
            }
            else if (VAR46)
            {
                VAR9->VAR21.VAR49.VAR50 = FUN8(sizeof(VAR9->VAR21.VAR49.VAR50[0]));
                if (VAR9->VAR21.VAR49.VAR50 == NULL)
                {
                    FUN7(VAR2, VAR48, "");
                    FUN9(VAR46);
                }
                else
                {
                    VAR9->VAR21.VAR49.VAR51 = VAR52;
                    VAR9->VAR21.VAR49.VAR50[0].VAR53 = VAR47;
                    VAR9->VAR21.VAR49.VAR50[0].VAR54 = VAR46;
                    VAR9->VAR21.VAR49.VAR55 = 1;
                    VAR9->VAR21.VAR49.VAR50[0].VAR56 = 4;
                }
            }
        }
    }
    do
    {
        if (FUN10(VAR9->VAR57, &VAR15, &VAR16, VAR6 ? &VAR9->VAR21 : NULL, &VAR19) < 0)
            return VAR58;
        VAR18 = FUN11(VAR2, VAR4, VAR15, VAR16);
        if (VAR18 < 0)
            return VAR18;
    } while (!VAR18 && !VAR6 && FUN12(VAR9->VAR57));
    VAR4->VAR34 = VAR19.VAR33;
    VAR4->VAR59 = VAR19.VAR60;
    switch (VAR19.VAR36)
    {
    case VAR38:
    case VAR61:
        VAR20 = VAR35;
        break;
    case VAR41:
        VAR20 = VAR40;
        break;
    case VAR43:
    case VAR62:
        VAR20 = VAR42;
        break;
    default:
        VAR20 = VAR63;
    }
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR64->VAR20 = VAR20;
    FF_ENABLE_DEPRECATION_WARNINGS VAR4->VAR65 |= VAR66 * VAR19.VAR67;
    if (VAR18)
    {
        FUN13(VAR4, (VAR19.VAR68 - 1) * VAR69, NULL, 0, VAR20);
        FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR64->VAR70 = (VAR19.VAR68 - 1) * VAR69;
        VAR71
    }
    *VAR7 = VAR18;
    return 0;
}