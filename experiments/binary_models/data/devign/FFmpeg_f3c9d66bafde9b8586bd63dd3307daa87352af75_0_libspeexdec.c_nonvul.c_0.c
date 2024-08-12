static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17 = 0;
    VAR12->VAR18.VAR19 = VAR12->VAR20;
    if ((VAR16 = FUN2(VAR2, &VAR12->VAR18)) < 0)
    {
        FUN3(VAR2, VAR21, "");
        return VAR16;
    }
    VAR15 = (VAR14 *)VAR12->VAR18.VAR3[0];
    if (FUN4(&VAR12->VAR22) < 5 || FUN5(&VAR12->VAR22, 5) == 0xF)
    {
        if (!VAR8 || !VAR9)
        {
            *VAR4 = 0;
            return VAR9;
        }
        FUN6(&VAR12->VAR22, VAR8, VAR9);
        VAR17 = VAR9;
    }
    VAR16 = FUN7(VAR12->VAR23, &VAR12->VAR22, VAR15);
    if (VAR16 <= -2)
    {
        FUN3(VAR2, VAR21, "");
        return VAR24;
    }
    if (VAR2->VAR25 == 2)
        FUN8(VAR15, VAR12->VAR20, &VAR12->VAR26);
    *VAR4 = 1;
    *(VAR27 *)VAR3 = VAR12->VAR18;
    return VAR17;
}