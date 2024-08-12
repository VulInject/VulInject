int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    const char *VAR8;
    VAR7 = FUN2(VAR2, &VAR4->VAR9, sizeof(VAR4->VAR9), VAR6);
    if (VAR7 <= 0)
    {
        return VAR7;
    }
    FUN3(&VAR4->VAR9);
    switch (VAR4->VAR9)
    {
    case VAR10:
        VAR7 = FUN4(VAR2, &VAR4->VAR11, VAR6);
        if (VAR7 < 0)
        {
            break;
        }
        FUN5(VAR4->VAR11.VAR12, FUN6(VAR4->VAR11.VAR12), VAR4->VAR13);
        if (VAR4->VAR11.VAR12 == VAR14)
        {
            FUN7(VAR6, "");
            return -VAR15;
        }
        break;
    case VAR16:
        VAR7 = FUN8(VAR2, &VAR4->VAR17, VAR6);
        if (VAR7 < 0)
        {
            break;
        }
        VAR8 = FUN9(VAR4->VAR17.VAR8);
        FUN10(VAR4->VAR17.VAR18, VAR4->VAR17.VAR8, VAR8, VAR4->VAR17.VAR13, VAR4->VAR17.VAR19);
        break;
    default:
        FUN7(VAR6, "" VAR20 "", VAR4->VAR9);
        return -VAR15;
    }
    if (VAR7 < 0)
    {
        return VAR7;
    }
    return 1;
}