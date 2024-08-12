static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    SDL_AudioSpec VAR10, VAR11;
    if (VAR3 < 0 || VAR3 >= VAR5->VAR12)
        return -1;
    VAR7 = VAR5->VAR13[VAR3]->VAR9;
    if (VAR7->VAR14 == VAR15)
    {
        if (VAR7->VAR16 > 0)
        {
            VAR7->VAR17 = FUN2(2, VAR7->VAR16);
        }
        else
        {
            VAR7->VAR17 = 2;
        }
    }
    VAR9 = FUN3(VAR7->VAR18);
    VAR7->VAR19 = VAR19;
    VAR7->VAR20 = VAR20;
    VAR7->VAR21 = VAR21;
    VAR7->VAR22 = VAR22;
    if (VAR22)
        VAR7->VAR23 |= VAR24;
    VAR7->VAR25 = VAR26;
    if (VAR27)
        VAR7->VAR28 |= VAR29;
    VAR7->VAR30 = VAR30;
    VAR7->VAR31 = VAR31;
    VAR7->VAR32 = VAR32;
    VAR7->VAR33 = VAR33;
    VAR7->VAR34 = VAR34;
    FUN4(VAR7, VAR35);
    FUN5(VAR7, VAR36[VAR7->VAR14], 0);
    if (!VAR9 || FUN6(VAR7, VAR9) < 0)
        return -1;
    if (VAR7->VAR14 == VAR15)
    {
        VAR10.VAR37 = VAR7->VAR38;
        VAR10.VAR39 = VAR40;
        VAR10.VAR16 = VAR7->VAR16;
        VAR10.VAR41 = 0;
        VAR10.VAR42 = VAR43;
        VAR10.VAR44 = VAR45;
        VAR10.VAR46 = VAR2;
        if (FUN7(&VAR10, &VAR11) < 0)
        {
            fprintf(VAR47, "", FUN8());
            return -1;
        }
        VAR2->VAR48 = VAR11.VAR49;
        VAR2->VAR50 = VAR51;
    }
    VAR5->VAR13[VAR3]->VAR52 = VAR53;
    switch (VAR7->VAR14)
    {
    case VAR15:
        VAR2->VAR54 = VAR3;
        VAR2->VAR55 = VAR5->VAR13[VAR3];
        VAR2->VAR56 = 0;
        VAR2->VAR57 = 0;
        VAR2->VAR58 = FUN9(FUN10(0.01) / VAR59);
        VAR2->VAR60 = 0;
        VAR2->VAR61 = 2.0 * VAR43 / VAR7->VAR38;
        memset(&VAR2->VAR62, 0, sizeof(VAR2->VAR62));
        FUN11(&VAR2->VAR63);
        FUN12(0);
        break;
    case VAR64:
        VAR2->VAR65 = VAR3;
        VAR2->VAR66 = VAR5->VAR13[VAR3];
        VAR2->VAR67 = 40e-3;
        VAR2->VAR68 = (double)FUN13() / 1000000.0;
        VAR2->VAR69 = FUN13();
        FUN11(&VAR2->VAR70);
        VAR2->VAR71 = FUN14(VAR72, VAR2);
        break;
    case VAR73:
        VAR2->VAR74 = VAR3;
        VAR2->VAR75 = VAR5->VAR13[VAR3];
        FUN11(&VAR2->VAR76);
        VAR2->VAR77 = FUN14(VAR78, VAR2);
        break;
    default:
        break;
    }
    return 0;
}