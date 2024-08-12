static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10 = VAR2->VAR11[VAR4->VAR12];
    int64_t VAR13 = 0;
    int VAR14 = 1;
    int VAR15 = 0, VAR16 = 1, VAR17, VAR18;
    int VAR12 = 0;
    int VAR19 = 0;
    VAR20 *VAR21 = NULL;
    VAR22 *VAR23 = NULL;
    for (VAR17 = 0; VAR17 < VAR6->VAR24; VAR17++)
    {
        VAR23 = &VAR6->VAR25[VAR17];
        for (VAR18 = 0; VAR18 < VAR23->VAR26; VAR18++)
        {
            if (VAR23->VAR11[VAR18] == VAR10)
            {
                if (VAR10->VAR27->VAR28 == VAR29)
                {
                    VAR8 = VAR23->VAR30;
                    VAR12 = 0;
                }
                else
                {
                    VAR8 = VAR23->VAR31;
                    VAR12 = VAR18;
                }
                break;
            }
        }
        if (VAR8)
            break;
    }
    if (!VAR8)
    {
        FUN2(VAR2, VAR32, "");
        return FUN3(VAR33);
    }
    VAR13 = VAR6->VAR34 * VAR23->VAR35;
    if (VAR23->VAR36 - VAR23->VAR37 > VAR6->VAR38 && VAR6->VAR39 > 0)
    {
        int VAR40 = VAR6->VAR39 * VAR23->VAR37 * VAR41;
        int VAR42 = (VAR23->VAR36 - VAR23->VAR37) * VAR6->VAR43 * VAR41;
        VAR6->VAR34 = VAR6->VAR43 * VAR41;
        VAR13 = VAR40 + VAR42;
    }
    if (VAR23->VAR44 == VAR45)
    {
        VAR23->VAR44 = VAR4->VAR46;
        VAR23->VAR13 = VAR4->VAR46;
    }
    if (VAR23->VAR47)
    {
        VAR16 = VAR10->VAR27->VAR28 == VAR48 && ((VAR4->VAR49 & VAR50) || (VAR6->VAR49 & VAR51));
        VAR14 = VAR10->VAR27->VAR28 == VAR48;
    }
    if (VAR4->VAR46 == VAR45)
        VAR14 = VAR16 = 0;
    if (VAR14)
    {
        if (VAR23->VAR52)
        {
            VAR23->VAR52 = 0;
            VAR23->VAR53 = (double)(VAR4->VAR46 - VAR23->VAR13) * VAR10->VAR54.VAR55 / VAR10->VAR54.VAR56;
            VAR23->VAR57 = (double)(VAR4->VAR53) * VAR10->VAR54.VAR55 / VAR10->VAR54.VAR56;
        }
        else
        {
            if (VAR4->VAR53)
            {
                VAR23->VAR53 += (double)(VAR4->VAR53) * VAR10->VAR54.VAR55 / VAR10->VAR54.VAR56;
            }
            else
            {
                FUN2(VAR2, VAR58, "");
                VAR23->VAR53 = (double)(VAR4->VAR46 - VAR23->VAR13) * VAR10->VAR54.VAR55 / VAR10->VAR54.VAR56;
            }
        }
    }
    if (VAR23->VAR59 && VAR16 && FUN4(VAR4->VAR46 - VAR23->VAR44, VAR10->VAR54, VAR13, VAR60) >= 0)
    {
        int64_t VAR61;
        char *VAR62 = FUN5(VAR23->VAR31->VAR63);
        int VAR64 = (VAR6->VAR49 & VAR65) || (VAR6->VAR66 > 0);
        if (!VAR62)
        {
            return FUN3(VAR33);
        }
        FUN6(VAR23->VAR31, NULL);
        VAR61 = FUN7(VAR23->VAR31->VAR67);
        VAR23->VAR68 = VAR61 - VAR23->VAR69;
        if (!VAR64)
        {
            if (VAR6->VAR70 == VAR71 && !VAR23->VAR72)
            {
                FUN8(VAR8->VAR67);
                VAR19 = FUN9(VAR8->VAR67, &VAR21);
                FUN10(VAR23->VAR73, VAR21, VAR19);
                VAR23->VAR72 = VAR19;
                FUN11(&VAR8->VAR67);
                VAR23->VAR59 = 0;
                FUN12(VAR2, &VAR23->VAR73);
            }
            else
            {
                FUN12(VAR2, &VAR8->VAR67);
            }
            if (VAR23->VAR30)
            {
                FUN12(VAR2, &VAR23->VAR30->VAR67);
            }
        }
        if ((VAR6->VAR49 & VAR74) && VAR8->VAR63[0])
        {
            if (!(VAR6->VAR49 & VAR65) || (VAR6->VAR66 <= 0))
                if ((VAR23->VAR31->VAR75->VAR76 && VAR23->VAR31->VAR7) && VAR6->VAR70 != VAR71)
                    FUN13(VAR23->VAR31->VAR7, "", "", 0);
            FUN14(VAR2, VAR8);
        }
        if (VAR23->VAR77)
        {
            VAR23->VAR35--;
        }
        if (!VAR23->VAR77 || VAR64)
            VAR15 = FUN15(VAR2, VAR6, VAR23, VAR23->VAR53, VAR23->VAR69, VAR23->VAR68);
        VAR23->VAR69 = VAR61;
        if (VAR15 < 0)
        {
            FUN16(VAR62);
            return VAR15;
        }
        VAR23->VAR13 = VAR4->VAR46;
        VAR23->VAR53 = 0;
        VAR23->VAR77 = 0;
        if (VAR6->VAR49 & VAR65)
        {
            VAR23->VAR35++;
        }
        else if (VAR6->VAR66 > 0)
        {
            if (VAR23->VAR69 >= VAR6->VAR66)
            {
                VAR23->VAR36++;
                FUN17(VAR6, VAR23, VAR62);
                VAR15 = FUN18(VAR2, VAR23);
                VAR23->VAR69 = 0;
                VAR23->VAR35--;
            }
            VAR23->VAR35++;
        }
        else
        {
            FUN17(VAR6, VAR23, VAR62);
            VAR15 = FUN18(VAR2, VAR23);
        }
        FUN16(VAR62);
        if (VAR15 < 0)
        {
            return VAR15;
        }
        if (!VAR23->VAR77 || VAR64)
            if ((VAR15 = FUN19(VAR2, 0, VAR23)) < 0)
            {
                return VAR15;
            }
    }
    VAR23->VAR59++;
    VAR15 = FUN20(VAR8, VAR12, VAR4, VAR2, 0);
    return VAR15;
}