static int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, VAR5 *VAR6)
{
    VTDRootEntry VAR7;
    int VAR8;
    VAR8 = FUN2(VAR2, VAR3, &VAR7);
    if (VAR8)
    {
        return VAR8;
    }
    if (!FUN3(&VAR7))
    {
        FUN4(VAR3);
        return -VAR9;
    }
    else if (VAR7.VAR10 || (VAR7.VAR11 & VAR12))
    {
        FUN5(VAR7.VAR10, VAR7.VAR11);
        return -VAR13;
    }
    VAR8 = FUN6(&VAR7, VAR4, VAR6);
    if (VAR8)
    {
        return VAR8;
    }
    if (!FUN7(VAR6))
    {
        FUN8(VAR3, VAR4);
        return -VAR14;
    }
    else if ((VAR6->VAR15 & VAR16) || (VAR6->VAR17 & VAR18))
    {
        FUN9(VAR6->VAR15, VAR6->VAR17);
        return -VAR19;
    }
    if (!FUN10(VAR2, FUN11(VAR6)))
    {
        FUN9(VAR6->VAR15, VAR6->VAR17);
        return -VAR20;
    }
    else
    {
        switch (FUN12(VAR6))
        {
        case VAR21:
        case VAR22:
            break;
        default:
            FUN9(VAR6->VAR15, VAR6->VAR17);
            return -VAR20;
        }
    }
    return 0;
}