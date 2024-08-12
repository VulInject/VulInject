VAR1 *FUN1(int64_t VAR2, int64_t VAR3, int64_t VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR1 *VAR9;
    HANDLE VAR10;
    LARGE_INTEGER VAR11, VAR12;
    VAR12.VAR13 = VAR3;
    BOOL VAR14;
    int VAR15;
    VAR8 = FUN2(VAR2, VAR6);
    if (!VAR8)
    {
        return NULL;
    }
    switch (VAR4)
    {
    case VAR16:
        VAR15 = VAR17;
        break;
    case VAR18:
        VAR15 = VAR19;
        break;
    case VAR20:
        VAR15 = VAR21;
        break;
    default:
        FUN3(VAR6, "" VAR22, VAR4);
        return NULL;
    }
    VAR10 = VAR8->VAR10;
    VAR14 = FUN4(VAR10, VAR12, &VAR11, VAR15);
    if (!VAR14)
    {
        FUN5(VAR6, FUN6(), "");
        return NULL;
    }
    VAR9 = FUN7(VAR1, 1);
    VAR9->VAR23 = VAR11.VAR13;
    return VAR9;
}