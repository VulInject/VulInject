int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    struct lib_info VAR7[VAR8];
    abi_ulong VAR9 = VAR2->VAR9;
    abi_ulong VAR10;
    abi_ulong VAR11;
    abi_ulong VAR12;
    int VAR13;
    int VAR14, VAR15;
    memset(VAR7, 0, sizeof(VAR7));
    VAR10 = 0;
    for (VAR14 = 0; VAR14 < VAR2->argc; ++VAR14)
    {
        VAR10 += strlen(VAR2->argv[VAR14]);
    }
    for (VAR14 = 0; VAR14 < VAR2->VAR16; ++VAR14)
    {
        VAR10 += strlen(VAR2->VAR17[VAR14]);
    }
    VAR10 += (VAR2->argc + 1) * 4;
    VAR10 += (VAR2->VAR16 + 1) * 4;
    VAR13 = FUN2(VAR2, VAR7, 0, &VAR10);
    if (VAR13 > (unsigned long)-4096)
        return VAR13;
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        if (VAR7[VAR14].VAR18)
        {
            abi_ulong VAR9;
            VAR9 = VAR7[VAR14].VAR19;
            for (VAR15 = 0; VAR15 < VAR8; VAR15++)
            {
                VAR9 -= 4;
                if (FUN3(VAR7[VAR15].VAR18 ? VAR7[VAR15].VAR19 : VAR20, VAR9))
                    return -VAR21;
            }
        }
    }
    VAR9 = ((VAR7[0].VAR22 + VAR10 + 3) & ~3) - 4;
    FUN4("", (int)VAR9);
    VAR9 = FUN5(VAR9, VAR2->VAR16, VAR2->VAR17);
    VAR9 = FUN5(VAR9, VAR2->argc, VAR2->argv);
    VAR12 = VAR9 & ~(VAR23)(sizeof(VAR23) - 1);
    VAR10 = VAR2->VAR16 + VAR2->argc + 2;
    VAR10 += 3;
    VAR10 *= sizeof(VAR23);
    if ((VAR12 + VAR10) & 15)
        VAR12 -= 16 - ((VAR12 + VAR10) & 15);
    VAR12 = FUN6(VAR2->VAR16, VAR2->argc, VAR12, VAR9, FUN7());
    VAR11 = VAR7[0].VAR24;
    for (VAR14 = VAR8 - 1; VAR14 > 0; VAR14--)
    {
        if (VAR7[VAR14].VAR18)
        {
            --VAR12;
            if (FUN3(VAR11, VAR12))
                return -VAR21;
            VAR11 = VAR7[VAR14].VAR24;
        }
    }
    VAR6->VAR25 = VAR7[0].VAR25;
    VAR6->VAR26 = VAR7[0].VAR25 = VAR7[0].VAR27;
    VAR6->VAR19 = VAR7[0].VAR19;
    VAR6->VAR28 = VAR7[0].VAR28;
    VAR6->VAR22 = VAR7[0].VAR22;
    VAR6->VAR29 = VAR12;
    VAR6->VAR30 = VAR7[0].VAR22;
    VAR6->VAR24 = VAR11;
    VAR6->VAR31 = VAR6->VAR25;
    VAR6->VAR32 = VAR6->VAR19 - VAR7[0].VAR27;
    FUN4("", (int)VAR6->VAR24, (int)VAR6->VAR29);
    return 0;
}