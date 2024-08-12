VAR1 *FUN1(VAR2 *VAR3, int VAR4, unsigned long int VAR5, void *VAR6, VAR7 *VAR8, void *VAR9)
{
    struct VAR10 *VAR11;
    VAR11 = FUN2(&VAR12, VAR3, VAR8, VAR9);
    if (!VAR11)
        return NULL;
    VAR11->VAR13 = VAR14;
    VAR11->VAR15 = VAR4;
    VAR11->VAR16 = VAR17;
    VAR11->VAR18 = 0;
    VAR11->VAR19 = VAR6;
    VAR11->VAR20 = VAR5;
    VAR11->VAR21 = VAR22->VAR23;
    VAR22->VAR23 = VAR11;
    FUN3(VAR11);
    return &VAR11->VAR24;
}