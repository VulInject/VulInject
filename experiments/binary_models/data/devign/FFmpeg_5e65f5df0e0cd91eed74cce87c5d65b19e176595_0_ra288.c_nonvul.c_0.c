static void update(VAR1 *VAR2)
{
    float VAR3[40], VAR4[37];
    float VAR5[8], VAR6[11];
    memcpy(VAR3, VAR2->VAR7 + 20, 20 * sizeof(*VAR3));
    memcpy(VAR3 + 20, VAR2->VAR7, 20 * sizeof(*VAR3));
    FUN1(36, 40, 35, VAR3, VAR4, VAR2->VAR8, VAR2->VAR9, VAR10);
    if (!FUN2(VAR4, VAR2->VAR11, 36))
        FUN3(VAR2->VAR12, VAR2->VAR11, VAR13, 36);
    memcpy(VAR5, VAR2->VAR14 + 4, 4 * sizeof(*VAR5));
    memcpy(VAR5 + 4, VAR2->VAR14, 4 * sizeof(*VAR5));
    FUN1(10, 8, 20, VAR5, VAR6, VAR2->VAR15, VAR2->VAR16, VAR17);
    if (!FUN2(VAR6, VAR2->VAR18, 10))
        FUN3(VAR2->VAR19, VAR2->VAR18, VAR20, 10);
}