int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    uint8_t VAR5[1600];
    struct VAR6 *VAR7 = (struct VAR6 *)VAR5;
    uint8_t VAR8[VAR9];
    const struct VAR10 *VAR11 = (const struct VAR10 *)VAR4->VAR12;
    int VAR13;
    if (VAR4->VAR14 + VAR15 > sizeof(VAR5))
    {
        return 1;
    }
    switch (VAR11->VAR16)
    {
    case VAR17:
        VAR13 = FUN2(VAR2, VAR4, VAR7, VAR8);
        if (VAR13 < 2)
        {
            return VAR13;
        }
        break;
    case VAR18:
        VAR13 = FUN3(VAR2, VAR4, VAR7, VAR8);
        if (VAR13 < 2)
        {
            return VAR13;
        }
        break;
    default:
        FUN4();
        break;
    }
    memcpy(VAR7->VAR19, VAR8, VAR9);
    FUN5((VAR20, "", VAR7->VAR21[0], VAR7->VAR21[1], VAR7->VAR21[2], VAR7->VAR21[3], VAR7->VAR21[4], VAR7->VAR21[5]));
    FUN5((VAR20, "", VAR7->VAR19[0], VAR7->VAR19[1], VAR7->VAR19[2], VAR7->VAR19[3], VAR7->VAR19[4], VAR7->VAR19[5]));
    memcpy(VAR5 + sizeof(struct VAR6), VAR4->VAR12, VAR4->VAR14);
    FUN6(VAR2->VAR22, VAR5, VAR4->VAR14 + VAR15);
    return 1;
}