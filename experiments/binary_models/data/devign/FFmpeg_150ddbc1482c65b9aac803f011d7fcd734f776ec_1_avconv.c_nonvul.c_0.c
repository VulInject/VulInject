static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9, float VAR10)
{
    int VAR11, VAR12, VAR13, VAR14;
    VAR7 *VAR15;
    VAR16 *VAR17;
    double VAR18;
    VAR17 = VAR4->VAR19->VAR20;
    VAR18 = FUN2(VAR4) / FUN3(VAR17->VAR21);
    VAR11 = 1;
    *VAR9 = 0;
    VAR14 = VAR22;
    if (VAR14 < 0)
        VAR14 = (VAR2->VAR23->VAR24 & VAR25) ? 0 : (VAR2->VAR23->VAR24 & VAR26) ? 2
                                                                                                                    : 1;
    if (VAR14)
    {
        double VAR27 = VAR18 - VAR4->VAR28;
        if (VAR27 < -1.1)
            VAR11 = 0;
        else if (VAR14 == 2)
        {
            if (VAR27 <= -0.6)
            {
                VAR11 = 0;
            }
            else if (VAR27 > 0.6)
                VAR4->VAR28 = FUN4(VAR18);
        }
        else if (VAR27 > 1.1)
            VAR11 = FUN4(VAR27);
        if (VAR11 == 0)
        {
            ++VAR29;
            FUN5(NULL, VAR30, "");
        }
        else if (VAR11 > 1)
        {
            VAR31 += VAR11 - 1;
            FUN5(NULL, VAR30, "", VAR11 - 1);
        }
    }
    else
        VAR4->VAR28 = FUN4(VAR18);
    VAR11 = FUN6(VAR11, VAR4->VAR32 - VAR4->VAR33);
    if (VAR11 <= 0)
        return;
    FUN7(VAR4, VAR6, VAR8, &VAR15);
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        AVPacket VAR34;
        FUN8(&VAR34);
        VAR34.VAR35 = VAR4->VAR36;
        if (VAR2->VAR23->VAR24 & VAR37 && VAR17->VAR20->VAR38 == VAR39)
        {
            VAR17->VAR40->VAR41 = VAR8->VAR41;
            VAR17->VAR40->VAR42 = VAR8->VAR42;
            VAR34.VAR43 = (VAR44 *)VAR15;
            VAR34.VAR45 = sizeof(VAR46);
            VAR34.VAR47 = FUN9(VAR4->VAR28, VAR17->VAR21, VAR4->VAR19->VAR21);
            VAR34.VAR24 |= VAR48;
            FUN10(VAR2, &VAR34, VAR4->VAR19->VAR20, VAR4->VAR49);
        }
        else
        {
            AVFrame VAR50;
            VAR50 = *VAR15;
            VAR50.VAR41 = VAR8->VAR41;
            if (VAR4->VAR19->VAR20->VAR24 & (VAR51 | VAR52))
            {
                if (VAR4->VAR42 == -1)
                    VAR50.VAR42 = VAR8->VAR42;
                else
                    VAR50.VAR42 = !!VAR4->VAR42;
            }
            VAR50.VAR10 = VAR10;
            if (!VAR17->VAR53)
                VAR50.VAR54 = 0;
            VAR50.VAR47 = VAR4->VAR28;
            if (VAR4->VAR55 < VAR4->VAR56 && VAR50.VAR47 >= VAR4->VAR57[VAR4->VAR55])
            {
                VAR50.VAR54 = VAR58;
                VAR4->VAR55++;
            }
            VAR13 = FUN11(VAR17, VAR59, VAR60, &VAR50);
            if (VAR13 < 0)
            {
                FUN5(NULL, VAR61, "");
                FUN12(1);
            }
            if (VAR13 > 0)
            {
                VAR34.VAR43 = VAR59;
                VAR34.VAR45 = VAR13;
                if (VAR17->VAR40->VAR47 != VAR62)
                    VAR34.VAR47 = FUN9(VAR17->VAR40->VAR47, VAR17->VAR21, VAR4->VAR19->VAR21);
                if (VAR17->VAR40->VAR63)
                    VAR34.VAR24 |= VAR48;
                FUN10(VAR2, &VAR34, VAR4->VAR19->VAR20, VAR4->VAR49);
                *VAR9 = VAR13;
                VAR64 += VAR13;
                if (VAR4->VAR65 && VAR17->VAR66)
                {
                    fprintf(VAR4->VAR65, "", VAR17->VAR66);
                }
            }
        }
        VAR4->VAR28++;
        VAR4->VAR33++;
    }
}