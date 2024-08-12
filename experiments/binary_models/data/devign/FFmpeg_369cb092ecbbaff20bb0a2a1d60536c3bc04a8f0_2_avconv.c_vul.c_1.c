static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR10->VAR11;
    int VAR12 = FUN2(VAR2->VAR10->VAR11->VAR13);
    int VAR14, VAR15;
    if (!VAR2->VAR7 && !(VAR2->VAR7 = FUN3()))
        return FUN4(VAR16);
    else
        FUN5(VAR2->VAR7);
    VAR7 = VAR2->VAR7;
    VAR15 = FUN6(VAR9, VAR7, VAR5, VAR4);
    if (VAR15 < 0)
    {
        return VAR15;
    }
    if (!*VAR5)
    {
        return VAR15;
    }
    if (VAR7->VAR17 != VAR18)
        VAR2->VAR19 = VAR7->VAR17;
    VAR2->VAR19 += ((VAR20)VAR21 * VAR7->VAR22) / VAR9->VAR23;
    if (VAR24 != 256)
    {
        int VAR25 = VAR7->VAR22 * VAR9->VAR26 * VAR12;
        void *VAR27 = VAR7->VAR28[0];
        switch (VAR9->VAR13)
        {
        case VAR29:
        {
            VAR30 *VAR31 = VAR27;
            for (VAR14 = 0; VAR14 < (VAR25 / sizeof(*VAR31)); VAR14++)
            {
                int VAR32 = (((*VAR31 - 128) * VAR24 + 128) >> 8) + 128;
                *VAR31++ = FUN7(VAR32);
            }
            break;
        }
        case VAR33:
        {
            VAR34 *VAR31 = VAR27;
            for (VAR14 = 0; VAR14 < (VAR25 / sizeof(*VAR31)); VAR14++)
            {
                int VAR32 = ((*VAR31) * VAR24 + 128) >> 8;
                *VAR31++ = FUN8(VAR32);
            }
            break;
        }
        case VAR35:
        {
            VAR36 *VAR31 = VAR27;
            for (VAR14 = 0; VAR14 < (VAR25 / sizeof(*VAR31)); VAR14++)
            {
                int64_t VAR32 = (((VAR20)*VAR31 * VAR24 + 128) >> 8);
                *VAR31++ = FUN9(VAR32);
            }
            break;
        }
        case VAR37:
        {
            float *VAR31 = VAR27;
            float VAR38 = VAR24 / 256.VAR39;
            for (VAR14 = 0; VAR14 < (VAR25 / sizeof(*VAR31)); VAR14++)
            {
                *VAR31++ *= VAR38;
            }
            break;
        }
        case VAR40:
        {
            double *VAR31 = VAR27;
            double VAR38 = VAR24 / 256.;
            for (VAR14 = 0; VAR14 < (VAR25 / sizeof(*VAR31)); VAR14++)
            {
                *VAR31++ *= VAR38;
            }
            break;
        }
        default:
            FUN10(NULL, VAR41, "", FUN11(VAR2->VAR10->VAR11->VAR13));
            FUN12(1);
        }
    }
    FUN13(VAR2);
    for (VAR14 = 0; VAR14 < VAR42; VAR14++)
    {
        VAR43 *VAR44 = VAR45[VAR14];
        if (!FUN14(VAR2, VAR44) || !VAR44->VAR46)
            continue;
        FUN15(VAR47[VAR44->VAR48]->VAR49, VAR44, VAR2, VAR7);
    }
    return VAR15;
}