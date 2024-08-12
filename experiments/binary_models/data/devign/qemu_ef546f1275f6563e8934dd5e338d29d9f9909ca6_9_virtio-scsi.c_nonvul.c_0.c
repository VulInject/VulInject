static int FUN1(VAR1 *VAR2, unsigned VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2->VAR7;
    size_t VAR8, VAR9;
    if (FUN2(VAR2->VAR10.VAR11, VAR2->VAR10.VAR12, 0, &VAR2->VAR2, VAR3) < VAR3)
    {
        return -VAR13;
    }
    if (FUN3(&VAR2->VAR14, VAR2->VAR10.VAR15, VAR2->VAR10.VAR16, 0, VAR4) < VAR4)
    {
        return -VAR13;
    }
    VAR2->VAR4 = VAR4;
    if (!FUN4(VAR6, VAR17))
    {
        VAR3 = VAR2->VAR10.VAR11[0].VAR18;
        VAR4 = VAR2->VAR10.VAR15[0].VAR18;
    }
    VAR9 = FUN5(VAR2, VAR2->VAR10.VAR11, &VAR2->VAR10.VAR19[0], VAR2->VAR10.VAR12, VAR3);
    VAR8 = FUN5(VAR2, VAR2->VAR10.VAR15, &VAR2->VAR10.VAR20[0], VAR2->VAR10.VAR16, VAR4);
    if (VAR9 && VAR8)
    {
        return -VAR21;
    }
    if (VAR9)
    {
        VAR2->VAR22 = VAR23;
    }
    else if (VAR8)
    {
        VAR2->VAR22 = VAR24;
    }
    return 0;
}