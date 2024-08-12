FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    uint32_t VAR7 = FUN3(VAR4->VAR8.VAR9);
    uint32_t VAR10 = VAR7 & (VAR11 | VAR12);
    unsigned int VAR13 = VAR7 & 0xffff, VAR14, VAR15;
    unsigned int VAR16 = 0xfffff;
    uint64_t VAR17;
    struct VAR18 *VAR19 = (struct VAR18 *)VAR4;
    struct VAR20 *VAR21 = &VAR2->VAR22;
    VAR2->VAR23 |= (VAR7 & VAR24);
    if (VAR10 == VAR11)
    {
        FUN4(VAR19, &VAR21->VAR25);
        VAR21->VAR26 = 0;
        if (VAR21->VAR25.VAR27 == 0)
        {
            FUN5(VAR28, "");
            VAR21->VAR25.VAR27 = VAR21->VAR25.VAR29 + (VAR21->VAR25.VAR30 ? 16 : 6);
        }
        return;
    }
    else if (VAR10 == (VAR11 | VAR12))
    {
        if (VAR21->VAR31 == 0)
        {
            VAR21->VAR32 = FUN3(VAR4->VAR33.VAR9) >> 8;
        }
        VAR21->VAR34 = (VAR7 & VAR35) ? 1 : 0;
    }
    else
    {
        VAR21->VAR34 = 0;
    }
    if (FUN6(VAR2->VAR36) && FUN7(VAR7) && (VAR21->VAR34 || VAR7 & VAR37))
    {
        VAR21->VAR38 = 1;
        FUN8(VAR21->VAR39, FUN9(VAR2->VAR36[VAR40]));
        FUN8(VAR21->VAR39 + 2, FUN9(VAR4->VAR33.VAR41.VAR42));
    }
    VAR17 = FUN10(VAR4->VAR43);
    if (VAR21->VAR25.VAR44 && VAR21->VAR34)
    {
        VAR16 = VAR21->VAR25.VAR45 + VAR21->VAR25.VAR46;
        do
        {
            VAR14 = VAR13;
            if (VAR21->VAR31 + VAR14 > VAR16)
                VAR14 = VAR16 - VAR21->VAR31;
            VAR14 = FUN11(sizeof(VAR21->VAR9) - VAR21->VAR31, VAR14);
            FUN12(VAR6, VAR17, VAR21->VAR9 + VAR21->VAR31, VAR14);
            VAR15 = VAR21->VAR31 + VAR14;
            if (VAR15 >= VAR21->VAR25.VAR45 && VAR21->VAR31 < VAR21->VAR25.VAR45)
            {
                memmove(VAR21->VAR47, VAR21->VAR9, VAR21->VAR25.VAR45);
            }
            VAR21->VAR31 = VAR15;
            VAR17 += VAR14;
            if (VAR15 == VAR16)
            {
                FUN13(VAR2);
                memmove(VAR21->VAR9, VAR21->VAR47, VAR21->VAR25.VAR45);
                VAR21->VAR31 = VAR21->VAR25.VAR45;
            }
            VAR13 -= VAR14;
        } while (VAR14 && VAR13);
    }
    else if (!VAR21->VAR25.VAR44 && VAR21->VAR34)
    {
        FUN5(VAR48, "");
    }
    else
    {
        VAR13 = FUN11(sizeof(VAR21->VAR9) - VAR21->VAR31, VAR13);
        FUN12(VAR6, VAR17, VAR21->VAR9 + VAR21->VAR31, VAR13);
        VAR21->VAR31 += VAR13;
    }
    if (!(VAR7 & VAR37))
        return;
    if (!(VAR21->VAR25.VAR44 && VAR21->VAR34 && VAR21->VAR31 < VAR21->VAR25.VAR45))
    {
        FUN13(VAR2);
    }
    VAR21->VAR26 = 0;
    VAR21->VAR32 = 0;
    VAR21->VAR38 = 0;
    VAR21->VAR31 = 0;
    VAR21->VAR34 = 0;
}