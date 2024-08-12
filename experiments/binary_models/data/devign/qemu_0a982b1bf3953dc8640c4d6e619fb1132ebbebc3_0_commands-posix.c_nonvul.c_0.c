struct VAR1 *FUN1(int64_t VAR2, int64_t VAR3, int64_t VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR6);
    VAR1 *VAR9 = NULL;
    VAR10 *VAR11;
    int VAR12;
    int VAR13;
    if (!VAR8)
    {
        return NULL;
    }
    switch (VAR4)
    {
    case VAR14:
        VAR13 = VAR15;
        break;
    case VAR16:
        VAR13 = VAR17;
        break;
    case VAR18:
        VAR13 = VAR19;
        break;
    default:
        FUN3(VAR6, "" VAR20, VAR4);
        return NULL;
    }
    VAR11 = VAR8->VAR11;
    VAR12 = FUN4(VAR11, VAR3, VAR13);
    if (VAR12 == -1)
    {
        FUN5(VAR6, VAR21, "");
        if (VAR21 == VAR22)
        {
            VAR8->VAR23 = VAR24;
        }
    }
    else
    {
        VAR9 = FUN6(VAR1, 1);
        VAR9->VAR25 = FUN7(VAR11);
        VAR9->VAR26 = FUN8(VAR11);
        VAR8->VAR23 = VAR24;
    }
    FUN9(VAR11);
    return VAR9;
}