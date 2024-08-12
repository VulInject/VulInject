static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    struct VAR5 *VAR6;
    uint16_t VAR7, VAR8, VAR9, VAR10;
    if (!FUN2())
    {
        return FUN3(VAR2);
    }
    VAR6 = FUN4(4096, sizeof(struct VAR5));
    memset(VAR6, 0, sizeof(struct VAR5));
    VAR7 = VAR8 = VAR9 = VAR10 = 0;
    VAR8 = VAR2->VAR11 & ~(7 << 11);
    VAR8 |= (VAR2->VAR12 & 7) << 11;
    VAR7 = VAR2->VAR13;
    for (VAR3 = 0; VAR3 < 8; ++VAR3)
    {
        VAR9 |= (!VAR2->VAR14[VAR3]) << VAR3;
    }
    VAR6->VAR15[0] = (VAR16)(VAR8 << 16) + VAR7;
    VAR6->VAR15[1] = (VAR16)(VAR10 << 16) + VAR9;
    memcpy(&VAR6->VAR15[VAR17], VAR2->VAR18, sizeof VAR2->VAR18);
    memcpy(&VAR6->VAR15[VAR19], VAR2->VAR20, sizeof VAR2->VAR20);
    VAR6->VAR15[VAR21] = VAR2->VAR22;
    *(VAR23 *)&VAR6->VAR15[VAR24] = VAR2->VAR25;
    memcpy(&VAR6->VAR15[VAR26], VAR2->VAR27, sizeof VAR2->VAR27);
    VAR4 = FUN5(VAR2, VAR28, VAR6);
    FUN6(VAR6);
    return VAR4;
    return FUN3(VAR2);
}