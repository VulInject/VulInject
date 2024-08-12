static void FUN1(struct VAR1 *VAR2, int VAR3, abi_ulong VAR4)
{
    int VAR5, VAR6, VAR7, VAR8 = 0, VAR9 = 0;
    struct VAR10 *VAR11;
    char *VAR12 = NULL;
    struct VAR13 *VAR14 = NULL;
    struct VAR15 *VAR16, *VAR17 = NULL;
    VAR6 = VAR2->VAR18;
    VAR5 = VAR6 * sizeof(struct VAR10);
    VAR11 = (struct VAR10 *)alloca(VAR5);
    if (pread(VAR3, VAR11, VAR5, VAR2->VAR19) != VAR5)
    {
        return;
    }
    FUN2(VAR11, VAR6);
    for (VAR5 = 0; VAR5 < VAR6; ++VAR5)
    {
        if (VAR11[VAR5].VAR20 == VAR21)
        {
            VAR8 = VAR5;
            VAR9 = VAR11[VAR5].VAR22;
            goto VAR23;
        }
    }
    return;
VAR23:
    VAR14 = FUN3(struct VAR13, 1);
    if (!VAR14)
    {
        goto VAR24;
    }
    VAR5 = VAR11[VAR9].VAR25;
    VAR14->VAR26 = VAR12 = FUN4(VAR5);
    if (!VAR12 || pread(VAR3, VAR12, VAR5, VAR11[VAR9].VAR27) != VAR5)
    {
        goto VAR24;
    }
    VAR5 = VAR11[VAR8].VAR25;
    VAR17 = FUN4(VAR5);
    if (!VAR17 || pread(VAR3, VAR17, VAR5, VAR11[VAR8].VAR27) != VAR5)
    {
        goto VAR24;
    }
    VAR7 = VAR5 / sizeof(struct VAR15);
    for (VAR5 = 0; VAR5 < VAR7;)
    {
        FUN5(VAR17 + VAR5);
        if (VAR17[VAR5].VAR28 == VAR29 || VAR17[VAR5].VAR28 >= VAR30 || FUN6(VAR17[VAR5].VAR31) != VAR32)
        {
            if (VAR5 < --VAR7)
            {
                VAR17[VAR5] = VAR17[VAR7];
            }
        }
        else
        {
            VAR17[VAR5].VAR33 &= ~(VAR34)1;
            VAR17[VAR5].VAR33 += VAR4;
            VAR5++;
        }
    }
    if (VAR7 == 0)
    {
        goto VAR24;
    }
    VAR16 = FUN7(struct VAR15, VAR17, VAR7);
    if (VAR16 == NULL)
    {
        goto VAR24;
    }
    VAR17 = VAR16;
    FUN8(VAR17, VAR7, sizeof(*VAR17), VAR35);
    VAR14->VAR36 = VAR7;
    VAR14->VAR37.VAR38 = VAR17;
    VAR14->VAR37.VAR39 = VAR17;
    VAR14->VAR40 = VAR41;
    VAR14->VAR42 = VAR43;
    VAR43 = VAR14;
    return;
VAR24:
    FUN9(VAR14);
    FUN9(VAR12);
    FUN9(VAR17);
}