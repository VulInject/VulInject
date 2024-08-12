static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    char VAR5[VAR6];
    VAR7 *VAR8 = (VAR7 *)VAR5;
    hwaddr VAR9;
    int VAR10;
    VAR9 = VAR2->VAR11 | FUN2(VAR2, VAR12);
    FUN3(VAR4, VAR9, VAR5, sizeof(VAR8));
    if (VAR8->VAR13 < FUN4(VAR14) && VAR14[VAR8->VAR13])
    {
        VAR10 = VAR14[VAR8->VAR13];
        assert(VAR10 <= VAR6);
        FUN3(VAR4, VAR9 + sizeof(VAR8), &VAR5[sizeof(VAR8)], VAR10 - sizeof(VAR8));
    }
    if (VAR8->VAR13 == VAR15)
    {
        FUN5(VAR2, (VAR16 *)VAR5, VAR9);
    }
    else
    {
        FUN6(VAR2, (VAR7 *)VAR5);
    }
}