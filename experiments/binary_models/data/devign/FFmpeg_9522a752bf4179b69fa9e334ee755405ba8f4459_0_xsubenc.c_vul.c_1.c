static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    uint64_t VAR8 = VAR7->VAR9 / 1000;
    uint64_t VAR10 = VAR8 + VAR7->VAR11 - VAR7->VAR12;
    int VAR13[4], VAR14[4];
    VAR15 *VAR16 = VAR3 + 27;
    VAR15 *VAR17;
    uint16_t VAR18, VAR19;
    int VAR20;
    PutBitContext VAR21;
    if (VAR4 < 27 + 7 * 2 + 4 * 3)
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    if (VAR7->VAR23 > 1)
        FUN2(VAR2, VAR24, "", VAR7->VAR23);
    if (!VAR7->VAR25[0]->VAR26.VAR5[0] || !VAR7->VAR25[0]->VAR26.VAR5[1])
    {
        FUN2(VAR2, VAR24, "");
        return -1;
    }
    if (VAR7->VAR25[0]->VAR27 > 4)
        FUN2(VAR2, VAR24, "", VAR7->VAR25[0]->VAR27);
    if (((VAR28 *)VAR7->VAR25[0]->VAR26.VAR5[1])[0] & 0xff)
        FUN2(VAR2, VAR24, "");
    if (FUN3(VAR8, VAR13) || FUN3(VAR10, VAR14))
    {
        FUN2(VAR2, VAR24, "");
        return -1;
    }
    snprintf(VAR3, 28, "", VAR13[3], VAR13[2], VAR13[1], VAR13[0], VAR14[3], VAR14[2], VAR14[1], VAR14[0]);
    VAR18 = FUN4(VAR7->VAR25[0]->VAR29, 2) + VAR30 * 2;
    VAR19 = FUN4(VAR7->VAR25[0]->VAR7, 2);
    FUN5(&VAR16, VAR18);
    FUN5(&VAR16, VAR19);
    FUN5(&VAR16, VAR7->VAR25[0]->VAR31);
    FUN5(&VAR16, VAR7->VAR25[0]->VAR32);
    FUN5(&VAR16, VAR7->VAR25[0]->VAR31 + VAR18);
    FUN5(&VAR16, VAR7->VAR25[0]->VAR32 + VAR19);
    VAR17 = VAR16;
    VAR16 += 2;
    for (VAR20 = 0; VAR20 < 4; VAR20++)
        FUN6(&VAR16, ((VAR28 *)VAR7->VAR25[0]->VAR26.VAR5[1])[VAR20]);
    FUN7(&VAR21, VAR16, VAR4 - (VAR16 - VAR3) - 2);
    if (FUN8(&VAR21, VAR7->VAR25[0]->VAR26.VAR5[0], VAR7->VAR25[0]->VAR26.VAR33[0] * 2, VAR7->VAR25[0]->VAR29, (VAR7->VAR25[0]->VAR7 + 1) >> 1))
        return -1;
    FUN5(&VAR17, FUN9(&VAR21) >> 3);
    if (FUN8(&VAR21, VAR7->VAR25[0]->VAR26.VAR5[0] + VAR7->VAR25[0]->VAR26.VAR33[0], VAR7->VAR25[0]->VAR26.VAR33[0] * 2, VAR7->VAR25[0]->VAR29, VAR7->VAR25[0]->VAR7 >> 1))
        return -1;
    if (VAR7->VAR25[0]->VAR7 & 1)
    {
        FUN10(&VAR21, VAR7->VAR25[0]->VAR29, VAR34);
        FUN11(&VAR21);
    }
    FUN12(&VAR21);
    return VAR16 - VAR3 + FUN9(&VAR21) / 8;
}