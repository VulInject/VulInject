static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    int VAR11;
    VAR8->VAR12.VAR13 = 1;
    VAR8->VAR12.VAR14 = VAR15 | VAR16 | VAR17;
    if ((VAR11 = VAR2->FUN2(VAR2, &VAR8->VAR12)))
    {
        FUN3(VAR8->VAR2, VAR18, "");
        return VAR11;
    }
    VAR10 = FUN4(VAR6->VAR3);
    switch (VAR10)
    {
    case 0:
        VAR11 = FUN5(VAR2, VAR6);
        break;
    case 1:
        VAR11 = FUN6(VAR2, VAR6);
        break;
    default:
        FUN3(VAR2, VAR18, "", VAR10);
        return -1;
    }
    if (VAR11)
        return VAR11;
    *VAR4 = sizeof(VAR19);
    *(VAR19 *)VAR3 = VAR8->VAR12;
    return VAR6->VAR20;
}