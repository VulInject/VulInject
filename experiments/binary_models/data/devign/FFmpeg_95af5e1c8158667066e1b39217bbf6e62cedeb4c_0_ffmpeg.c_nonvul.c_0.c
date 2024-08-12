static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9)
{
    int VAR10, VAR11, VAR12;
    VAR7 *VAR13, *VAR14, *VAR15, *VAR16;
    AVFrame VAR17, VAR18;
    VAR19 *VAR20, *VAR21;
    FUN2(&VAR17);
    FUN2(&VAR18);
    VAR20 = VAR4->VAR22->VAR23;
    VAR21 = VAR6->VAR22->VAR23;
    VAR10 = 1;
    *VAR9 = 0;
    if (VAR24 > 0 || (VAR24 && FUN3(VAR20->VAR25) > 0.001))
    {
        double VAR26;
        VAR26 = FUN4(VAR4) / FUN3(VAR20->VAR25) - VAR4->VAR27;
        if (VAR26 < -1.1)
            VAR10 = 0;
        else if (VAR24 == 2)
            VAR4->VAR27 = FUN5(FUN4(VAR4) / FUN3(VAR20->VAR25));
        else if (VAR26 > 1.1)
            VAR10 = FUN5(VAR26);
        if (VAR10 == 0)
        {
            ++VAR28;
            if (VAR29 > 2)
                fprintf(VAR30, "");
        }
        else if (VAR10 > 1)
        {
            VAR31 += VAR10;
            if (VAR29 > 2)
                fprintf(VAR30, "", VAR10 - 1);
        }
    }
    else
        VAR4->VAR27 = FUN5(FUN4(VAR4) / FUN3(VAR20->VAR25));
    VAR10 = FUN6(VAR10, VAR32[VAR33] - VAR4->VAR34);
    if (VAR10 <= 0)
        return;
    if (VAR4->VAR35)
    {
        if (FUN7((VAR36 *)&VAR17, (VAR36 *)VAR8, VAR21->VAR37, VAR4->VAR38, VAR4->VAR39) < 0)
        {
            FUN8(NULL, VAR40, "");
            if (VAR41)
                FUN9(1);
            return;
        }
        VAR14 = &VAR17;
    }
    else
    {
        VAR14 = VAR8;
    }
    VAR13 = VAR14;
    VAR16 = VAR14;
    VAR15 = &VAR4->VAR42;
    if (VAR4->VAR43)
    {
        VAR13 = &VAR4->VAR42;
        if (VAR4->VAR44)
        {
            if (FUN7((VAR36 *)&VAR18, (VAR36 *)VAR13, VAR20->VAR37, VAR4->VAR45, VAR4->VAR46) < 0)
            {
                FUN8(NULL, VAR40, "");
                if (VAR41)
                    FUN9(1);
                return;
            }
            VAR15 = &VAR18;
        }
    }
    if (VAR4->VAR44)
    {
        VAR16 = NULL;
        VAR13 = &VAR4->VAR42;
        FUN10(VAR4->VAR47, VAR14->VAR48, VAR14->VAR49, 0, VAR4->VAR50, VAR15->VAR48, VAR15->VAR49);
    }
    if (VAR4->VAR43)
    {
        FUN11((VAR36 *)VAR13, (VAR36 *)VAR16, VAR20->VAR51, VAR20->VAR52, VAR20->VAR37, VAR4->VAR45, VAR4->VAR53, VAR4->VAR46, VAR4->VAR54, VAR55);
    }
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        AVPacket VAR56;
        FUN12(&VAR56);
        VAR56.VAR57 = VAR4->VAR58;
        if (VAR2->VAR59->VAR60 & VAR61)
        {
            VAR7 *VAR62 = VAR20->VAR63;
            VAR20->VAR63 = VAR21->VAR63;
            VAR56.VAR48 = (VAR64 *)VAR13;
            VAR56.VAR65 = sizeof(VAR36);
            VAR56.VAR66 = FUN13(VAR4->VAR27, VAR20->VAR25, VAR4->VAR22->VAR25);
            VAR56.VAR60 |= VAR67;
            FUN14(VAR2, &VAR56, VAR4->VAR22->VAR23, VAR68[VAR4->VAR69][VAR56.VAR57]);
            VAR20->VAR63 = VAR62;
        }
        else
        {
            AVFrame VAR70;
            VAR70 = *VAR13;
            VAR70.VAR71 = VAR8->VAR71;
            if (VAR72[VAR33]->VAR60 & (VAR73 | VAR74))
            {
                if (VAR75 == -1)
                    VAR70.VAR75 = VAR8->VAR75;
                else
                    VAR70.VAR75 = VAR75;
            }
            if (VAR76)
            {
                VAR70.VAR77 = VAR6->VAR22->VAR77;
            }
            else
                VAR70.VAR77 = VAR4->VAR22->VAR77;
            if (!VAR78)
                VAR70.VAR79 = 0;
            VAR70.VAR66 = VAR4->VAR27;
            VAR12 = FUN15(VAR20, VAR80, VAR81, &VAR70);
            if (VAR12 < 0)
            {
                fprintf(VAR30, "");
                FUN9(1);
            }
            if (VAR12 > 0)
            {
                VAR56.VAR48 = VAR80;
                VAR56.VAR65 = VAR12;
                if (VAR20->VAR63->VAR66 != VAR82)
                    VAR56.VAR66 = FUN13(VAR20->VAR63->VAR66, VAR20->VAR25, VAR4->VAR22->VAR25);
                if (VAR20->VAR63->VAR83)
                    VAR56.VAR60 |= VAR67;
                FUN14(VAR2, &VAR56, VAR4->VAR22->VAR23, VAR68[VAR4->VAR69][VAR56.VAR57]);
                *VAR9 = VAR12;
                VAR84 += VAR12;
                if (VAR4->VAR85 && VAR20->VAR86)
                {
                    fprintf(VAR4->VAR85, "", VAR20->VAR86);
                }
            }
        }
        VAR4->VAR27++;
        VAR4->VAR34++;
    }
}