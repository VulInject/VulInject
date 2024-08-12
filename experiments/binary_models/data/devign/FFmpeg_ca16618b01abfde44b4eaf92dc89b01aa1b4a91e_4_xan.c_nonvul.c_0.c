static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    if (VAR2->FUN2(VAR2, &VAR9->VAR14))
    {
        FUN3(VAR9->VAR2, VAR15, "");
        return -1;
    }
    VAR9->VAR14.VAR16 = 3;
    if (!VAR9->VAR17)
        VAR9->VAR17 = VAR9->VAR14.VAR18[0] * VAR9->VAR2->VAR19;
    VAR12->VAR20 = 0;
    memcpy(VAR9->VAR14.VAR3[1], VAR12->VAR21, VAR22);
    VAR9->VAR14.VAR23 = 1;
    VAR9->VAR6 = VAR6;
    VAR9->VAR24 = VAR7;
    if (VAR2->VAR25->VAR26 == VAR27)
        FUN4(VAR9);
    else if (VAR2->VAR25->VAR26 == VAR28)
        FUN5(VAR9);
    if (VAR9->VAR29.VAR3[0])
        VAR2->FUN6(VAR2, &VAR9->VAR29);
    VAR9->VAR29 = VAR9->VAR14;
    *VAR4 = sizeof(VAR30);
    *(VAR30 *)VAR3 = VAR9->VAR14;
    return VAR7;
}