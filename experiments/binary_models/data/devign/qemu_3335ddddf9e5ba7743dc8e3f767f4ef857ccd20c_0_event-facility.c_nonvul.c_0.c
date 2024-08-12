static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5;
    unsigned int VAR6;
    VAR7 *VAR8 = (VAR7 *)VAR4;
    if (FUN2(VAR4->VAR9.VAR10) != VAR11)
    {
        VAR4->VAR9.VAR12 = FUN3(VAR13);
        goto VAR14;
    }
    VAR6 = VAR2->VAR15;
    switch (VAR4->VAR9.VAR16)
    {
    case VAR17:
        VAR5 = VAR6;
        break;
    case VAR18:
        VAR5 = FUN4(VAR8->VAR19);
        if (!VAR6 || (VAR5 & ~VAR6))
        {
            VAR4->VAR9.VAR12 = FUN3(VAR20);
            goto VAR14;
        }
        break;
    default:
        VAR4->VAR9.VAR12 = FUN3(VAR21);
        goto VAR14;
    }
    VAR4->VAR9.VAR12 = FUN3(FUN5(VAR2, VAR4, VAR5));
VAR14:
    return;
}