static VAR1 FUN1(struct VAR2 *VAR3, int VAR4, VAR1 *VAR5, char VAR6[VAR7])
{
    struct VAR8 *VAR9 = NULL;
    abi_ulong VAR10, VAR11, VAR12, VAR13;
    int VAR14;
    abi_ulong VAR15;
    int VAR16;
    FUN2(VAR3);
    if (!FUN3(VAR3))
    {
        return ~((VAR1)0UL);
    }
    VAR9 = (struct VAR8 *)malloc(sizeof(struct VAR8) * VAR3->VAR17);
    if (!VAR9)
        return ~((VAR1)0UL);
    VAR16 = VAR3->VAR17 * sizeof(struct VAR8);
    if (VAR3->VAR18 + VAR16 <= VAR7)
    {
        memcpy(VAR9, VAR6 + VAR3->VAR18, VAR16);
    }
    else
    {
        VAR14 = pread(VAR4, VAR9, VAR16, VAR3->VAR18);
        if (VAR14 != VAR16)
        {
            FUN4("");
            FUN5(-1);
        }
    }
    FUN6(VAR9, VAR3->VAR17);
    VAR12 = -1, VAR13 = 0;
    for (VAR16 = 0; VAR16 < VAR3->VAR17; ++VAR16)
    {
        if (VAR9[VAR16].VAR19 == VAR20)
        {
            abi_ulong VAR21 = VAR9[VAR16].VAR22;
            if (VAR21 < VAR12)
            {
                VAR12 = VAR21;
            }
            VAR21 += VAR9[VAR16].VAR23;
            if (VAR21 > VAR13)
            {
                VAR13 = VAR21;
            }
        }
    }
    VAR10 = VAR12;
    if (VAR3->VAR24 == VAR25)
    {
        VAR10 = FUN7(VAR12, VAR13 - VAR12, VAR26, VAR27 | VAR28 | VAR29, -1, 0);
        if (VAR10 == -1)
        {
            FUN4("");
            FUN5(-1);
        }
    }
    VAR11 = VAR10 - VAR12;
    for (VAR16 = 0; VAR16 < VAR3->VAR17; VAR16++)
    {
        struct VAR8 *VAR30 = VAR9 + VAR16;
        if (VAR30->VAR19 == VAR20)
        {
            abi_ulong VAR31, VAR32, VAR33, VAR34, VAR35;
            int VAR36 = 0;
            if (VAR30->VAR37 & VAR38)
                VAR36 = VAR39;
            if (VAR30->VAR37 & VAR40)
                VAR36 |= VAR41;
            if (VAR30->VAR37 & VAR42)
                VAR36 |= VAR43;
            VAR31 = VAR11 + VAR30->VAR22;
            VAR32 = FUN8(VAR31);
            VAR33 = FUN9(VAR31);
            VAR15 = FUN7(VAR33, VAR30->VAR44 + VAR32, VAR36, VAR27 | VAR45, VAR4, VAR30->VAR46 - VAR32);
            if (VAR15 == -1)
            {
                close(VAR4);
                free(VAR9);
                return ~((VAR1)0UL);
            }
            VAR34 = VAR31 + VAR30->VAR44;
            VAR35 = VAR31 + VAR30->VAR23;
            if (VAR34 < VAR35)
            {
                FUN10(VAR34, VAR35, VAR36);
            }
        }
    }
    if (FUN11())
    {
        FUN12(VAR3, VAR4, VAR11);
    }
    close(VAR4);
    free(VAR9);
    *VAR5 = VAR10;
    return ((VAR1)VAR3->VAR47) + VAR11;
}