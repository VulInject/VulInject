static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, void **VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    QCowExtension VAR11;
    uint64_t VAR12;
    int VAR13;
    FUN2("", VAR3, VAR4);
    VAR12 = VAR3;
    while (VAR12 < VAR4)
    {
        if (VAR12 > VAR9->VAR14)
            FUN2("", VAR12);
        FUN2("", VAR12);
        VAR13 = FUN3(VAR2->VAR15, VAR12, &VAR11, sizeof(VAR11));
        if (VAR13 < 0)
        {
            FUN4(VAR7, -VAR13, ""
                                         "" VAR16,
                             VAR12);
            return 1;
        }
        FUN5(&VAR11.VAR17);
        FUN5(&VAR11.VAR18);
        VAR12 += sizeof(VAR11);
        FUN2("", VAR11.VAR17);
        if (VAR11.VAR18 > VAR4 - VAR12)
        {
            FUN6(VAR7, "");
            return -VAR19;
        }
        switch (VAR11.VAR17)
        {
        case VAR20:
            return 0;
        case VAR21:
            if (VAR11.VAR18 >= sizeof(VAR2->VAR22))
            {
                FUN6(VAR7, "" VAR23 "", VAR11.VAR18, sizeof(VAR2->VAR22));
                return 2;
            }
            VAR13 = FUN3(VAR2->VAR15, VAR12, VAR2->VAR22, VAR11.VAR18);
            if (VAR13 < 0)
            {
                FUN4(VAR7, -VAR13, ""
                                             "");
                return 3;
            }
            VAR2->VAR22[VAR11.VAR18] = '';
            FUN2("", VAR2->VAR22);
            break;
        case VAR24:
            if (VAR5 != NULL)
            {
                void *VAR25 = FUN7(VAR11.VAR18 + 2 * sizeof(VAR26));
                VAR13 = FUN3(VAR2->VAR15, VAR12, VAR25, VAR11.VAR18);
                if (VAR13 < 0)
                {
                    FUN4(VAR7, -VAR13, ""
                                                 "");
                    return VAR13;
                }
                *VAR5 = VAR25;
            }
            break;
        default:
        {
            VAR27 *VAR28;
            VAR28 = FUN7(sizeof(*VAR28) + VAR11.VAR18);
            VAR28->VAR17 = VAR11.VAR17;
            VAR28->VAR18 = VAR11.VAR18;
            FUN8(&VAR9->VAR29, VAR28, VAR30);
            VAR13 = FUN3(VAR2->VAR15, VAR12, VAR28->VAR31, VAR28->VAR18);
            if (VAR13 < 0)
            {
                FUN4(VAR7, -VAR13, ""
                                             "");
                return VAR13;
            }
        }
        break;
        }
        VAR12 += ((VAR11.VAR18 + 7) & ~7);
    }
    return 0;
}