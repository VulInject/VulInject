static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, FUN2 (*VAR5)[2], int VAR6, int VAR7)
{
    VAR8 *const VAR9 = &VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14[10][2];
    const int VAR15 = 1 + VAR2->VAR16;
    const int VAR17 = VAR2->VAR18;
    const int VAR19 = VAR4 * VAR17 + VAR3;
    VAR20 *const VAR21 = VAR9->VAR21[VAR7] + VAR22;
    int VAR23;
    VAR9->VAR24 = FUN3(VAR2->VAR25, VAR2->VAR26, VAR9->VAR27->VAR28);
    VAR9->VAR29 = FUN3(VAR2->VAR25, VAR2->VAR26, VAR9->VAR27->VAR30);
    VAR9->VAR31 = FUN3(VAR2->VAR25, VAR2->VAR26, VAR9->VAR27->VAR32);
    VAR9->VAR33 = VAR21;
    FUN4(VAR2, 16 * VAR3, 16 * VAR4);
    switch (VAR2->VAR34)
    {
    case VAR35:
    default:
        FUN5(VAR2, &VAR11, &VAR12);
        VAR13 = 0;
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR36:
        VAR13 = FUN6(VAR2, &VAR11, &VAR12, VAR37, VAR38);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR39:
        VAR13 = FUN7(VAR2, &VAR11, &VAR12, VAR37 / 2, VAR38);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR40:
        VAR13 = FUN8(VAR2, &VAR11, &VAR12, VAR37 / 2, VAR38);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR41:
    case VAR42:
    {
        VAR43[0] = VAR5[VAR19 - 1][0];
        VAR43[1] = VAR5[VAR19 - 1][1];
        if (VAR43[0] > (VAR9->VAR44 << VAR15))
            VAR43[0] = (VAR9->VAR44 << VAR15);
        if (!VAR2->VAR45)
        {
            VAR46[0] = VAR5[VAR19 - VAR17][0];
            VAR46[1] = VAR5[VAR19 - VAR17][1];
            VAR47[0] = VAR5[VAR19 - VAR17 + 1][0];
            VAR47[1] = VAR5[VAR19 - VAR17 + 1][1];
            if (VAR46[1] > (VAR9->VAR48 << VAR15))
                VAR46[1] = (VAR9->VAR48 << VAR15);
            if (VAR47[0] < (VAR9->VAR49 << VAR15))
                VAR47[0] = (VAR9->VAR49 << VAR15);
            if (VAR47[1] > (VAR9->VAR48 << VAR15))
                VAR47[1] = (VAR9->VAR48 << VAR15);
            VAR50[0] = FUN9(VAR43[0], VAR46[0], VAR47[0]);
            VAR50[1] = FUN9(VAR43[1], VAR46[1], VAR47[1]);
        }
        VAR9->VAR51 = VAR43[0];
        VAR9->VAR52 = VAR43[1];
    }
        if (VAR5 == VAR2->VAR53)
        {
            VAR23 = (VAR2->VAR54 << 16) / (VAR2->VAR55 << VAR15);
        }
        else
        {
            VAR23 = ((VAR2->VAR54 - VAR2->VAR55) << 16) / (VAR2->VAR55 << VAR15);
        }
        VAR13 = FUN10(VAR2, &VAR11, &VAR12, VAR14, 0, VAR6, VAR2->VAR56, VAR23, 0, 16);
        break;
    }
    VAR13 = VAR9->FUN11(VAR2, &VAR11, &VAR12, VAR13, 0, VAR6, 0, 16);
    if (VAR9->VAR27->VAR30 != VAR9->VAR27->VAR32 && !VAR9->VAR57)
        VAR13 = FUN12(VAR2, VAR11, VAR12, 0, VAR6, 0, 16, 1);
    VAR5[VAR19][0] = VAR11;
    VAR5[VAR19][1] = VAR12;
    return VAR13;
}