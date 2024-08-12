static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, long VAR5)
{
    int VAR6, VAR7, VAR8;
    const VAR9 *VAR10;
    unsigned int VAR11;
    const VAR12 *VAR13;
    if (FUN2(VAR14 & VAR15))
    {
        fprintf(VAR16, "");
        FUN3(VAR2, VAR16);
        fprintf(VAR16, "");
    }
    FUN4(VAR2);
    if (FUN2(VAR14 & VAR17))
    {
        fprintf(VAR16, "");
        FUN3(VAR2, VAR16);
        fprintf(VAR16, "");
    }
    FUN5(VAR2);
    VAR2->VAR18 = VAR4;
    VAR2->VAR19 = VAR4;
    VAR8 = -1;
    VAR13 = VAR20;
    VAR7 = 0;
    for (;;)
    {
        VAR6 = VAR21[VAR7];
        VAR22[VAR6]++;
        VAR10 = &VAR23[VAR6];
        FUN6("", VAR10->VAR24, VAR10->VAR25, VAR10->VAR26, VAR10->VAR27);
        switch (VAR6)
        {
        case VAR28:
        case VAR29:
            VAR11 = VAR2->VAR30[VAR7];
            FUN7(VAR2, VAR10, VAR13, VAR11);
            break;
        case VAR31:
        case VAR32:
        case VAR33:
        case VAR34:
            break;
        case VAR35:
            VAR13 += VAR13[0];
            goto VAR36;
        case VAR37:
        {
            VAR38 *VAR39;
            VAR39 = &VAR2->VAR40[VAR13[0]];
            if (VAR39->VAR41 != VAR42 && !VAR39->VAR43)
            {
                if (VAR39->VAR41 == VAR44)
                    VAR2->VAR45[VAR39->VAR46] = -1;
                VAR39->VAR41 = VAR47;
            }
        }
        break;
        case VAR48:
            VAR8 = VAR7;
            VAR7 = VAR13[0] - 1;
            VAR13 = VAR20 + VAR13[1];
            goto VAR36;
        case VAR49:
            VAR8 = -1;
            VAR7 = VAR13[0] - 1;
            VAR13 = VAR20 + VAR13[1];
            goto VAR36;
        case VAR50:
            FUN8();
        case VAR51:
            FUN9(VAR2);
            FUN10(VAR2, VAR13[0], (long)VAR2->VAR19);
            break;
        case VAR52:
            VAR11 = VAR2->VAR30[VAR7];
            VAR13 += FUN11(VAR2, VAR10, VAR6, VAR13, VAR11);
            goto VAR36;
        case VAR53:
            goto VAR54;
        case 0 ... VAR53 - 1:
        {
            extern int64_t VAR55;
            VAR55++;
        }
            FUN9(VAR2);
            if (VAR5 >= 0)
            {
                VAR2->VAR19 += VAR10->VAR56;
                VAR13 += VAR10->VAR57;
            }
            else
            {
                VAR13 = FUN12(VAR2, VAR6, VAR13);
            }
            goto VAR36;
        default:
            VAR11 = VAR2->VAR30[VAR7];
            FUN13(VAR2, VAR10, VAR6, VAR13, VAR11);
            break;
        }
        VAR13 += VAR10->VAR57;
    VAR36:;
        if (VAR5 >= 0 && VAR5 < VAR2->VAR19 - VAR4)
        {
            if (VAR8 >= 0)
                return VAR8;
            else
                return VAR7;
        }
        VAR7++;
        FUN14(VAR2);
    }
VAR54:
    return -1;
}