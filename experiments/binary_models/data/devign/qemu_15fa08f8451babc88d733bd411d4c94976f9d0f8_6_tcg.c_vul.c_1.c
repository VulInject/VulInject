void FUN1(VAR1 *VAR2)
{
    char VAR3[128];
    VAR4 *VAR5;
    int VAR6;
    for (VAR6 = VAR2->VAR7[0].VAR8; VAR6 != 0; VAR6 = VAR5->VAR8)
    {
        int VAR9, VAR10, VAR11, VAR12, VAR13;
        const VAR14 *VAR15;
        TCGOpcode VAR16;
        int VAR17 = 0;
        VAR5 = &VAR2->VAR7[VAR6];
        VAR16 = VAR5->VAR18;
        VAR15 = &VAR19[VAR16];
        if (VAR16 == VAR20)
        {
            VAR17 += FUN2("", VAR6 != VAR2->VAR7[0].VAR8 ? "" : "");
            for (VAR9 = 0; VAR9 < VAR21; ++VAR9)
            {
                target_ulong VAR22;
                VAR22 = FUN3(VAR5->VAR23[VAR9 * 2], 32, 32, VAR5->VAR23[VAR9 * 2 + 1]);
                VAR22 = VAR5->VAR23[VAR9];
                VAR17 += FUN2("" VAR24, VAR22);
            }
        }
        else if (VAR16 == VAR25)
        {
            VAR11 = VAR5->VAR26;
            VAR12 = VAR5->VAR27;
            VAR13 = VAR15->VAR13;
            VAR17 += FUN2("" VAR28 "", VAR15->VAR29, FUN4(VAR2, VAR5->VAR23[VAR11 + VAR12]), VAR5->VAR23[VAR11 + VAR12 + 1], VAR11);
            for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            {
                VAR17 += FUN2("", FUN5(VAR2, VAR3, sizeof(VAR3), VAR5->VAR23[VAR9]));
            }
            for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            {
                TCGArg VAR30 = VAR5->VAR23[VAR11 + VAR9];
                const char *VAR31 = "";
                if (VAR30 != VAR32)
                {
                    VAR31 = FUN5(VAR2, VAR3, sizeof(VAR3), VAR30);
                }
                VAR17 += FUN2("", VAR31);
            }
        }
        else
        {
            VAR17 += FUN2("", VAR15->VAR29);
            VAR11 = VAR15->VAR11;
            VAR12 = VAR15->VAR12;
            VAR13 = VAR15->VAR13;
            VAR10 = 0;
            for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            {
                if (VAR10 != 0)
                {
                    VAR17 += FUN2("");
                }
                VAR17 += FUN2("", FUN5(VAR2, VAR3, sizeof(VAR3), VAR5->VAR23[VAR10++]));
            }
            for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            {
                if (VAR10 != 0)
                {
                    VAR17 += FUN2("");
                }
                VAR17 += FUN2("", FUN5(VAR2, VAR3, sizeof(VAR3), VAR5->VAR23[VAR10++]));
            }
            switch (VAR16)
            {
            case VAR33:
            case VAR34:
            case VAR35:
            case VAR36:
            case VAR37:
            case VAR38:
            case VAR39:
            case VAR40:
                if (VAR5->VAR23[VAR10] < FUN6(VAR41) && VAR41[VAR5->VAR23[VAR10]])
                {
                    VAR17 += FUN2("", VAR41[VAR5->VAR23[VAR10++]]);
                }
                else
                {
                    VAR17 += FUN2("" VAR28, VAR5->VAR23[VAR10++]);
                }
                VAR9 = 1;
                break;
            case VAR42:
            case VAR43:
            case VAR44:
            case VAR45:
            {
                TCGMemOpIdx VAR6 = VAR5->VAR23[VAR10++];
                TCGMemOp VAR5 = FUN7(VAR6);
                unsigned VAR46 = FUN8(VAR6);
                if (VAR5 & ~(VAR47 | VAR48 | VAR49))
                {
                    VAR17 += FUN2("", VAR5, VAR46);
                }
                else
                {
                    const char *VAR50, *VAR51;
                    VAR50 = VAR52[(VAR5 & VAR47) >> VAR53];
                    VAR51 = VAR54[VAR5 & (VAR48 | VAR49)];
                    VAR17 += FUN2("", VAR50, VAR51, VAR46);
                }
                VAR9 = 1;
            }
            break;
            default:
                VAR9 = 0;
                break;
            }
            switch (VAR16)
            {
            case VAR55:
            case VAR56:
            case VAR33:
            case VAR38:
            case VAR36:
                VAR17 += FUN2("", VAR10 ? "" : "", FUN9(VAR5->VAR23[VAR10])->VAR57);
                VAR9++, VAR10++;
                break;
            default:
                break;
            }
            for (; VAR9 < VAR13; VAR9++, VAR10++)
            {
                VAR17 += FUN2("" VAR28, VAR10 ? "" : "", VAR5->VAR23[VAR10]);
            }
        }
        if (VAR5->VAR58)
        {
            unsigned VAR58 = VAR5->VAR58;
            for (; VAR17 < 48; ++VAR17)
            {
                FUN10('', VAR59);
            }
            if (VAR58 & (VAR60 * 3))
            {
                FUN2("");
                for (VAR9 = 0; VAR9 < 2; ++VAR9)
                {
                    if (VAR58 & (VAR60 << VAR9))
                    {
                        FUN2("", VAR9);
                    }
                }
            }
            VAR58 /= VAR61;
            if (VAR58)
            {
                FUN2("");
                for (VAR9 = 0; VAR58; ++VAR9, VAR58 >>= 1)
                {
                    if (VAR58 & 1)
                    {
                        FUN2("", VAR9);
                    }
                }
            }
        }
        FUN2("");
    }
}