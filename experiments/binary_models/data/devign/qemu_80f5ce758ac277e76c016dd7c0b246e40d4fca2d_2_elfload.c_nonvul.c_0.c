static int FUN1(int VAR1, const VAR2 *VAR3)
{
    const VAR4 *VAR5 = (const VAR4 *)VAR3->VAR6;
    struct VAR7 *VAR8 = NULL;
    char VAR9[VAR10];
    struct elf_note_info VAR11;
    struct elfhdr VAR12;
    struct elf_phdr VAR13;
    struct rlimit VAR14;
    struct VAR15 *VAR16 = NULL;
    off_t VAR17 = 0, VAR18 = 0;
    int VAR19 = 0;
    int VAR20 = -1;
    VAR21 = 0;
    FUN2(VAR22, &VAR14);
    if (VAR14.VAR23 == 0)
        return 0;
    if (FUN3(VAR5, VAR9, sizeof(VAR9)) < 0)
        return (-VAR21);
    if ((VAR20 = open(VAR9, VAR24 | VAR25, VAR26 | VAR27 | VAR28 | VAR29)) < 0)
        return (-VAR21);
    if ((VAR16 = FUN4()) == NULL)
        goto VAR30;
    FUN5(VAR16, VAR31);
    VAR19 = FUN6(VAR16);
    FUN7(&VAR12, VAR19 + 1, VAR32, 0);
    if (FUN8(VAR20, &VAR12, sizeof(VAR12)) != 0)
        goto VAR30;
    if (FUN9(&VAR11, VAR1, VAR3) < 0)
        goto VAR30;
    VAR17 += sizeof(VAR12);
    VAR17 += (VAR19 + 1) * sizeof(struct VAR33);
    FUN10(&VAR13, VAR11.VAR34, VAR17);
    VAR17 += VAR11.VAR34;
    if (FUN8(VAR20, &VAR13, sizeof(VAR13)) != 0)
        goto VAR30;
    VAR18 = VAR17 = FUN11(VAR17, VAR35);
    for (VAR8 = FUN12(VAR16); VAR8 != NULL; VAR8 = FUN13(VAR8))
    {
        (void)memset(&VAR13, 0, sizeof(VAR13));
        VAR13.VAR36 = VAR37;
        VAR13.VAR38 = VAR17;
        VAR13.VAR39 = VAR8->VAR40;
        VAR13.VAR41 = 0;
        VAR13.VAR42 = FUN14(VAR8);
        VAR17 += VAR13.VAR42;
        VAR13.VAR43 = VAR8->VAR44 - VAR8->VAR40;
        VAR13.VAR45 = VAR8->VAR46 & VAR47 ? VAR48 : 0;
        if (VAR8->VAR46 & VAR49)
            VAR13.VAR45 |= VAR50;
        if (VAR8->VAR46 & VAR51)
            VAR13.VAR45 |= VAR52;
        VAR13.VAR53 = VAR35;
        FUN15(&VAR13, 1);
        FUN8(VAR20, &VAR13, sizeof(VAR13));
    }
    if (FUN16(&VAR11, VAR20) < 0)
        goto VAR30;
    if (FUN17(VAR20, VAR18, VAR54) != VAR18)
        goto VAR30;
    for (VAR8 = FUN12(VAR16); VAR8 != NULL; VAR8 = FUN13(VAR8))
    {
        abi_ulong VAR55;
        abi_ulong VAR56;
        VAR56 = VAR8->VAR40 + FUN14(VAR8);
        for (VAR55 = VAR8->VAR40; VAR55 < VAR56; VAR55 += VAR57)
        {
            char VAR58[VAR57];
            int VAR59;
            VAR59 = FUN18(VAR58, VAR55, sizeof(VAR58));
            if (VAR59 != 0)
            {
                (void)fprintf(VAR60, "" VAR61 "", VAR55);
                VAR21 = -VAR59;
                goto VAR30;
            }
            if (FUN8(VAR20, VAR58, VAR57) < 0)
                goto VAR30;
        }
    }
VAR30:
    FUN19(&VAR11);
    if (VAR16 != NULL)
        FUN20(VAR16);
    (void)close(VAR20);
    if (VAR21 != 0)
        return (-VAR21);
    return (0);
}