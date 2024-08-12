static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    SDL_AudioSpec VAR10, VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16 = 0;
    if (VAR3 < 0 || VAR3 >= VAR5->VAR17)
        return -1;
    VAR7 = VAR5->VAR18[VAR3]->VAR9;
    VAR13 = FUN2(VAR19, VAR7->VAR20, VAR5, VAR5->VAR18[VAR3], NULL);
    VAR9 = FUN3(VAR2, VAR5, VAR5->VAR18[VAR3]);
    VAR7->VAR21 = VAR21;
    VAR7->VAR22 = VAR23;
    VAR7->VAR24 = VAR24;
    VAR7->VAR25 = VAR25;
    VAR7->VAR26 = VAR26;
    VAR7->VAR27 = VAR27;
    if (VAR28)
        VAR7->VAR29 |= VAR30;
    if (!FUN4(VAR13, "", NULL, 0))
        FUN5(&VAR13, "", "", 0);
    if (VAR7->VAR31 == VAR32)
        FUN5(&VAR13, "", "", 0);
    if (!VAR9 || (VAR16 = FUN6(VAR7, VAR9, &VAR13)) < 0)
    {
        goto VAR33;
    }
    if ((VAR15 = FUN4(VAR13, "", NULL, VAR34)))
    {
        FUN7(NULL, VAR35, "", VAR15->VAR36);
        VAR16 = VAR37;
        goto VAR33;
    }
    if (VAR7->VAR31 == VAR38)
    {
        VAR2->VAR39 = VAR7->VAR40;
        if (!VAR7->VAR41)
            VAR7->VAR41 = FUN8(VAR7->VAR42);
        if (!VAR7->VAR41)
        {
            fprintf(VAR43, "");
            VAR16 = VAR44;
            goto VAR33;
        }
        if (VAR7->VAR42 == 1)
            VAR2->VAR45 = VAR46;
        else
            VAR2->VAR45 = VAR47;
        VAR2->VAR48 = FUN9(VAR2->VAR45);
        VAR10.VAR49 = VAR50;
        VAR10.VAR51 = VAR2->VAR39;
        VAR10.VAR42 = VAR2->VAR48;
        VAR10.VAR52 = 0;
        VAR10.VAR53 = VAR54;
        VAR10.VAR55 = VAR56;
        VAR10.VAR57 = VAR2;
        if (FUN10(&VAR10, &VAR11) < 0)
        {
            fprintf(VAR43, "", FUN11());
            VAR16 = VAR58;
            goto VAR33;
        }
        VAR2->VAR59 = VAR11.VAR60;
        VAR2->VAR61 = VAR62;
        VAR2->VAR63 = VAR2->VAR61;
        VAR2->VAR64 = VAR7->VAR41;
        VAR2->VAR65 = VAR7->VAR40;
    }
    VAR5->VAR18[VAR3]->VAR66 = VAR67;
    switch (VAR7->VAR31)
    {
    case VAR38:
        VAR2->VAR68 = VAR3;
        VAR2->VAR69 = VAR5->VAR18[VAR3];
        VAR2->VAR70 = 0;
        VAR2->VAR71 = 0;
        VAR2->VAR72 = FUN12(FUN13(0.01) / VAR73);
        VAR2->VAR74 = 0;
        VAR2->VAR75 = 2.0 * VAR54 / VAR7->VAR40;
        memset(&VAR2->VAR76, 0, sizeof(VAR2->VAR76));
        FUN14(&VAR2->VAR77);
        FUN15(0);
        break;
    case VAR32:
        VAR2->VAR78 = VAR3;
        VAR2->VAR79 = VAR5->VAR18[VAR3];
        FUN14(&VAR2->VAR80);
        VAR2->VAR81 = FUN16(VAR82, VAR2);
        break;
    case VAR83:
        VAR2->VAR84 = VAR3;
        VAR2->VAR85 = VAR5->VAR18[VAR3];
        FUN14(&VAR2->VAR86);
        VAR2->VAR87 = FUN16(VAR88, VAR2);
        break;
    default:
        break;
    }
VAR33:
    FUN17(&VAR13);
    return VAR16;
}