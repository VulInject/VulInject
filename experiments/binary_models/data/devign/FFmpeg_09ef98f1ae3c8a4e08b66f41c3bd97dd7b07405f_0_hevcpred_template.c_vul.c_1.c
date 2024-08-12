static void FUN1(VAR1)(VAR2 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    ((VAR8) >> VAR3->VAR9->VAR10)(VAR3->VAR11->VAR12[(VAR8) + (VAR13)*VAR14]) FUN2(FUN3(VAR4 + ((VAR8) << VAR15)), FUN3(VAR5 + ((VAR13) << VAR16))) FUN4(VAR8, VAR13).is_intra VAR3->VAR17->VAR18[(VAR13)*VAR3->VAR9->VAR19 + (VAR8)] for (VAR20 = (VAR21); VAR20 > (VAR21) - (VAR22); VAR20--) VAR23[VAR20 - 1] = VAR23[VAR20] for (VAR20 = (VAR21); VAR20 < (VAR21) + (VAR22); VAR20++) VAR23[VAR20] = VAR23[VAR20 - 1] for (VAR20 = (VAR21); VAR20 > (VAR21) - (VAR22); VAR20--) if (!FUN5(VAR20 - 1, -1)) VAR23[VAR20 - 1] = VAR23[VAR20] for (VAR20 = (VAR21); VAR20 < (VAR21) + (VAR22); VAR20++) if (!FUN5(VAR20, -1)) VAR23[VAR20] = VAR23[VAR20 - 1] for (VAR20 = (VAR21); VAR20 > (VAR21) - (VAR22); VAR20--) if (!FUN5(-1, VAR20 - 1)) VAR23[VAR20 - 1] = VAR23[VAR20] for (VAR20 = (VAR21); VAR20 > (VAR21) - (VAR22); VAR20--) VAR23[VAR20 - 1] = VAR23[VAR20] for (VAR20 = (VAR21); VAR20 < (VAR21) + (VAR22); VAR20++) if (!FUN5(-1, VAR20)) VAR23[VAR20] = VAR23[VAR20 - 1] VAR24 *VAR25 = VAR3->VAR26;
    int VAR20;
    int VAR15 = VAR3->VAR9->VAR15[VAR7];
    int VAR16 = VAR3->VAR9->VAR16[VAR7];
    int VAR27 = (1 << VAR6);
    int VAR28 = VAR27 << VAR15;
    int VAR29 = VAR28 >> VAR3->VAR9->VAR30;
    int VAR8 = VAR4 >> VAR15;
    int VAR13 = VAR5 >> VAR16;
    int VAR31 = VAR4 >> VAR3->VAR9->VAR30;
    int VAR32 = VAR5 >> VAR3->VAR9->VAR30;
    int VAR33 = FUN6(VAR31, VAR32);
    ptrdiff_t VAR34 = VAR3->VAR35->VAR36[VAR7] / sizeof(VAR37);
    VAR37 *VAR38 = (VAR37 *)VAR3->VAR35->VAR39[VAR7] + VAR8 + VAR13 * VAR34;
    int VAR14 = FUN3(VAR3->VAR9->VAR40);
    enum IntraPredMode VAR41 = VAR7 ? VAR25->VAR42.VAR43 : VAR25->VAR44.VAR45;
    pixel VAR46[2 * VAR47 + 1];
    pixel VAR48[2 * VAR47 + 1];
    pixel VAR49[2 * VAR47 + 1];
    pixel VAR50[2 * VAR47 + 1];
    VAR37 *VAR51 = VAR46 + 1;
    VAR37 *VAR52 = VAR49 + 1;
    VAR37 *VAR53 = VAR48 + 1;
    VAR37 *VAR54 = VAR50 + 1;
    int VAR55 = VAR25->VAR56.VAR55 && VAR33 > FUN6(VAR31 - 1, VAR32 + VAR29);
    int VAR57 = VAR25->VAR56.VAR57;
    int VAR58 = VAR25->VAR56.VAR58;
    int VAR59 = VAR25->VAR56.VAR59;
    int VAR60 = VAR25->VAR56.VAR60 && VAR33 > FUN6(VAR31 + VAR29, VAR32 - 1);
    int VAR61 = (FUN7(VAR5 + 2 * VAR28, VAR3->VAR9->VAR62) - (VAR5 + VAR28)) >> VAR16;
    int VAR63 = (FUN7(VAR4 + 2 * VAR28, VAR3->VAR9->VAR40) - (VAR4 + VAR28)) >> VAR15;
    if (VAR3->VAR17->VAR64 == 1)
    {
        int VAR65 = FUN3(VAR28);
        int VAR66 = !(VAR4 & ((1 << VAR3->VAR9->VAR10) - 1));
        int VAR67 = !(VAR5 & ((1 << VAR3->VAR9->VAR10) - 1));
        if (!VAR65)
            VAR65++;
        if (VAR55 == 1 && VAR66)
        {
            int VAR68 = FUN3(VAR4 - 1);
            int VAR69 = FUN3(VAR5 + VAR28);
            VAR55 = 0;
            for (VAR20 = 0; VAR20 < VAR65; VAR20++)
                VAR55 |= FUN2(VAR68, VAR69 + VAR20).VAR70;
        }
        if (VAR57 == 1 && VAR66)
        {
            int VAR68 = FUN3(VAR4 - 1);
            int VAR71 = FUN3(VAR5);
            VAR57 = 0;
            for (VAR20 = 0; VAR20 < VAR65; VAR20++)
                VAR57 |= FUN2(VAR68, VAR71 + VAR20).VAR70;
        }
        if (VAR58 == 1)
        {
            int VAR68 = FUN3(VAR4 - 1);
            int VAR72 = FUN3(VAR5 - 1);
            VAR58 = FUN2(VAR68, VAR72).VAR70;
        }
        if (VAR59 == 1 && VAR67)
        {
            int VAR73 = FUN3(VAR4);
            int VAR72 = FUN3(VAR5 - 1);
            VAR59 = 0;
            for (VAR20 = 0; VAR20 < VAR65; VAR20++)
                VAR59 |= FUN2(VAR73 + VAR20, VAR72).VAR70;
        }
        if (VAR60 == 1 && VAR67)
        {
            int VAR72 = FUN3(VAR5 - 1);
            int VAR74 = FUN3(VAR4 + VAR28);
            VAR60 = 0;
            for (VAR20 = 0; VAR20 < VAR65; VAR20++)
                VAR60 |= FUN2(VAR74 + VAR20, VAR72).VAR70;
        }
        for (VAR20 = 0; VAR20 < 2 * VAR47; VAR20++)
        {
            VAR51[VAR20] = 128;
            VAR52[VAR20] = 128;
        }
    }
    if (VAR55)
    {
        for (VAR20 = VAR27 + VAR61; VAR20 < (VAR27 << 1); VAR20++)
            if (FUN5(-1, VAR27 + VAR61 - 1) || !VAR3->VAR17->VAR64)
                VAR51[VAR20] = FUN8(-1, VAR27 + VAR61 - 1);
        for (VAR20 = VAR27 + VAR61 - 1; VAR20 >= VAR27; VAR20--)
            if (FUN5(-1, VAR20) || !VAR3->VAR17->VAR64)
                VAR51[VAR20] = FUN8(-1, VAR20);
    }
    if (VAR57)
        for (VAR20 = VAR27 - 1; VAR20 >= 0; VAR20--)
            if (FUN5(-1, VAR20) || !VAR3->VAR17->VAR64)
                VAR51[VAR20] = FUN8(-1, VAR20);
    if (VAR58)
        if (FUN5(-1, -1) || !VAR3->VAR17->VAR64)
        {
            VAR51[-1] = FUN8(-1, -1);
            VAR52[-1] = VAR51[-1];
        }
    if (VAR59)
        for (VAR20 = VAR27 - 1; VAR20 >= 0; VAR20--)
            if (FUN5(VAR20, -1) || !VAR3->VAR17->VAR64)
                VAR52[VAR20] = FUN8(VAR20, -1);
    if (VAR60)
    {
        for (VAR20 = VAR27 + VAR63; VAR20 < (VAR27 << 1); VAR20++)
            if (FUN5(VAR27 + VAR63 - 1, -1) || !VAR3->VAR17->VAR64)
                VAR52[VAR20] = FUN8(VAR27 + VAR63 - 1, -1);
        for (VAR20 = VAR27 + VAR63 - 1; VAR20 >= VAR27; VAR20--)
            if (FUN5(VAR20, -1) || !VAR3->VAR17->VAR64)
                VAR52[VAR20] = FUN8(VAR20, -1);
    }
    if (VAR3->VAR17->VAR64 == 1)
    {
        if (VAR55 || VAR57 || VAR58 || VAR59 || VAR60)
        {
            int VAR75 = VAR4 + ((2 * VAR27) << VAR15) < VAR3->VAR9->VAR40 ? 2 * VAR27 : (VAR3->VAR9->VAR40 - VAR4) >> VAR15;
            int VAR76 = VAR5 + ((2 * VAR27) << VAR16) < VAR3->VAR9->VAR62 ? 2 * VAR27 : (VAR3->VAR9->VAR62 - VAR5) >> VAR16;
            int VAR77 = VAR27 + (VAR55 ? VAR61 : 0) - 1;
            if (!VAR60)
            {
                VAR75 = VAR4 + ((VAR27) << VAR15) < VAR3->VAR9->VAR40 ? VAR27 : (VAR3->VAR9->VAR40 - VAR4) >> VAR15;
            }
            if (!VAR55)
            {
                VAR76 = VAR5 + ((VAR27) << VAR16) < VAR3->VAR9->VAR62 ? VAR27 : (VAR3->VAR9->VAR62 - VAR5) >> VAR16;
            }
            if (VAR55 || VAR57 || VAR58)
            {
                while (VAR77 > -1 && !FUN5(-1, VAR77))
                    VAR77--;
                if (!FUN5(-1, VAR77))
                {
                    VAR77 = 0;
                    while (VAR77 < VAR75 && !FUN5(VAR77, -1))
                        VAR77++;
                    FUN9(VAR52, VAR77, VAR77 + 1);
                    VAR51[-1] = VAR52[-1];
                    VAR77 = 0;
                }
            }
            else
            {
                VAR77 = 0;
                while (VAR77 < VAR75 && !FUN5(VAR77, -1))
                    VAR77++;
                if (VAR77 > 0)
                    if (VAR4 > 0)
                    {
                        FUN9(VAR52, VAR77, VAR77 + 1);
                    }
                    else
                    {
                        FUN9(VAR52, VAR77, VAR77);
                        VAR52[-1] = VAR52[0];
                    }
                VAR51[-1] = VAR52[-1];
                VAR77 = 0;
            }
            if (VAR55 || VAR57)
            {
                FUN10(VAR51, VAR77, VAR76 - VAR77);
            }
            if (!VAR57)
            {
                FUN11(VAR51, 0, VAR27);
            }
            if (!VAR55)
            {
                FUN11(VAR51, VAR27, VAR27);
            }
            if (VAR4 != 0 && VAR5 != 0)
            {
                FUN12(VAR51, VAR76 - 1, VAR76);
            }
            else if (VAR4 == 0)
            {
                FUN13(VAR51, VAR76 - 1, VAR76);
            }
            else
            {
                FUN12(VAR51, VAR76 - 1, VAR76 - 1);
            }
            VAR52[-1] = VAR51[-1];
            if (VAR5 != 0)
            {
                FUN14(VAR52, 0, VAR75);
            }
        }
    }
    if (!VAR55)
    {
        if (VAR57)
        {
            FUN11(VAR51, VAR27, VAR27);
        }
        else if (VAR58)
        {
            FUN11(VAR51, 0, 2 * VAR27);
            VAR57 = 1;
        }
        else if (VAR59)
        {
            VAR51[-1] = VAR52[0];
            FUN11(VAR51, 0, 2 * VAR27);
            VAR58 = 1;
            VAR57 = 1;
        }
        else if (VAR60)
        {
            FUN15(VAR52, VAR27, VAR27);
            VAR51[-1] = VAR52[0];
            FUN11(VAR51, 0, 2 * VAR27);
            VAR59 = 1;
            VAR58 = 1;
            VAR57 = 1;
        }
        else
        {
            VAR52[0] = VAR51[-1] = (1 << (VAR78 - 1));
            FUN16(VAR52, 1, 2 * VAR27 - 1);
            FUN11(VAR51, 0, 2 * VAR27);
        }
    }
    if (!VAR57)
    {
        FUN17(VAR51, VAR27, VAR27);
    }
    if (!VAR58)
    {
        VAR51[-1] = VAR51[0];
    }
    if (!VAR59)
    {
        VAR52[0] = VAR51[-1];
        FUN16(VAR52, 1, VAR27 - 1);
    }
    if (!VAR60)
    {
        FUN16(VAR52, VAR27, VAR27);
    }
    VAR52[-1] = VAR51[-1];
    if (VAR7 == 0 && VAR41 != VAR79 && VAR27 != 4)
    {
        int VAR80[] = {7, 1, 0};
        int VAR81 = FUN7(FUN18((int)VAR41 - 26), FUN18((int)VAR41 - 10));
        if (VAR81 > VAR80[VAR6 - 3])
        {
            int VAR82 = 1 << (VAR78 - 5);
            if (VAR3->VAR9->VAR83 && VAR6 == 5 && FUN18(VAR52[-1] + VAR52[63] - 2 * VAR52[31]) < VAR82 && FUN18(VAR51[-1] + VAR51[63] - 2 * VAR51[31]) < VAR82)
            {
                VAR54[-1] = VAR52[-1];
                VAR54[63] = VAR52[63];
                for (VAR20 = 0; VAR20 < 63; VAR20++)
                    VAR54[VAR20] = ((64 - (VAR20 + 1)) * VAR52[-1] + (VAR20 + 1) * VAR52[63] + 32) >> 6;
                for (VAR20 = 0; VAR20 < 63; VAR20++)
                    VAR51[VAR20] = ((64 - (VAR20 + 1)) * VAR51[-1] + (VAR20 + 1) * VAR51[63] + 32) >> 6;
                VAR52 = VAR54;
            }
            else
            {
                VAR53[2 * VAR27 - 1] = VAR51[2 * VAR27 - 1];
                VAR54[2 * VAR27 - 1] = VAR52[2 * VAR27 - 1];
                for (VAR20 = 2 * VAR27 - 2; VAR20 >= 0; VAR20--)
                    VAR53[VAR20] = (VAR51[VAR20 + 1] + 2 * VAR51[VAR20] + VAR51[VAR20 - 1] + 2) >> 2;
                VAR54[-1] = VAR53[-1] = (VAR51[0] + 2 * VAR51[-1] + VAR52[0] + 2) >> 2;
                for (VAR20 = 2 * VAR27 - 2; VAR20 >= 0; VAR20--)
                    VAR54[VAR20] = (VAR52[VAR20 + 1] + 2 * VAR52[VAR20] + VAR52[VAR20 - 1] + 2) >> 2;
                VAR51 = VAR53;
                VAR52 = VAR54;
            }
        }
    }
    switch (VAR41)
    {
    case VAR84:
        VAR3->VAR85.VAR86[VAR6 - 2]((VAR87 *)VAR38, (VAR87 *)VAR52, (VAR87 *)VAR51, VAR34);
        break;
    case VAR79:
        VAR3->VAR85.FUN19((VAR87 *)VAR38, (VAR87 *)VAR52, (VAR87 *)VAR51, VAR34, VAR6, VAR7);
        break;
    default:
        VAR3->VAR85.VAR88[VAR6 - 2]((VAR87 *)VAR38, (VAR87 *)VAR52, (VAR87 *)VAR51, VAR34, VAR7, VAR41);
        break;
    }
}