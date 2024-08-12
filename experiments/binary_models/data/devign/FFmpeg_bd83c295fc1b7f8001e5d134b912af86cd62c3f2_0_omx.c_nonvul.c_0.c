static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    VAR12 *VAR13;
    OMX_ERRORTYPE VAR14;
    if (VAR6)
    {
        VAR15 *VAR16[4];
        int VAR17[4];
        int VAR18;
        VAR13 = FUN2(&VAR9->VAR19, &VAR9->VAR20, &VAR9->VAR21, VAR9->VAR22, 1);
        VAR13->VAR23 = FUN3(VAR16, VAR17, VAR13->VAR24, VAR2->VAR25, VAR9->VAR26, VAR9->VAR27, 1);
        if (VAR9->VAR28)
        {
            VAR15 *VAR29[4] = {NULL};
            int VAR30[4];
            FUN3(VAR29, VAR30, VAR6->VAR31[0], VAR2->VAR25, VAR9->VAR26, VAR9->VAR27, 1);
            if (VAR6->VAR17[0] == VAR30[0] && VAR6->VAR17[1] == VAR30[1] && VAR6->VAR17[2] == VAR30[2] && VAR6->VAR31[1] == VAR29[1] && VAR6->VAR31[2] == VAR29[2])
            {
                VAR5 *VAR32 = FUN4(VAR6);
                if (!VAR32)
                {
                    FUN5(&VAR9->VAR19, &VAR9->VAR20, &VAR9->VAR21, VAR9->VAR22, VAR13);
                    return FUN6(VAR33);
                }
                else
                {
                    VAR13->VAR34 = VAR32;
                    VAR13->VAR35 = NULL;
                    VAR13->VAR24 = VAR32->VAR31[0];
                    VAR18 = 0;
                }
            }
            else
            {
                VAR15 *VAR36 = NULL;
                int VAR37 = FUN7(VAR2->VAR25, VAR9->VAR26, VAR9->VAR27, 1);
                if (VAR37 >= 0)
                    VAR36 = FUN8(VAR37);
                if (!VAR36)
                {
                    FUN5(&VAR9->VAR19, &VAR9->VAR20, &VAR9->VAR21, VAR9->VAR22, VAR13);
                    return FUN6(VAR33);
                }
                else
                {
                    VAR13->VAR34 = VAR36;
                    VAR13->VAR35 = (void *)1;
                    VAR13->VAR24 = VAR36;
                    VAR18 = 1;
                    VAR13->VAR23 = FUN3(VAR16, VAR17, VAR13->VAR24, VAR2->VAR25, VAR9->VAR26, VAR9->VAR27, 1);
                }
            }
        }
        else
        {
            VAR18 = 1;
        }
        if (VAR18)
            FUN9(VAR16, VAR17, (const VAR15 **)VAR6->VAR31, VAR6->VAR17, VAR2->VAR25, VAR2->VAR38, VAR2->VAR39);
        VAR13->VAR40 = VAR41;
        VAR13->VAR42 = 0;
        VAR13->VAR43 = FUN10(FUN11(VAR6->VAR44, VAR2->VAR45, VAR46));
        VAR14 = FUN12(VAR9->VAR47, VAR13);
        if (VAR14 != VAR48)
        {
            FUN5(&VAR9->VAR19, &VAR9->VAR20, &VAR9->VAR21, VAR9->VAR22, VAR13);
            FUN13(VAR2, VAR49, "", VAR14);
            return VAR50;
        }
        VAR9->VAR51++;
    }
    while (!*VAR7 && VAR11 == 0)
    {
        VAR13 = FUN2(&VAR9->VAR52, &VAR9->VAR53, &VAR9->VAR54, VAR9->VAR55, !VAR6 && VAR9->VAR56 < VAR9->VAR51);
        if (!VAR13)
            break;
        if (VAR13->VAR40 & VAR57 && VAR2->VAR58 & VAR59)
        {
            if ((VAR11 = FUN14(&VAR2->VAR60, VAR2->VAR61 + VAR13->VAR23 + VAR62)) < 0)
            {
                VAR2->VAR61 = 0;
                goto VAR63;
            }
            memcpy(VAR2->VAR60 + VAR2->VAR61, VAR13->VAR24 + VAR13->VAR42, VAR13->VAR23);
            VAR2->VAR61 += VAR13->VAR23;
            memset(VAR2->VAR60 + VAR2->VAR61, 0, VAR62);
        }
        else
        {
            if (VAR13->VAR40 & VAR41)
                VAR9->VAR56++;
            if (!(VAR13->VAR40 & VAR41) || !VAR4->VAR31)
            {
                int VAR64 = VAR9->VAR65 + VAR13->VAR23 + VAR62;
                if ((VAR11 = FUN14(&VAR9->VAR66, VAR64)) < 0)
                {
                    VAR9->VAR65 = 0;
                    goto VAR63;
                }
                memcpy(VAR9->VAR66 + VAR9->VAR65, VAR13->VAR24 + VAR13->VAR42, VAR13->VAR23);
                VAR9->VAR65 += VAR13->VAR23;
                if (VAR13->VAR40 & VAR41)
                {
                    if ((VAR11 = FUN15(VAR4, VAR9->VAR66, VAR9->VAR65)) < 0)
                    {
                        FUN16(&VAR9->VAR66);
                        VAR9->VAR65 = 0;
                        goto VAR63;
                    }
                    VAR9->VAR66 = NULL;
                    VAR9->VAR65 = 0;
                }
            }
            else
            {
                if ((VAR11 = FUN17(VAR2, VAR4, VAR9->VAR65 + VAR13->VAR23, 0)) < 0)
                {
                    FUN13(VAR2, VAR49, "", (int)(VAR9->VAR65 + VAR13->VAR23));
                    goto VAR63;
                }
                memcpy(VAR4->VAR31, VAR9->VAR66, VAR9->VAR65);
                memcpy(VAR4->VAR31 + VAR9->VAR65, VAR13->VAR24 + VAR13->VAR42, VAR13->VAR23);
                FUN16(&VAR9->VAR66);
                VAR9->VAR65 = 0;
            }
            if (VAR13->VAR40 & VAR41)
            {
                VAR4->VAR44 = FUN11(FUN18(VAR13->VAR43), VAR46, VAR2->VAR45);
                VAR4->VAR67 = VAR4->VAR44;
                if (VAR13->VAR40 & VAR68)
                    VAR4->VAR58 |= VAR69;
                *VAR7 = 1;
            }
        }
    VAR63:
        VAR14 = FUN19(VAR9->VAR47, VAR13);
        if (VAR14 != VAR48)
        {
            FUN5(&VAR9->VAR52, &VAR9->VAR53, &VAR9->VAR54, VAR9->VAR55, VAR13);
            FUN13(VAR2, VAR49, "", VAR14);
            VAR11 = VAR50;
        }
    }
    return VAR11;
}