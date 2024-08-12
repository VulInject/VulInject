static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14 = FUN2(VAR6, VAR15, NULL);
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    if (VAR12->VAR16.VAR3[0])
        VAR2->FUN3(VAR2, &VAR12->VAR16);
    if (VAR2->FUN4(VAR2, &VAR12->VAR16))
    {
        FUN5(VAR2, VAR17, "");
        return -1;
    }
    FUN6(VAR12);
    if (VAR14)
    {
        VAR12->VAR16.VAR18 = 1;
        memcpy(VAR12->VAR14, VAR14, VAR19);
    }
    memcpy(VAR12->VAR16.VAR3[1], VAR12->VAR14, VAR19);
    *VAR4 = sizeof(VAR20);
    *(VAR20 *)VAR3 = VAR12->VAR16;
    return VAR9;
}