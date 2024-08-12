VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(VAR1, 1);
    if (!VAR3)
    {
        return NULL;
    }
    switch (VAR3->VAR5)
    {
    case VAR6:
        VAR4->VAR5 = VAR7;
        FUN3(VAR8, &VAR4->VAR9.VAR10, VAR3->VAR9.VAR10.VAR11);
        break;
    case VAR12:
        VAR4->VAR5 = VAR13;
        FUN3(VAR14, &VAR4->VAR9.VAR15, VAR3->VAR9.VAR15.VAR11);
        break;
    case VAR16:
        VAR4->VAR5 = VAR17;
        FUN3(VAR18, &VAR4->VAR9.VAR19, VAR3->VAR9.VAR19.VAR11);
        break;
    case VAR20:
        VAR4->VAR5 = VAR21;
        FUN3(VAR22, &VAR4->VAR9.VAR23, VAR3->VAR9.VAR23.VAR11);
        break;
    default:
        FUN4();
    }
    return VAR4;
}