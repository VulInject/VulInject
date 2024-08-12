static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    struct VAR4 *VAR5;
    uint16_t VAR6, VAR7, VAR8, VAR9;
    if (!FUN2())
        return FUN3(VAR2);
    VAR5 = FUN4(4096, sizeof(struct VAR4));
    memset(VAR5, 0, sizeof(struct VAR4));
    VAR6 = VAR7 = VAR8 = VAR9 = 0;
    VAR7 = VAR2->VAR10 & ~(7 << 11);
    VAR7 |= (VAR2->VAR11 & 7) << 11;
    VAR6 = VAR2->VAR12;
    for (VAR3 = 0; VAR3 < 8; ++VAR3)
        VAR8 |= (!VAR2->VAR13[VAR3]) << VAR3;
    VAR5->VAR14[0] = (VAR15)(VAR7 << 16) + VAR6;
    VAR5->VAR14[1] = (VAR15)(VAR9 << 16) + VAR8;
    memcpy(&VAR5->VAR14[VAR16], VAR2->VAR17, sizeof VAR2->VAR17);
    memcpy(&VAR5->VAR14[VAR18], VAR2->VAR19, sizeof VAR2->VAR19);
    VAR5->VAR14[VAR20] = VAR2->VAR21;
    *(VAR22 *)&VAR5->VAR14[VAR23] = VAR2->VAR24;
    memcpy(&VAR5->VAR14[VAR25], VAR2->VAR26, sizeof VAR2->VAR26);
    return FUN5(VAR2, VAR27, VAR5);
    return FUN3(VAR2);
}