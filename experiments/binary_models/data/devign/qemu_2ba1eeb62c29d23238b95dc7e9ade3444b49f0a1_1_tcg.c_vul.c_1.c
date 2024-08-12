static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR3 *VAR6)
{
    int VAR7, VAR8, VAR9;
    const VAR10 *VAR11;
    unsigned int VAR12;
    const VAR13 *VAR14;
    if (FUN2(VAR15 & VAR16))
    {
        fprintf(VAR17, "");
        FUN3(VAR2, VAR17);
        fprintf(VAR17, "");
    }
    FUN4(VAR2);
    if (FUN2(VAR15 & VAR18))
    {
        fprintf(VAR17, "");
        FUN3(VAR2, VAR17);
        fprintf(VAR17, "");
    }
    FUN5(VAR2);
    VAR2->VAR19 = VAR4;
    VAR2->VAR20 = VAR4;
    VAR9 = -1;
    VAR14 = VAR21;
    VAR8 = 0;
    for (;;)
    {
        VAR7 = VAR22[VAR8];
        VAR23[VAR7]++;
        VAR11 = &VAR24[VAR7];
        FUN6("", VAR11->VAR25, VAR11->VAR26, VAR11->VAR27, VAR11->VAR28);
        switch (VAR7)
        {
        case VAR29:
        case VAR30:
            VAR12 = VAR2->VAR31[VAR8];
            FUN7(VAR2, VAR11, VAR14, VAR12);
            break;
        case VAR32:
        case VAR33:
        case VAR34:
        case VAR35:
            break;
        case VAR36:
            VAR14 += VAR14[0];
            goto VAR37;
        case VAR38:
        {
            VAR39 *VAR40;
            VAR40 = &VAR2->VAR41[VAR14[0]];
            if (VAR40->VAR42 != VAR43 && !VAR40->VAR44)
            {
                if (VAR40->VAR42 == VAR45)
                    VAR2->VAR46[VAR40->VAR47] = -1;
                VAR40->VAR42 = VAR48;
            }
        }
        break;
        case VAR49:
            VAR9 = VAR8;
            VAR8 = VAR14[0] - 1;
            VAR14 = VAR21 + VAR14[1];
            goto VAR37;
        case VAR50:
            VAR9 = -1;
            VAR8 = VAR14[0] - 1;
            VAR14 = VAR21 + VAR14[1];
            goto VAR37;
        case VAR51:
            FUN8();
        case VAR52:
            FUN9(VAR2);
            FUN10(VAR2, VAR14[0], (long)VAR2->VAR20);
            break;
        case VAR53:
            VAR12 = VAR2->VAR31[VAR8];
            VAR14 += FUN11(VAR2, VAR11, VAR7, VAR14, VAR12);
            goto VAR37;
        case VAR54:
            goto VAR55;
        case 0 ... VAR54 - 1:
        {
            extern int64_t VAR56;
            VAR56++;
        }
            FUN9(VAR2);
            if (VAR5)
            {
                VAR2->VAR20 += VAR11->VAR57;
                VAR14 += VAR11->VAR58;
            }
            else
            {
                VAR14 = FUN12(VAR2, VAR7, VAR14);
            }
            goto VAR37;
        default:
            VAR12 = VAR2->VAR31[VAR8];
            FUN13(VAR2, VAR11, VAR7, VAR14, VAR12);
            break;
        }
        VAR14 += VAR11->VAR58;
    VAR37:;
        if (VAR5)
        {
            if (VAR6 < VAR2->VAR20)
            {
                if (VAR9 >= 0)
                    return VAR9;
                else
                    return VAR8;
            }
        }
        VAR8++;
        FUN14(VAR2);
    }
VAR55:
    return -1;
}