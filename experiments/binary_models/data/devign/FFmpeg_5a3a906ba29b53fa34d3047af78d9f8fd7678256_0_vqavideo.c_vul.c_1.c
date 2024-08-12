static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    if (VAR12->VAR14.VAR3[0])
        VAR2->FUN2(VAR2, &VAR12->VAR14);
    if (VAR2->FUN3(VAR2, &VAR12->VAR14))
    {
        FUN4(VAR12->VAR2, VAR15, "");
        return -1;
    }
    FUN5(VAR12);
    memcpy(VAR12->VAR14.VAR3[1], VAR12->VAR16, VAR17 * 4);
    VAR12->VAR14.VAR18 = 1;
    *VAR4 = sizeof(VAR19);
    *(VAR19 *)VAR3 = VAR12->VAR14;
    return VAR9;
}