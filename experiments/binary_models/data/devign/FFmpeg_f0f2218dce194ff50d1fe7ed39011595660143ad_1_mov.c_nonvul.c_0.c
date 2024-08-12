static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    uint64_t VAR13;
    int64_t VAR14;
    int VAR15 = 0;
    unsigned VAR16, VAR17 = VAR7->VAR18;
    int VAR18, VAR19, VAR20;
    for (VAR20 = 0; VAR20 < VAR2->VAR21->VAR22; VAR20++)
    {
        if (VAR2->VAR21->VAR23[VAR20]->VAR24 == VAR7->VAR25)
        {
            VAR10 = VAR2->VAR21->VAR23[VAR20];
            break;
        }
    }
    if (!VAR10)
    {
        FUN2(VAR2->VAR21, VAR26, "", VAR7->VAR25);
        return -1;
    }
    VAR12 = VAR10->VAR27;
    if (VAR12->VAR28 + 1 != VAR7->VAR29)
        return 0;
    FUN3(VAR4);
    VAR18 = FUN4(VAR4);
    VAR16 = FUN5(VAR4);
    FUN6(VAR2->VAR21, "", VAR18, VAR16);
    if (VAR18 & 0x001)
        VAR15 = FUN5(VAR4);
    if (VAR18 & 0x004)
        VAR17 = FUN5(VAR4);
    if (VAR18 & 0x800)
    {
        VAR30 *VAR31;
        if ((VAR32)VAR16 + VAR12->VAR33 >= VAR34 / sizeof(*VAR12->VAR31))
            return -1;
        VAR31 = FUN7(VAR12->VAR31, (VAR16 + VAR12->VAR33) * sizeof(*VAR12->VAR31));
        if (!VAR31)
            return FUN8(VAR35);
        VAR12->VAR31 = VAR31;
    }
    VAR14 = VAR10->VAR36;
    VAR13 = VAR7->VAR37 + VAR15;
    VAR19 = 0;
    FUN6(VAR2->VAR21, "", VAR17);
    for (VAR20 = 0; VAR20 < VAR16; VAR20++)
    {
        unsigned VAR38 = VAR7->VAR39;
        int VAR40 = VAR20 ? VAR7->VAR18 : VAR17;
        unsigned VAR41 = VAR7->VAR36;
        int VAR42;
        if (VAR18 & 0x100)
            VAR41 = FUN5(VAR4);
        if (VAR18 & 0x200)
            VAR38 = FUN5(VAR4);
        if (VAR18 & 0x400)
            VAR40 = FUN5(VAR4);
        if (VAR18 & 0x800)
        {
            VAR12->VAR31[VAR12->VAR33].VAR43 = 1;
            VAR12->VAR31[VAR12->VAR33].VAR36 = FUN5(VAR4);
            VAR12->VAR33++;
        }
        if ((VAR42 = VAR10->VAR44->VAR45 == VAR46 || (VAR18 & 0x004 && !VAR20 && !VAR40) || VAR40 & 0x2000000))
            VAR19 = 0;
        FUN9(VAR10, VAR13, VAR14, VAR38, VAR19, VAR42 ? VAR47 : 0);
        FUN6(VAR2->VAR21, "" VAR48 "" VAR49 ""
                       "",
                VAR10->VAR50, VAR12->VAR51 + VAR20, VAR13, VAR14, VAR38, VAR19, VAR42);
        VAR19++;
        assert(VAR41 % VAR12->VAR52 == 0);
        VAR14 += VAR41 / VAR12->VAR52;
        VAR13 += VAR38;
    }
    VAR7->VAR53 = VAR13;
    VAR10->VAR36 = VAR14;
    return 0;
}