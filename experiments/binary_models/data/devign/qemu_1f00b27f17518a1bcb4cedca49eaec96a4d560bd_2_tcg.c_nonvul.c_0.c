void FUN1(VAR1 *VAR2)
{
    char VAR3[128];
    VAR4 *VAR5;
    int VAR6;
    for (VAR6 = VAR2->VAR7; VAR6 >= 0; VAR6 = VAR5->VAR8)
    {
        int VAR9, VAR10, VAR11, VAR12, VAR13;
        const VAR14 *VAR15;
        const VAR16 *VAR17;
        TCGOpcode VAR18;
        VAR5 = &VAR2->VAR19[VAR6];
        VAR18 = VAR5->VAR20;
        VAR15 = &VAR21[VAR18];
        VAR17 = &VAR2->VAR22[VAR5->VAR17];
        if (VAR18 == VAR23)
        {
            FUN2("", VAR6 != VAR2->VAR7 ? "" : "");
            for (VAR9 = 0; VAR9 < VAR24; ++VAR9)
            {
                target_ulong VAR25;
                VAR25 = ((VAR26)VAR17[VAR9 * 2 + 1] << 32) | VAR17[VAR9 * 2];
                VAR25 = VAR17[VAR9];
                FUN2("" VAR27, VAR25);
            }
        }
        else if (VAR18 == VAR28)
        {
            VAR11 = VAR5->VAR29;
            VAR12 = VAR5->VAR30;
            VAR13 = VAR15->VAR13;
            FUN2("" VAR31 "", VAR15->VAR32, FUN3(VAR2, VAR17[VAR11 + VAR12]), VAR17[VAR11 + VAR12 + 1], VAR11);
            for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            {
                FUN2("", FUN4(VAR2, VAR3, sizeof(VAR3), VAR17[VAR9]));
            }
            for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            {
                TCGArg VAR33 = VAR17[VAR11 + VAR9];
                const char *VAR34 = "";
                if (VAR33 != VAR35)
                {
                    VAR34 = FUN4(VAR2, VAR3, sizeof(VAR3), VAR33);
                }
                FUN2("", VAR34);
            }
        }
        else
        {
            FUN2("", VAR15->VAR32);
            VAR11 = VAR15->VAR11;
            VAR12 = VAR15->VAR12;
            VAR13 = VAR15->VAR13;
            VAR10 = 0;
            for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            {
                if (VAR10 != 0)
                {
                    FUN2("");
                }
                FUN2("", FUN4(VAR2, VAR3, sizeof(VAR3), VAR17[VAR10++]));
            }
            for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            {
                if (VAR10 != 0)
                {
                    FUN2("");
                }
                FUN2("", FUN4(VAR2, VAR3, sizeof(VAR3), VAR17[VAR10++]));
            }
            switch (VAR18)
            {
            case VAR36:
            case VAR37:
            case VAR38:
            case VAR39:
            case VAR40:
            case VAR41:
            case VAR42:
            case VAR43:
                if (VAR17[VAR10] < FUN5(VAR44) && VAR44[VAR17[VAR10]])
                {
                    FUN2("", VAR44[VAR17[VAR10++]]);
                }
                else
                {
                    FUN2("" VAR31, VAR17[VAR10++]);
                }
                VAR9 = 1;
                break;
            case VAR45:
            case VAR46:
            case VAR47:
            case VAR48:
            {
                TCGMemOpIdx VAR6 = VAR17[VAR10++];
                TCGMemOp VAR5 = FUN6(VAR6);
                unsigned VAR49 = FUN7(VAR6);
                if (VAR5 & ~(VAR50 | VAR51 | VAR52))
                {
                    FUN2("", VAR5, VAR49);
                }
                else
                {
                    const char *VAR53, *VAR54;
                    VAR53 = VAR55[(VAR5 & VAR50) >> VAR56];
                    VAR54 = VAR57[VAR5 & (VAR51 | VAR52)];
                    FUN2("", VAR53, VAR54, VAR49);
                }
                VAR9 = 1;
            }
            break;
            default:
                VAR9 = 0;
                break;
            }
            switch (VAR18)
            {
            case VAR58:
            case VAR59:
            case VAR36:
            case VAR41:
            case VAR39:
                FUN2("", VAR10 ? "" : "", FUN8(VAR17[VAR10])->VAR60);
                VAR9++, VAR10++;
                break;
            default:
                break;
            }
            for (; VAR9 < VAR13; VAR9++, VAR10++)
            {
                FUN2("" VAR31, VAR10 ? "" : "", VAR17[VAR10]);
            }
        }
        FUN2("");
    }
}