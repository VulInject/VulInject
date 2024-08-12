static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9)
{
    int VAR10, VAR11, VAR12;
    int64_t VAR13, VAR14, VAR15, VAR16;
    VAR7 *VAR17, *VAR18, *VAR19, *VAR20;
    AVFrame VAR21, VAR22;
    VAR23 *VAR24, *VAR25;
    FUN2(&VAR21);
    FUN2(&VAR22);
    VAR24 = VAR4->VAR26->VAR27;
    VAR25 = VAR6->VAR26->VAR27;
    VAR10 = 1;
    *VAR9 = 0;
    if (VAR28)
    {
        double VAR29;
        VAR29 = FUN3(VAR4) / FUN4(VAR24->VAR30) - VAR4->VAR31;
        if (VAR29 < -1.1)
            VAR10 = 0;
        else if (VAR28 == 2 || (VAR28 < 0 && (VAR2->VAR32->VAR33 & VAR34)))
        {
            if (VAR29 <= -0.6)
            {
                VAR10 = 0;
            }
            else if (VAR29 > 0.6)
                VAR4->VAR31 = FUN5(FUN3(VAR4) / FUN4(VAR24->VAR30));
        }
        else if (VAR29 > 1.1)
            VAR10 = FUN5(VAR29);
        if (VAR10 == 0)
        {
            ++VAR35;
            if (VAR36 > 2)
                fprintf(VAR37, "");
        }
        else if (VAR10 > 1)
        {
            VAR38 += VAR10;
            if (VAR36 > 2)
                fprintf(VAR37, "", VAR10 - 1);
        }
    }
    else
        VAR4->VAR31 = FUN5(FUN3(VAR4) / FUN4(VAR24->VAR30));
    VAR10 = FUN6(VAR10, VAR39[VAR40] - VAR4->VAR41);
    if (VAR10 <= 0)
        return;
    if (VAR4->VAR42)
    {
        if (FUN7((VAR43 *)&VAR21, (VAR43 *)VAR8, VAR25->VAR44, VAR4->VAR13, VAR4->VAR15) < 0)
        {
            fprintf(VAR37, "");
            if (VAR45)
                FUN8(1);
            return;
        }
        VAR18 = &VAR21;
    }
    else
    {
        VAR18 = VAR8;
    }
    VAR17 = VAR18;
    VAR20 = VAR18;
    VAR19 = &VAR4->VAR46;
    if (VAR4->VAR47)
    {
        VAR17 = &VAR4->VAR46;
        if (VAR4->VAR48)
        {
            if (FUN7((VAR43 *)&VAR22, (VAR43 *)VAR17, VAR24->VAR44, VAR4->VAR49, VAR4->VAR50) < 0)
            {
                fprintf(VAR37, "");
                if (VAR45)
                    FUN8(1);
                return;
            }
            VAR19 = &VAR22;
        }
    }
    if (VAR4->VAR48)
    {
        VAR20 = NULL;
        VAR17 = &VAR4->VAR46;
        if ((VAR4->VAR51 != (VAR6->VAR26->VAR27->VAR52 - (VAR4->VAR13 + VAR4->VAR14))) || (VAR4->VAR53 != (VAR6->VAR26->VAR27->VAR54 - (VAR4->VAR15 + VAR4->VAR16))) || (VAR4->VAR55 != VAR6->VAR26->VAR27->VAR44))
        {
            fprintf(VAR37, "", VAR6->VAR56, VAR6->VAR57, VAR6->VAR26->VAR27->VAR54, VAR6->VAR26->VAR27->VAR52, FUN9(VAR6->VAR26->VAR27->VAR44));
            VAR13 = ((VAR58)VAR6->VAR26->VAR27->VAR52 * VAR4->VAR59 / VAR4->VAR60) & ~1;
            VAR14 = ((VAR58)VAR6->VAR26->VAR27->VAR52 * VAR4->VAR61 / VAR4->VAR60) & ~1;
            VAR15 = ((VAR58)VAR6->VAR26->VAR27->VAR54 * VAR4->VAR62 / VAR4->VAR63) & ~1;
            VAR16 = ((VAR58)VAR6->VAR26->VAR27->VAR54 * VAR4->VAR64 / VAR4->VAR63) & ~1;
            assert(VAR13 <= VAR65 && VAR13 >= 0);
            assert(VAR14 <= VAR65 && VAR14 >= 0);
            assert(VAR15 <= VAR65 && VAR15 >= 0);
            assert(VAR16 <= VAR65 && VAR16 >= 0);
            VAR4->VAR13 = VAR13;
            VAR4->VAR14 = VAR14;
            VAR4->VAR15 = VAR15;
            VAR4->VAR16 = VAR16;
            VAR4->VAR51 = VAR6->VAR26->VAR27->VAR52 - (VAR4->VAR13 + VAR4->VAR14);
            VAR4->VAR53 = VAR6->VAR26->VAR27->VAR54 - (VAR4->VAR15 + VAR4->VAR16);
            VAR4->VAR55 = VAR6->VAR26->VAR27->VAR44;
            FUN10(VAR4->VAR66);
            VAR67 = FUN11(VAR68, "", NULL);
            VAR4->VAR66 = FUN12(VAR6->VAR26->VAR27->VAR54 - (VAR4->VAR15 + VAR4->VAR16), VAR6->VAR26->VAR27->VAR52 - (VAR4->VAR13 + VAR4->VAR14), VAR6->VAR26->VAR27->VAR44, VAR4->VAR26->VAR27->VAR54 - (VAR4->VAR50 + VAR4->VAR69), VAR4->VAR26->VAR27->VAR52 - (VAR4->VAR49 + VAR4->VAR70), VAR4->VAR26->VAR27->VAR44, VAR67, NULL, NULL, NULL);
            if (VAR4->VAR66 == NULL)
            {
                fprintf(VAR37, "");
                FUN8(1);
            }
        }
        FUN13(VAR4->VAR66, VAR18->VAR71, VAR18->VAR72, 0, VAR4->VAR51, VAR19->VAR71, VAR19->VAR72);
    }
    if (VAR4->VAR47)
    {
        FUN14((VAR43 *)VAR17, (VAR43 *)VAR20, VAR24->VAR52, VAR24->VAR54, VAR24->VAR44, VAR4->VAR49, VAR4->VAR70, VAR4->VAR50, VAR4->VAR69, VAR73);
    }
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        AVPacket VAR74;
        FUN15(&VAR74);
        VAR74.VAR75 = VAR4->VAR57;
        if (VAR2->VAR32->VAR33 & VAR76)
        {
            VAR7 *VAR77 = VAR24->VAR78;
            VAR24->VAR78 = VAR25->VAR78;
            VAR74.VAR71 = (VAR79 *)VAR17;
            VAR74.VAR80 = sizeof(VAR43);
            VAR74.VAR81 = FUN16(VAR4->VAR31, VAR24->VAR30, VAR4->VAR26->VAR30);
            VAR74.VAR33 |= VAR82;
            FUN17(VAR2, &VAR74, VAR4->VAR26->VAR27, VAR83[VAR4->VAR56][VAR74.VAR75]);
            VAR24->VAR78 = VAR77;
        }
        else
        {
            AVFrame VAR84;
            VAR84 = *VAR17;
            VAR84.VAR85 = VAR8->VAR85;
            if (VAR86[VAR40]->VAR33 & (VAR87 | VAR88))
            {
                if (VAR89 == -1)
                    VAR84.VAR89 = VAR8->VAR89;
                else
                    VAR84.VAR89 = VAR89;
            }
            if (VAR90)
            {
                VAR84.VAR91 = VAR6->VAR26->VAR91;
            }
            else
                VAR84.VAR91 = VAR4->VAR26->VAR91;
            if (!VAR92)
                VAR84.VAR93 = 0;
            VAR84.VAR81 = VAR4->VAR31;
            VAR12 = FUN18(VAR24, VAR94, VAR95, &VAR84);
            if (VAR12 < 0)
            {
                fprintf(VAR37, "");
                FUN8(1);
            }
            if (VAR12 > 0)
            {
                VAR74.VAR71 = VAR94;
                VAR74.VAR80 = VAR12;
                if (VAR24->VAR78->VAR81 != VAR96)
                    VAR74.VAR81 = FUN16(VAR24->VAR78->VAR81, VAR24->VAR30, VAR4->VAR26->VAR30);
                if (VAR24->VAR78->VAR97)
                    VAR74.VAR33 |= VAR82;
                FUN17(VAR2, &VAR74, VAR4->VAR26->VAR27, VAR83[VAR4->VAR56][VAR74.VAR75]);
                *VAR9 = VAR12;
                VAR98 += VAR12;
                if (VAR4->VAR99 && VAR24->VAR100)
                {
                    fprintf(VAR4->VAR99, "", VAR24->VAR100);
                }
            }
        }
        VAR4->VAR31++;
        VAR4->VAR41++;
    }
}