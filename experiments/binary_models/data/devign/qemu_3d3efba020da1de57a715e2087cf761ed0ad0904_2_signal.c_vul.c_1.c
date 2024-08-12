int FUN1(int VAR1, const VAR2 *VAR3, VAR2 *VAR4)
{
    int VAR5;
    sigset_t VAR6;
    VAR2 *VAR7 = NULL;
    VAR8 *VAR9 = VAR10;
    VAR11 *VAR12 = (VAR11 *)VAR9->VAR13;
    bool VAR14 = VAR12->VAR15;
    if (VAR3)
    {
        bool VAR16 = FUN2(VAR3, VAR17);
        VAR6 = *VAR3;
        VAR7 = &VAR6;
        FUN3(VAR7, VAR17);
        switch (VAR1)
        {
        case VAR18:
            if (VAR16)
            {
                VAR12->VAR15 = true;
            }
            break;
        case VAR19:
            if (VAR16)
            {
                VAR12->VAR15 = false;
            }
            break;
        case VAR20:
            VAR12->VAR15 = VAR16;
            break;
        default:
            FUN4();
        }
    }
    VAR5 = FUN5(VAR1, VAR7, VAR4);
    if (VAR4 && VAR14)
    {
        FUN6(VAR4, VAR17);
    }
    return VAR5;
}