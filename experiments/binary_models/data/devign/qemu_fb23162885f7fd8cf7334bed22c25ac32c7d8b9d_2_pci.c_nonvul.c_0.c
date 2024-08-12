static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = FUN2(VAR4, VAR7, VAR2);
    VAR9 *VAR10;
    int VAR11, VAR12;
    if (VAR8->VAR13)
    {
        VAR6->VAR14 |= VAR15;
    }
    VAR10 = FUN3(VAR9, FUN4(VAR2));
    VAR11 = VAR6->VAR11;
    VAR6 = FUN5(VAR6, VAR10, VAR4->VAR16, VAR11, VAR8->VAR17, VAR8->VAR18, VAR8->VAR19);
    assert(VAR6);
    VAR12 = VAR8->FUN6(VAR6);
    if (VAR12 != 0)
        return VAR12;
    if (VAR2->VAR20)
        VAR10->FUN7(VAR6, 1);
    return 0;
}