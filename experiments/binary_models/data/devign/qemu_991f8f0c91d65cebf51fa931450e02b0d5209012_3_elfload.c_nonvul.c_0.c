static void FUN1(struct VAR1 *VAR2, int VAR3)
{
    unsigned int VAR4, VAR5;
    struct elf_shdr VAR6, VAR7, VAR8;
    char *VAR9;
    struct VAR10 *VAR11;
    struct VAR12 *VAR13;
    FUN2(VAR3, VAR2->VAR14, VAR15);
    for (VAR4 = 0; VAR4 < VAR2->VAR16; VAR4++)
    {
        if (read(VAR3, &VAR6, sizeof(VAR6)) != sizeof(VAR6))
            return;
        FUN3(&VAR6, 1);
        if (VAR6.VAR17 == VAR18)
        {
            VAR7 = VAR6;
            FUN2(VAR3, VAR2->VAR14 + sizeof(VAR6) * VAR6.VAR19, VAR15);
            if (read(VAR3, &VAR8, sizeof(VAR8)) != sizeof(VAR8))
                return;
            FUN3(&VAR8, 1);
            goto VAR20;
        }
    }
    return;
VAR20:
    VAR11 = malloc(sizeof(*VAR11));
    VAR13 = malloc(VAR7.VAR21);
    if (!VAR13)
        return;
    VAR11->VAR22 = VAR9 = malloc(VAR8.VAR21);
    if (!VAR11->VAR22)
        return;
    FUN2(VAR3, VAR7.VAR23, VAR15);
    if (read(VAR3, VAR13, VAR7.VAR21) != VAR7.VAR21)
        return;
    VAR5 = VAR7.VAR21 / sizeof(struct VAR12);
    VAR4 = 0;
    while (VAR4 < VAR5)
    {
        FUN4(VAR13 + VAR4);
        if (VAR13[VAR4].VAR24 == VAR25 || VAR13[VAR4].VAR24 >= VAR26 || FUN5(VAR13[VAR4].VAR27) != VAR28)
        {
            VAR5--;
            if (VAR4 < VAR5)
            {
                VAR13[VAR4] = VAR13[VAR5];
            }
            continue;
        }
        VAR13[VAR4].VAR29 &= ~(VAR30)1;
        VAR4++;
    }
    VAR13 = realloc(VAR13, VAR5 * sizeof(*VAR13));
    FUN6(VAR13, VAR5, sizeof(*VAR13), VAR31);
    FUN2(VAR3, VAR8.VAR23, VAR15);
    if (read(VAR3, VAR9, VAR8.VAR21) != VAR8.VAR21)
        return;
    VAR11->VAR32 = VAR5;
    VAR11->VAR33.VAR34 = VAR13;
    VAR11->VAR35 = VAR36;
    VAR11->VAR33.VAR37 = VAR13;
    VAR11->VAR35 = VAR36;
    VAR11->VAR38 = VAR39;
    VAR39 = VAR11;
}