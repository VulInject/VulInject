static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR12->VAR14.VAR15 = 1;
    VAR12->VAR14.VAR16 = VAR17 | VAR18 | VAR19;
    if (VAR2->FUN2(VAR2, &VAR12->VAR14))
    {
        FUN3(VAR12->VAR2, VAR20, "");
        return -1;
    }
    FUN4(VAR12, VAR8, VAR9);
    *VAR4 = sizeof(VAR21);
    *(VAR21 *)VAR3 = VAR12->VAR14;
    return VAR9;
}