static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR6->VAR11[0];
    struct VAR12 *VAR13 = VAR2->VAR14;
    if ((VAR8 = FUN2(VAR2, VAR4, VAR2->VAR15)) < 0)
        return VAR8;
    switch (VAR2->VAR16)
    {
    case VAR17:
        FUN3(VAR13, VAR10, VAR4->VAR11);
        break;
    case VAR18:
        FUN3(VAR13, VAR10, VAR4->VAR11);
        FUN3(VAR13, VAR10 + VAR19, VAR4->VAR11 + 32);
    }
    *VAR7 = 1;
    return 0;
}