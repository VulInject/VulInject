static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    uint64_t VAR13;
    int64_t VAR14;
    int VAR15 = 0;
    unsigned VAR16, VAR17 = VAR7->VAR18;
    int VAR18, VAR19, VAR20;
    if (!VAR7->VAR21 || VAR7->VAR21 > VAR2->VAR22->VAR23)
        return -1;
    VAR10 = VAR2->VAR22->VAR24[VAR7->VAR21 - 1];
    VAR12 = VAR10->VAR25;
    if (VAR12->VAR26 + 1 != VAR7->VAR27)
        return 0;
    if (!VAR10->VAR28)
        return -1;
    FUN2(VAR4);
    VAR18 = FUN3(VAR4);
    VAR16 = FUN4(VAR4);
    FUN5(VAR2->VAR22, "", VAR18, VAR16);
    if (VAR18 & 0x001)
        VAR15 = FUN4(VAR4);
    if (VAR18 & 0x004)
        VAR17 = FUN4(VAR4);
    if (VAR18 & 0x800)
    {
        if ((VAR29)VAR16 + VAR12->VAR30 >= VAR31 / sizeof(*VAR12->VAR32))
            return -1;
        VAR12->VAR32 = FUN6(VAR12->VAR32, (VAR16 + VAR12->VAR30) * sizeof(*VAR12->VAR32));
        if (!VAR12->VAR32)
            return FUN7(VAR33);
    }
    VAR14 = VAR10->VAR34;
    VAR13 = VAR7->VAR35 + VAR15;
    VAR19 = 0;
    FUN5(VAR2->VAR22, "", VAR17);
    for (VAR20 = 0; VAR20 < VAR16; VAR20++)
    {
        unsigned VAR36 = VAR7->VAR37;
        int VAR38 = VAR20 ? VAR7->VAR18 : VAR17;
        unsigned VAR39 = VAR7->VAR34;
        int VAR40;
        if (VAR18 & 0x100)
            VAR39 = FUN4(VAR4);
        if (VAR18 & 0x200)
            VAR36 = FUN4(VAR4);
        if (VAR18 & 0x400)
            VAR38 = FUN4(VAR4);
        if (VAR18 & 0x800)
        {
            VAR12->VAR32[VAR12->VAR30].VAR41 = 1;
            VAR12->VAR32[VAR12->VAR30].VAR34 = FUN4(VAR4);
            VAR12->VAR30++;
        }
        if ((VAR40 = VAR10->VAR42->VAR43 == VAR44 || (VAR18 & 0x004 && !VAR20 && !VAR38) || VAR38 & 0x2000000))
            VAR19 = 0;
        FUN8(VAR10, VAR13, VAR14, VAR36, VAR19, VAR40 ? VAR45 : 0);
        FUN5(VAR2->VAR22, "" VAR46 "" VAR47 ""
                       "",
                VAR10->VAR48, VAR12->VAR49 + VAR20, VAR13, VAR14, VAR36, VAR19, VAR40);
        VAR19++;
        assert(VAR39 % VAR12->VAR50 == 0);
        VAR14 += VAR39 / VAR12->VAR50;
        VAR13 += VAR36;
    }
    VAR7->VAR51 = VAR13;
    VAR12->VAR49 = VAR10->VAR28;
    VAR10->VAR34 = VAR14;
    return 0;
}