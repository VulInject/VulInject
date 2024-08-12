static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, float VAR7)
{
    int VAR8, VAR9;
    AVPacket VAR10;
    VAR11 *VAR12 = VAR4->VAR13->VAR14;
    int VAR15, VAR16;
    double VAR17, VAR18;
    double VAR19 = 0;
    int VAR20 = 0;
    VAR21 *VAR22 = NULL;
    if (VAR4->VAR23 >= 0)
        VAR22 = VAR24[VAR4->VAR23];
    if (VAR22 && VAR22->VAR13->VAR25 != VAR26 && VAR22->VAR13->VAR27 != VAR26 && VAR4->VAR28.VAR29)
        VAR19 = 1 / (FUN2(VAR4->VAR28) * FUN2(VAR12->VAR30));
    VAR17 = VAR6->VAR31;
    VAR18 = VAR17 - VAR4->VAR32 + VAR19;
    VAR15 = 1;
    VAR9 = VAR33;
    if (VAR9 == VAR34)
        VAR9 = (VAR2->VAR35->VAR36 & VAR37) ? ((VAR2->VAR35->VAR36 & VAR38) ? VAR39 : VAR40) : 1;
    switch (VAR9)
    {
    case VAR41:
        if (VAR18 < -1.1)
            VAR15 = 0;
        else if (VAR18 > 1.1)
            VAR15 = FUN3(VAR18);
        break;
    case VAR40:
        if (VAR18 <= -0.6)
            VAR15 = 0;
        else if (VAR18 > 0.6)
            VAR4->VAR32 = FUN4(VAR17);
        break;
    case VAR42:
    case VAR39:
        VAR4->VAR32 = FUN4(VAR17);
        break;
    default:
        FUN5(0);
    }
    VAR15 = FUN6(VAR15, VAR4->VAR43 - VAR4->VAR44);
    if (VAR15 == 0)
    {
        VAR45++;
        FUN7(NULL, VAR46, "");
        return;
    }
    else if (VAR15 > 1)
    {
        if (VAR15 > VAR47 * 30)
        {
            FUN7(NULL, VAR48, "", VAR15 - 1);
            VAR45++;
            return;
        }
        VAR49 += VAR15 - 1;
        FUN7(NULL, VAR46, "", VAR15 - 1);
    }
    for (VAR16 = 0; VAR16 < VAR15; VAR16++)
    {
        FUN8(&VAR10);
        VAR10.VAR50 = NULL;
        VAR10.VAR51 = 0;
        VAR6->VAR31 = VAR4->VAR32;
        if (!FUN9(VAR4))
            return;
        if (VAR2->VAR35->VAR36 & VAR52 && VAR12->VAR14->VAR53 == VAR54)
        {
            VAR12->VAR55->VAR56 = VAR6->VAR56;
            VAR12->VAR55->VAR57 = VAR6->VAR57;
            VAR10.VAR50 = (VAR58 *)VAR6;
            VAR10.VAR51 = sizeof(VAR59);
            VAR10.VAR31 = FUN10(VAR6->VAR31, VAR12->VAR30, VAR4->VAR13->VAR30);
            VAR10.VAR36 |= VAR60;
            FUN11(VAR2, &VAR10, VAR4);
            VAR61 += VAR10.VAR51;
        }
        else
        {
            int VAR62;
            AVFrame VAR63;
            VAR63 = *VAR6;
            VAR63.VAR56 = VAR6->VAR56;
            if (VAR4->VAR13->VAR14->VAR36 & (VAR64 | VAR65))
            {
                if (VAR4->VAR57 == -1)
                    VAR63.VAR57 = VAR6->VAR57;
                else
                    VAR63.VAR57 = !!VAR4->VAR57;
            }
            VAR63.VAR7 = VAR7;
            if (!VAR12->VAR66)
                VAR63.VAR67 = 0;
            if (VAR4->VAR68 < VAR4->VAR69 && VAR63.VAR31 >= VAR4->VAR70[VAR4->VAR68])
            {
                VAR63.VAR67 = VAR71;
                VAR4->VAR68++;
            }
            FUN12(NULL);
            VAR8 = FUN13(VAR12, &VAR10, &VAR63, &VAR62);
            FUN12("", VAR4->VAR72, VAR4->VAR73);
            if (VAR8 < 0)
            {
                FUN7(NULL, VAR74, "");
                FUN14(1);
            }
            if (VAR62)
            {
                if (VAR10.VAR31 == VAR26 && !(VAR12->VAR14->VAR75 & VAR76))
                    VAR10.VAR31 = VAR4->VAR32;
                if (VAR10.VAR31 != VAR26)
                    VAR10.VAR31 = FUN10(VAR10.VAR31, VAR12->VAR30, VAR4->VAR13->VAR30);
                if (VAR10.VAR77 != VAR26)
                    VAR10.VAR77 = FUN10(VAR10.VAR77, VAR12->VAR30, VAR4->VAR13->VAR30);
                if (VAR78)
                {
                    FUN7(NULL, VAR79, ""
                                              "",
                           FUN15(VAR10.VAR31), FUN16(VAR10.VAR31, &VAR4->VAR13->VAR30), FUN15(VAR10.VAR77), FUN16(VAR10.VAR77, &VAR4->VAR13->VAR30));
                }
                FUN11(VAR2, &VAR10, VAR4);
                VAR20 = VAR10.VAR51;
                VAR61 += VAR10.VAR51;
                FUN17(&VAR10);
                if (VAR4->VAR80 && VAR12->VAR81)
                {
                    fprintf(VAR4->VAR80, "", VAR12->VAR81);
                }
            }
        }
        VAR4->VAR32++;
        VAR4->VAR44++;
    }
    if (VAR82 && VAR20)
        FUN18(VAR83[VAR4->VAR72]->VAR84, VAR4, VAR20);
}