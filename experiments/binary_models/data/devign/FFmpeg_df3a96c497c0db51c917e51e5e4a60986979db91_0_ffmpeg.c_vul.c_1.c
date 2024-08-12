static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, float VAR7)
{
    int VAR8, VAR9;
    AVPacket VAR10;
    VAR11 *VAR12 = VAR4->VAR13->VAR14;
    int VAR15;
    double VAR16, VAR17;
    double VAR18 = 0;
    int VAR19 = 0;
    VAR20 *VAR21 = NULL;
    if (VAR4->VAR22 >= 0)
        VAR21 = VAR23[VAR4->VAR22];
    if (VAR21 && VAR21->VAR13->VAR24 != VAR25 && VAR21->VAR13->VAR26 != VAR25 && VAR4->VAR27.VAR28)
        VAR18 = 1 / (FUN2(VAR4->VAR27) * FUN2(VAR12->VAR29));
    VAR16 = VAR6->VAR30;
    VAR17 = VAR16 - VAR4->VAR31 + VAR18;
    VAR15 = 1;
    VAR9 = VAR32;
    if (VAR9 == VAR33)
        VAR9 = (VAR2->VAR34->VAR35 & VAR36) ? ((VAR2->VAR34->VAR35 & VAR37) ? VAR38 : VAR39) : 1;
    switch (VAR9)
    {
    case VAR40:
        if (VAR17 < -1.1)
            VAR15 = 0;
        else if (VAR17 > 1.1)
            VAR15 = FUN3(VAR17);
        break;
    case VAR39:
        if (VAR17 <= -0.6)
            VAR15 = 0;
        else if (VAR17 > 0.6)
            VAR4->VAR31 = FUN4(VAR16);
        break;
    case VAR41:
    case VAR38:
        VAR4->VAR31 = FUN4(VAR16);
        break;
    default:
        FUN5(0);
        VAR15 = FUN6(VAR15, VAR4->VAR42 - VAR4->VAR43);
        if (VAR15 == 0)
        {
            FUN7(NULL, VAR44, "");
        }
        else if (VAR15 > 1)
        {
            VAR45 += VAR15 - 1;
            FUN7(NULL, VAR44, "", VAR15 - 1);
        VAR46:
            FUN8(&VAR10);
            VAR10.VAR47 = NULL;
            VAR10.VAR48 = 0;
            VAR6->VAR30 = VAR4->VAR31;
            if (VAR2->VAR34->VAR35 & VAR49 && VAR12->VAR14->VAR50 == VAR51)
            {
                VAR12->VAR52->VAR53 = VAR6->VAR53;
                VAR12->VAR52->VAR54 = VAR6->VAR54;
                VAR10.VAR47 = (VAR55 *)VAR6;
                VAR10.VAR48 = sizeof(VAR56);
                VAR10.VAR30 = FUN9(VAR6->VAR30, VAR12->VAR29, VAR4->VAR13->VAR29);
                VAR10.VAR35 |= VAR57;
                FUN10(VAR2, &VAR10, VAR4);
                VAR58 += VAR10.VAR48;
            }
            else
            {
                int VAR59;
                AVFrame VAR60;
                VAR60 = *VAR6;
                VAR60.VAR53 = VAR6->VAR53;
                if (VAR4->VAR13->VAR14->VAR35 & (VAR61 | VAR62))
                {
                    if (VAR4->VAR54 == -1)
                        VAR60.VAR54 = VAR6->VAR54;
                    else
                        VAR60.VAR54 = !!VAR4->VAR54;
                    VAR60.VAR7 = VAR7;
                    if (!VAR12->VAR63)
                        VAR60.VAR64 = 0;
                    if (VAR4->VAR65 < VAR4->VAR66 && VAR60.VAR30 >= VAR4->VAR67[VAR4->VAR65])
                    {
                        VAR60.VAR64 = VAR68;
                        VAR4->VAR65++;
                        FUN11(NULL);
                        VAR8 = FUN12(VAR12, &VAR10, &VAR60, &VAR59);
                        FUN11("", VAR4->VAR69, VAR4->VAR70);
                        if (VAR8 < 0)
                        {
                            FUN7(NULL, VAR71, "");
                            FUN13(1);
                            if (VAR59)
                            {
                                if (VAR10.VAR30 == VAR25 && !(VAR12->VAR14->VAR72 & VAR73))
                                    VAR10.VAR30 = VAR4->VAR31;
                                if (VAR10.VAR30 != VAR25)
                                    VAR10.VAR30 = FUN9(VAR10.VAR30, VAR12->VAR29, VAR4->VAR13->VAR29);
                                if (VAR10.VAR74 != VAR25)
                                    VAR10.VAR74 = FUN9(VAR10.VAR74, VAR12->VAR29, VAR4->VAR13->VAR29);
                                if (VAR75)
                                {
                                    FUN7(NULL, VAR76, ""
                                                              "",
                                           FUN14(VAR10.VAR30), FUN15(VAR10.VAR30, &VAR4->VAR13->VAR29), FUN14(VAR10.VAR74), FUN15(VAR10.VAR74, &VAR4->VAR13->VAR29));
                                    FUN10(VAR2, &VAR10, VAR4);
                                    VAR19 = VAR10.VAR48;
                                    VAR58 += VAR10.VAR48;
                                    FUN16(&VAR10);
                                    if (VAR4->VAR77 && VAR12->VAR78)
                                    {
                                        fprintf(VAR4->VAR77, "", VAR12->VAR78);
                                        VAR4->VAR31++;
                                        VAR4->VAR43++;
                                        if (--VAR15)
                                            goto VAR46;
                                        if (VAR79 && VAR19)
                                            FUN17(VAR80[VAR4->VAR69]->VAR81, VAR4, VAR19);