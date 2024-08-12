static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6;
    int VAR7 = VAR8 | (VAR5->VAR9 ? VAR10 : 0);
    VAR11 *VAR12 = VAR3->VAR13[0];
    VAR14 *VAR15 = VAR12->VAR16;
    if (FUN2(VAR17) != 0)
    {
        FUN3(VAR3, VAR18, "", FUN4());
        VAR5->VAR19 = FUN5(VAR20);
        goto VAR21;
    }
    FUN6(VAR5->VAR22, VAR5->VAR23);
    VAR5->VAR24 = FUN7(VAR5->VAR25, VAR5->VAR26, 24, VAR7);
    if (!VAR5->VAR24)
    {
        FUN3(VAR5, VAR18, "", FUN4());
        VAR5->VAR19 = FUN5(VAR20);
        goto VAR21;
    }
    VAR5->VAR27 = FUN8(VAR15->VAR28, VAR15->VAR29, VAR5->VAR30, VAR5->VAR24);
    if (!VAR5->VAR27 || VAR5->VAR27->VAR31[0] < VAR15->VAR28)
    {
        FUN3(VAR3, VAR18, "", VAR15->VAR28, VAR15->VAR29);
        VAR5->VAR19 = FUN5(VAR20);
        goto VAR21;
    }
    VAR5->VAR19 = 0;
    FUN3(VAR3, VAR32, "", VAR15->VAR28, VAR15->VAR29, FUN9(VAR15->VAR33), VAR5->VAR34.VAR35, VAR5->VAR34.VAR36);
VAR21:
    FUN10(VAR5->mutex);
    VAR5->VAR37 = 1;
    FUN11(VAR5->mutex);
    FUN12(VAR5->VAR38);
    if (VAR5->VAR19 < 0)
        return VAR5->VAR19;
    while (!VAR5->VAR39)
    {
        int VAR40;
        SDL_Event VAR41;
        FUN13();
        VAR40 = FUN14(&VAR41, 1, VAR42, VAR43);
        if (VAR40 < 0)
        {
            FUN3(VAR3, VAR18, "", FUN4());
            continue;
        }
        if (VAR40 == 0)
        {
            FUN15(10);
            continue;
        }
        switch (VAR41.VAR44)
        {
        case VAR45:
            switch (VAR41.VAR46.VAR47.VAR48)
            {
            case VAR49:
            case VAR50:
                VAR5->VAR39 = 1;
                break;
            }
            break;
        case VAR51:
            VAR5->VAR39 = 1;
            break;
        case VAR52:
            VAR5->VAR25 = VAR41.VAR53.VAR35;
            VAR5->VAR26 = VAR41.VAR53.VAR36;
            FUN10(VAR5->mutex);
            VAR5->VAR24 = FUN7(VAR5->VAR25, VAR5->VAR26, 24, VAR8);
            if (!VAR5->VAR24)
            {
                FUN3(VAR3, VAR18, "", FUN4());
                VAR5->VAR39 = 1;
            }
            else
            {
                FUN16(VAR3);
            }
            FUN11(VAR5->mutex);
            break;
        default:
            break;
        }
    }
    return 0;
}