VAR1 *FUN1(VAR2 *VAR3, void *VAR4, int VAR5, int64_t VAR6, VAR7 *VAR8, int VAR9, VAR10 *VAR11, void *VAR12, int VAR13)
{
    struct VAR14 *VAR15 = VAR4;
    struct VAR16 *VAR17;
    struct VAR18 *VAR19;
    off_t VAR20 = VAR6 * 512;
    VAR17 = FUN2(&VAR21, VAR3, VAR11, VAR12);
    if (!VAR17)
        return NULL;
    VAR17->VAR22 = VAR9 * 512;
    VAR17->VAR23 = VAR15;
    VAR17->VAR24 = -VAR25;
    VAR19 = &VAR17->VAR18;
    switch (VAR13)
    {
    case VAR26:
        FUN3(VAR19, VAR5, VAR8->VAR27, VAR8->VAR28, VAR20);
        break;
    case VAR29:
        FUN4(VAR19, VAR5, VAR8->VAR27, VAR8->VAR28, VAR20);
        break;
    default:
        fprintf(VAR30, "", VAR31, VAR13);
        goto VAR32;
    }
    FUN5(&VAR17->VAR18, VAR15->VAR33);
    VAR15->VAR34++;
    if (FUN6(VAR15->VAR23, 1, &VAR19) < 0)
        goto VAR35;
    return &VAR17->VAR36;
VAR32:
    FUN7(VAR17);
VAR35:
    VAR15->VAR34--;
    return NULL;
}