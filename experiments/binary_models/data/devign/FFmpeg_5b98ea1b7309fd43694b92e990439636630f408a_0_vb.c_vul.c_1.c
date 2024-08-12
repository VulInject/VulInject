static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR7 *VAR14, *VAR15;
    int VAR16, VAR17;
    int VAR18;
    uint32_t VAR10;
    int VAR19 = VAR9;
    int VAR20 = 0;
    if (VAR12->VAR21.VAR3[0])
        VAR2->FUN2(VAR2, &VAR12->VAR21);
    VAR12->VAR21.VAR22 = 3;
    if (VAR2->FUN3(VAR2, &VAR12->VAR21) < 0)
    {
        FUN4(VAR2, VAR23, "");
        return -1;
    }
    VAR12->VAR24 = VAR8;
    VAR18 = FUN5(&VAR12->VAR24);
    VAR19 -= 2;
    if (VAR18 & VAR25)
    {
        VAR16 = (VAR26)FUN5(&VAR12->VAR24);
        VAR17 = (VAR26)FUN5(&VAR12->VAR24);
        VAR20 = VAR16 + VAR17 * VAR2->VAR27;
        VAR19 -= 4;
    }
    if (VAR18 & VAR28)
    {
        VAR10 = FUN6(&VAR12->VAR24);
        if (VAR10 > VAR19)
        {
            FUN4(VAR2, VAR23, "");
            return -1;
        }
        FUN7(VAR12, VAR12->VAR24, VAR10, VAR20);
        VAR12->VAR24 += VAR10 - 4;
        VAR19 -= VAR10;
    }
    if (VAR18 & VAR29)
    {
        VAR10 = FUN6(&VAR12->VAR24);
        if (VAR10 > VAR19)
        {
            FUN4(VAR2, VAR23, "");
            return -1;
        }
        FUN8(VAR12, VAR10);
        VAR19 -= VAR10;
    }
    memcpy(VAR12->VAR21.VAR3[1], VAR12->VAR30, VAR31);
    VAR12->VAR21.VAR32 = VAR18 & VAR29;
    VAR14 = VAR12->VAR21.VAR3[0];
    VAR15 = VAR12->VAR33;
    for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
    {
        memcpy(VAR14, VAR15, VAR2->VAR27);
        VAR15 += VAR2->VAR27;
        VAR14 += VAR12->VAR21.VAR35[0];
    }
    FUN9(VAR7 *, VAR12->VAR33, VAR12->VAR36);
    *VAR4 = sizeof(VAR37);
    *(VAR37 *)VAR3 = VAR12->VAR21;
    return VAR9;
}