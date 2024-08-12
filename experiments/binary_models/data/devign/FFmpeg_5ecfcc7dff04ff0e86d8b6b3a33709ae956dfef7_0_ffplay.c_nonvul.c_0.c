static void FUN1(void *VAR1, double *VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6;
    double VAR7;
    VAR8 *VAR9, *VAR10;
    if (!VAR4->VAR11 && FUN2(VAR4) == VAR12 && VAR4->VAR13)
        FUN3(VAR4);
    if (!VAR14 && VAR4->VAR15 != VAR16 && VAR4->VAR17)
    {
        VAR7 = FUN4() / 1000000.0;
        if (VAR4->VAR18 || VAR4->VAR19 + VAR20 < VAR7)
        {
            FUN5(VAR4);
            VAR4->VAR19 = VAR7;
        }
        *VAR2 = FUN6(*VAR2, VAR4->VAR19 + VAR20 - VAR7);
    }
    if (VAR4->VAR21)
    {
        int VAR22 = 0;
        if (VAR4->VAR18)
            VAR22 = FUN7(VAR4);
    VAR23:
        if (VAR4->VAR24 == 0)
        {
            FUN8(VAR4->VAR25);
            if (VAR4->VAR26 != VAR27 && VAR4->VAR26 > VAR4->VAR28)
            {
                FUN9(VAR4, VAR4->VAR26, VAR4->VAR29, VAR4->VAR30);
                VAR4->VAR26 = VAR27;
            }
            FUN10(VAR4->VAR25);
        }
        else
        {
            double VAR31, VAR32, VAR33;
            VAR6 = &VAR4->VAR34[VAR4->VAR35];
            if (VAR6->VAR36 != VAR4->VAR37.VAR36)
            {
                FUN11(VAR4);
                VAR22 = 0;
                goto VAR23;
            }
            if (VAR4->VAR11)
                goto VAR38;
            VAR31 = VAR6->VAR39 - VAR4->VAR28;
            if (!FUN12(VAR31) && VAR31 > 0 && VAR31 < VAR4->VAR40)
            {
                VAR4->VAR41 = VAR31;
            }
            if (VAR22)
                VAR33 = 0.0;
            else
                VAR33 = FUN13(VAR4->VAR41, VAR4);
            VAR7 = FUN4() / 1000000.0;
            if (VAR7 < VAR4->VAR42 + VAR33 && !VAR22)
            {
                *VAR2 = FUN6(VAR4->VAR42 + VAR33 - VAR7, *VAR2);
                return;
            }
            VAR4->VAR42 += VAR33;
            if (VAR33 > 0 && VAR7 - VAR4->VAR42 > VAR43)
                VAR4->VAR42 = VAR7;
            FUN8(VAR4->VAR25);
            if (!VAR22 && !FUN12(VAR6->VAR39))
                FUN9(VAR4, VAR6->VAR39, VAR6->VAR44, VAR6->VAR36);
            FUN10(VAR4->VAR25);
            if (VAR4->VAR24 > 1)
            {
                VAR5 *VAR45 = &VAR4->VAR34[(VAR4->VAR35 + 1) % VAR46];
                VAR32 = FUN14(VAR4, VAR6, VAR45);
                if (!VAR4->VAR47 && (VAR22 || VAR48 > 0 || (VAR48 && FUN2(VAR4) != VAR49)) && VAR7 > VAR4->VAR42 + VAR32)
                {
                    if (!VAR22)
                        VAR4->VAR50++;
                    FUN11(VAR4);
                    VAR22 = 0;
                    goto VAR23;
                }
            }
            if (VAR4->VAR51)
            {
                while (VAR4->VAR52 > 0)
                {
                    VAR9 = &VAR4->VAR53[VAR4->VAR54];
                    if (VAR4->VAR52 > 1)
                        VAR10 = &VAR4->VAR53[(VAR4->VAR54 + 1) % VAR55];
                    else
                        VAR10 = NULL;
                    if (VAR9->VAR36 != VAR4->VAR56.VAR36 || (VAR4->VAR57.VAR39 > (VAR9->VAR39 + ((float)VAR9->VAR58.VAR59 / 1000))) || (VAR10 && VAR4->VAR57.VAR39 > (VAR10->VAR39 + ((float)VAR10->VAR58.VAR60 / 1000))))
                    {
                        FUN15(VAR9);
                        if (++VAR4->VAR54 == VAR55)
                            VAR4->VAR54 = 0;
                        FUN8(VAR4->VAR61);
                        VAR4->VAR52--;
                        FUN16(VAR4->VAR62);
                        FUN10(VAR4->VAR61);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        VAR38:
            if (!VAR14 && VAR4->VAR15 == VAR16)
                FUN5(VAR4);
            FUN11(VAR4);
            if (VAR4->VAR47 && !VAR4->VAR11)
                FUN17(VAR4);
        }
    }
    VAR4->VAR18 = 0;
    if (VAR63)
    {
        static int64_t VAR64;
        int64_t VAR65;
        int VAR66, VAR67, VAR68;
        double VAR69;
        VAR65 = FUN4();
        if (!VAR64 || (VAR65 - VAR64) >= 30000)
        {
            VAR66 = 0;
            VAR67 = 0;
            VAR68 = 0;
            if (VAR4->VAR17)
                VAR66 = VAR4->VAR70.VAR71;
            if (VAR4->VAR21)
                VAR67 = VAR4->VAR37.VAR71;
            if (VAR4->VAR51)
                VAR68 = VAR4->VAR56.VAR71;
            VAR69 = 0;
            if (VAR4->VAR17 && VAR4->VAR21)
                VAR69 = FUN18(&VAR4->VAR72) - FUN18(&VAR4->VAR57);
            else if (VAR4->VAR21)
                VAR69 = FUN19(VAR4) - FUN18(&VAR4->VAR57);
            else if (VAR4->VAR17)
                VAR69 = FUN19(VAR4) - FUN18(&VAR4->VAR72);
            FUN20(NULL, VAR73, "" VAR74 "" VAR74 "", FUN19(VAR4), (VAR4->VAR17 && VAR4->VAR21) ? "" : (VAR4->VAR21 ? "" : (VAR4->VAR17 ? "" : "")), VAR69, VAR4->VAR75 + VAR4->VAR50, VAR66 / 1024, VAR67 / 1024, VAR68, VAR4->VAR21 ? VAR4->VAR21->VAR76->VAR77 : 0, VAR4->VAR21 ? VAR4->VAR21->VAR76->VAR78 : 0);
            FUN21(VAR79);
            VAR64 = VAR65;
        }
    }
}