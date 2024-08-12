static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    VAR7 *VAR13;
    VAR14 *VAR15;
    double VAR16;
    double VAR17 = 0;
    int VAR18 = 0;
    float VAR19 = VAR20 ? VAR8->VAR19 : VAR4->VAR21->VAR22->VAR23;
    VAR15 = VAR4->VAR21->VAR22;
    if (VAR6->VAR21->VAR24 != VAR25 && VAR6->VAR21->VAR26 != VAR25)
    {
        VAR17 = FUN2(FUN3(VAR6->VAR21->VAR27), FUN3(VAR6->VAR21->VAR22->VAR27));
        if (VAR6->VAR21->VAR28.VAR29)
            VAR17 = FUN2(VAR17, 1 / FUN3(VAR6->VAR21->VAR28));
        VAR17 /= FUN3(VAR15->VAR27);
    }
    VAR16 = FUN4(VAR4, VAR8->VAR30) / FUN3(VAR15->VAR27);
    VAR9 = 1;
    VAR12 = VAR31;
    if (VAR12 == VAR32)
        VAR12 = (VAR2->VAR33->VAR34 & VAR35) ? ((VAR2->VAR33->VAR34 & VAR36) ? VAR37 : VAR38) : 1;
    if (VAR12 != VAR37 && VAR12 != VAR39)
    {
        double VAR40 = VAR16 - VAR4->VAR41 + VAR17;
        if (VAR40 < -1.1)
            VAR9 = 0;
        else if (VAR12 == VAR38)
        {
            if (VAR40 <= -0.6)
            {
                VAR9 = 0;
            }
            else if (VAR40 > 0.6)
                VAR4->VAR41 = FUN5(VAR16);
        }
        else if (VAR40 > 1.1)
            VAR9 = FUN5(VAR40);
        if (VAR9 == 0)
        {
            ++VAR42;
            FUN6(NULL, VAR43, "");
        }
        else if (VAR9 > 1)
        {
            VAR44 += VAR9 - 1;
            FUN6(NULL, VAR43, "", VAR9 - 1);
        }
    }
    else
        VAR4->VAR41 = FUN5(VAR16);
    VAR9 = FUN7(VAR9, VAR4->VAR45 - VAR4->VAR46);
    if (VAR9 <= 0)
        return;
    FUN8(VAR4, VAR6, VAR8, &VAR13);
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        AVPacket VAR47;
        FUN9(&VAR47);
        VAR47.VAR48 = NULL;
        VAR47.VAR49 = 0;
        if (VAR2->VAR33->VAR34 & VAR50 && VAR15->VAR22->VAR51 == VAR52)
        {
            VAR15->VAR53->VAR54 = VAR8->VAR54;
            VAR15->VAR53->VAR55 = VAR8->VAR55;
            VAR47.VAR48 = (VAR56 *)VAR13;
            VAR47.VAR49 = sizeof(VAR57);
            VAR47.VAR30 = FUN10(VAR4->VAR41, VAR15->VAR27, VAR4->VAR21->VAR27);
            VAR47.VAR34 |= VAR58;
            FUN11(VAR2, &VAR47, VAR4);
        }
        else
        {
            int VAR59;
            AVFrame VAR60;
            VAR60 = *VAR13;
            VAR60.VAR54 = VAR8->VAR54;
            if (VAR4->VAR21->VAR22->VAR34 & (VAR61 | VAR62))
            {
                if (VAR4->VAR55 == -1)
                    VAR60.VAR55 = VAR8->VAR55;
                else
                    VAR60.VAR55 = !!VAR4->VAR55;
            }
            VAR60.VAR19 = VAR19;
            if (!VAR15->VAR63)
                VAR60.VAR64 = 0;
            VAR60.VAR30 = VAR4->VAR41;
            if (VAR4->VAR65 < VAR4->VAR66 && VAR60.VAR30 >= VAR4->VAR67[VAR4->VAR65])
            {
                VAR60.VAR64 = VAR68;
                VAR4->VAR65++;
            }
            VAR11 = FUN12(VAR15, &VAR47, &VAR60, &VAR59);
            if (VAR11 < 0)
            {
                FUN6(NULL, VAR69, "");
                FUN13(1);
            }
            if (VAR59)
            {
                if (VAR47.VAR30 == VAR25 && !(VAR15->VAR22->VAR70 & VAR71))
                    VAR47.VAR30 = VAR4->VAR41;
                if (VAR47.VAR30 != VAR25)
                    VAR47.VAR30 = FUN10(VAR47.VAR30, VAR15->VAR27, VAR4->VAR21->VAR27);
                if (VAR47.VAR72 != VAR25)
                    VAR47.VAR72 = FUN10(VAR47.VAR72, VAR15->VAR27, VAR4->VAR21->VAR27);
                if (VAR73)
                {
                    FUN6(NULL, VAR74, ""
                                              "",
                           FUN14(VAR47.VAR30), FUN15(VAR47.VAR30, &VAR4->VAR21->VAR27), FUN14(VAR47.VAR72), FUN15(VAR47.VAR72, &VAR4->VAR21->VAR27));
                }
                if (VAR12 == VAR39)
                    VAR47.VAR30 = VAR47.VAR72 = VAR25;
                FUN11(VAR2, &VAR47, VAR4);
                VAR18 = VAR47.VAR49;
                VAR75 += VAR47.VAR49;
                if (VAR4->VAR76 && VAR15->VAR77)
                {
                    fprintf(VAR4->VAR76, "", VAR15->VAR77);
                }
            }
        }
        VAR4->VAR41++;
        VAR4->VAR46++;
    }
    if (VAR78 && VAR18)
        FUN16(VAR79[VAR4->VAR80].VAR81, VAR4, VAR18);