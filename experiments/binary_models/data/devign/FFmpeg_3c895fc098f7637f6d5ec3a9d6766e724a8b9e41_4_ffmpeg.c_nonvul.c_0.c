static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9, VAR3 *VAR10)
{
    int VAR11, VAR12, VAR13;
    VAR7 *VAR14, *VAR15;
    AVFrame VAR16, VAR17;
    static VAR18 *VAR19 = NULL;
    VAR18 *VAR20 = NULL, *VAR21 = NULL;
    VAR22 *VAR23, *VAR24;
    enum PixelFormat VAR25;
    FUN2(&VAR16);
    FUN2(&VAR17);
    VAR23 = &VAR4->VAR26->VAR27;
    VAR24 = &VAR6->VAR26->VAR27;
    VAR11 = 1;
    *VAR9 = 0;
    if (VAR28)
    {
        double VAR29;
        VAR29 = VAR4->VAR30 * VAR23->VAR31 / VAR23->VAR32 - VAR4->VAR33;
        if (VAR29 < -1.1)
            VAR11 = 0;
        else if (VAR29 > 1.1)
            VAR11 = 2;
    }
    VAR4->VAR33 += VAR11;
    if (VAR11 <= 0)
        return;
    if (!VAR19)
        VAR19 = FUN3(VAR34);
    if (!VAR19)
        return;
    VAR25 = VAR4->VAR35 || VAR4->VAR36 ? VAR37 : VAR23->VAR38;
    if (VAR24->VAR38 != VAR25)
    {
        int VAR39;
        VAR39 = FUN4(VAR25, VAR24->VAR40, VAR24->VAR41);
        VAR20 = FUN3(VAR39);
        if (!VAR20)
            return;
        VAR15 = &VAR16;
        FUN5((VAR42 *)VAR15, VAR20, VAR25, VAR24->VAR40, VAR24->VAR41);
        if (FUN6((VAR42 *)VAR15, VAR25, (VAR42 *)VAR8, VAR24->VAR38, VAR24->VAR40, VAR24->VAR41) < 0)
        {
            if (VAR43 >= 0)
                fprintf(VAR44, "");
            goto VAR45;
        }
    }
    else
    {
        VAR15 = VAR8;
    }
    if (VAR4->VAR35)
    {
        VAR14 = &VAR4->VAR46;
        FUN7(VAR4->VAR47, (VAR42 *)VAR14, (VAR42 *)VAR15);
        if (VAR4->VAR48 || VAR4->VAR49 || VAR4->VAR50 || VAR4->VAR51)
        {
            FUN8((VAR42 *)VAR14, VAR23->VAR41, VAR23->VAR40, VAR4->VAR48, VAR4->VAR49, VAR4->VAR50, VAR4->VAR51, VAR52);
        }
        if (VAR23->VAR38 != VAR37)
        {
            int VAR39;
            FUN9(VAR20);
            VAR39 = FUN4(VAR23->VAR38, VAR23->VAR40, VAR23->VAR41);
            VAR20 = FUN3(VAR39);
            if (!VAR20)
                return;
            VAR14 = &VAR16;
            FUN5((VAR42 *)VAR14, VAR20, VAR23->VAR38, VAR23->VAR40, VAR23->VAR41);
            if (FUN6((VAR42 *)VAR14, VAR23->VAR38, (VAR42 *)&VAR4->VAR46, VAR37, VAR23->VAR40, VAR23->VAR41) < 0)
            {
                if (VAR43 >= 0)
                    fprintf(VAR44, "");
                goto VAR45;
            }
        }
    }
    else if (VAR4->VAR53)
    {
        VAR17.VAR54[0] = VAR15->VAR54[0] + (VAR4->VAR55 * VAR15->VAR56[0]) + VAR4->VAR57;
        VAR17.VAR54[1] = VAR15->VAR54[1] + ((VAR4->VAR55 >> 1) * VAR15->VAR56[1]) + (VAR4->VAR57 >> 1);
        VAR17.VAR54[2] = VAR15->VAR54[2] + ((VAR4->VAR55 >> 1) * VAR15->VAR56[2]) + (VAR4->VAR57 >> 1);
        VAR17.VAR56[0] = VAR15->VAR56[0];
        VAR17.VAR56[1] = VAR15->VAR56[1];
        VAR17.VAR56[2] = VAR15->VAR56[2];
        VAR14 = &VAR17;
    }
    else if (VAR4->VAR36)
    {
        VAR14 = &VAR4->VAR46;
        for (VAR12 = 0; VAR12 < 3; VAR12++)
        {
            VAR18 *VAR58, *VAR59;
            int VAR60 = (VAR12 == 0) ? 0 : 1;
            int VAR61, VAR62;
            VAR58 = VAR14->VAR54[VAR12] + (((VAR14->VAR56[VAR12] * VAR4->VAR48) + VAR4->VAR50) >> VAR60);
            VAR59 = VAR15->VAR54[VAR12];
            VAR62 = (VAR23->VAR41 - VAR4->VAR48 - VAR4->VAR49) >> VAR60;
            for (VAR61 = 0; VAR61 < VAR62; VAR61++)
            {
                memcpy(VAR58, VAR59, VAR15->VAR56[VAR12]);
                VAR58 += VAR14->VAR56[VAR12];
                VAR59 += VAR15->VAR56[VAR12];
            }
        }
        FUN8((VAR42 *)VAR14, VAR23->VAR41, VAR23->VAR40, VAR4->VAR48, VAR4->VAR49, VAR4->VAR50, VAR4->VAR51, VAR52);
        if (VAR23->VAR38 != VAR37)
        {
            int VAR39;
            FUN9(VAR20);
            VAR39 = FUN4(VAR23->VAR38, VAR23->VAR40, VAR23->VAR41);
            VAR20 = FUN3(VAR39);
            if (!VAR20)
                return;
            VAR14 = &VAR16;
            FUN5((VAR42 *)VAR14, VAR20, VAR23->VAR38, VAR23->VAR40, VAR23->VAR41);
            if (FUN6((VAR42 *)VAR14, VAR23->VAR38, (VAR42 *)&VAR4->VAR46, VAR37, VAR23->VAR40, VAR23->VAR41) < 0)
            {
                if (VAR43 >= 0)
                    fprintf(VAR44, "");
                goto VAR45;
            }
        }
    }
    else
    {
        VAR14 = VAR15;
    }
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        AVPacket VAR63;
        FUN10(&VAR63);
        VAR63.VAR64 = VAR4->VAR65;
        if (VAR2->VAR66->VAR67 & VAR68)
        {
            VAR7 *VAR69 = VAR23->VAR70;
            VAR23->VAR70 = VAR24->VAR70;
            VAR63.VAR54 = (VAR18 *)VAR14;
            VAR63.VAR39 = sizeof(VAR42);
            if (VAR24->VAR70)
                VAR63.VAR71 = VAR24->VAR70->VAR71;
            if (VAR24->VAR70 && VAR24->VAR70->VAR72)
                VAR63.VAR67 |= VAR73;
            FUN11(VAR2, &VAR63);
            VAR23->VAR70 = VAR69;
        }
        else
        {
            AVFrame VAR74;
            VAR74 = *VAR14;
            VAR74.VAR75 = VAR8->VAR75;
            if (VAR76 || VAR77)
            {
                if (VAR78 == -1)
                    VAR74.VAR78 = VAR8->VAR78;
                else
                    VAR74.VAR78 = 1;
            }
            if (VAR79)
            {
                VAR74.VAR80 = VAR6->VAR26->VAR80;
            }
            else
                VAR74.VAR80 = VAR4->VAR26->VAR80;
            if (!VAR81)
                VAR74.VAR82 = 0;
            VAR74.VAR71 = VAR83;
            VAR13 = FUN12(VAR23, VAR19, VAR34, &VAR74);
            if (VAR13)
            {
                VAR63.VAR54 = VAR19;
                VAR63.VAR39 = VAR13;
                if (VAR23->VAR70)
                    VAR63.VAR71 = VAR23->VAR70->VAR71;
                if (VAR23->VAR70 && VAR23->VAR70->VAR72)
                    VAR63.VAR67 |= VAR73;
                FUN11(VAR2, &VAR63);
                *VAR9 = VAR13;
                if (VAR4->VAR84 && VAR23->VAR85)
                {
                    fprintf(VAR4->VAR84, "", VAR23->VAR85);
                }
            }
        }
        VAR4->VAR86++;
    }
VAR45:
    FUN9(VAR20);
    FUN9(VAR21);
}