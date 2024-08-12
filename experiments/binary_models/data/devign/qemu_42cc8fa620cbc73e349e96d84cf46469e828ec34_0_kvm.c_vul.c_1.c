static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    int VAR5, VAR6;
    uint16_t VAR7, VAR8, VAR9, VAR10;
    if (!FUN2())
    {
        return FUN3(VAR2);
    }
    VAR4 = FUN4(4096, sizeof(struct VAR3));
    VAR5 = FUN5(VAR2, VAR11, VAR4);
    if (VAR5 < 0)
    {
        FUN6(VAR4);
        return VAR5;
    }
    VAR7 = (VAR12)VAR4->VAR13[0];
    VAR8 = (VAR12)(VAR4->VAR13[0] >> 16);
    VAR9 = (VAR12)VAR4->VAR13[1];
    VAR10 = (VAR12)(VAR4->VAR13[1] >> 16);
    VAR2->VAR14 = (VAR8 >> 11) & 7;
    VAR2->VAR15 = VAR8;
    VAR2->VAR16 = VAR7;
    for (VAR6 = 0; VAR6 < 8; ++VAR6)
    {
        VAR2->VAR17[VAR6] = !((VAR9 >> VAR6) & 1);
    }
    VAR2->VAR18 = VAR4->VAR13[VAR19];
    memcpy(VAR2->VAR20, &VAR4->VAR13[VAR21], sizeof VAR2->VAR20);
    memcpy(VAR2->VAR22, &VAR4->VAR13[VAR23], sizeof VAR2->VAR22);
    VAR2->VAR24 = *(VAR25 *)&VAR4->VAR13[VAR26];
    memcpy(VAR2->VAR27, &VAR4->VAR13[VAR28], sizeof VAR2->VAR27);
    FUN6(VAR4);
    return 0;
    return FUN3(VAR2);
}