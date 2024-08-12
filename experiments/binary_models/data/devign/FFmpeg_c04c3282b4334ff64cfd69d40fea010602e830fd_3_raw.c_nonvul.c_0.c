static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, 0);
    if (!VAR6)
        return VAR7;
    VAR6->VAR8->VAR9 = VAR10;
    VAR6->VAR8->VAR11 = VAR2->VAR12->VAR13;
    VAR6->VAR14 = 1;
    if (VAR4->VAR15.VAR16)
    {
        FUN3(VAR6, 64, VAR4->VAR15.VAR16, VAR4->VAR15.VAR17);
    }
    else if (VAR6->VAR8->VAR11 == VAR18 || VAR6->VAR8->VAR11 == VAR19 || VAR6->VAR8->VAR11 == VAR20)
    {
        FUN3(VAR6, 64, 1, 25);
    }
    return 0;
}