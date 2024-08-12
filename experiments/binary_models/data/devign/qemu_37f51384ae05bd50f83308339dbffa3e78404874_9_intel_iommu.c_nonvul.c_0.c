static int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, VAR5 *VAR6)
{
    VTDRootEntry VAR7;
    int VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    VAR8 = FUN3(VAR2, VAR3, &VAR7);
    if (VAR8)
    {
        return VAR8;
    }
    if (!FUN4(&VAR7))
    {
        FUN5(VAR3);
        return -VAR11;
    }
    if (VAR7.VAR12 || (VAR7.VAR13 & FUN6(VAR2->VAR14)))
    {
        FUN7(VAR7.VAR12, VAR7.VAR13);
        return -VAR15;
    }
    VAR8 = FUN8(&VAR7, VAR4, VAR6);
    if (VAR8)
    {
        return VAR8;
    }
    if (!FUN9(VAR6))
    {
        FUN10(VAR3, VAR4);
        return -VAR16;
    }
    if ((VAR6->VAR17 & VAR18) || (VAR6->VAR19 & FUN11(VAR2->VAR14)))
    {
        FUN12(VAR6->VAR17, VAR6->VAR19);
        return -VAR20;
    }
    if (!FUN13(VAR2, FUN14(VAR6)))
    {
        FUN12(VAR6->VAR17, VAR6->VAR19);
        return -VAR21;
    }
    if (!FUN15(VAR10, VAR6))
    {
        FUN12(VAR6->VAR17, VAR6->VAR19);
        return -VAR21;
    }
    return 0;
}