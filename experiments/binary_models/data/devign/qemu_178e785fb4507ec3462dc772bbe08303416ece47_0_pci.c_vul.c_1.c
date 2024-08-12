static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = FUN2(VAR4);
    VAR7 *VAR8;
    int VAR9;
    bool VAR10;
    if (VAR6->VAR11)
    {
        VAR4->VAR12 |= VAR13;
    }
    VAR8 = FUN3(FUN4(VAR2));
    VAR4 = FUN5(VAR4, VAR8, FUN6(FUN7(VAR2)), VAR4->VAR14);
    if (VAR4 == NULL)
        return -1;
    if (VAR6->VAR15)
    {
        VAR9 = VAR6->FUN8(VAR4);
        if (VAR9 != 0)
        {
            FUN9(VAR4);
            return VAR9;
        }
    }
    VAR10 = false;
    if (VAR4->VAR16 == NULL && VAR6->VAR16 != NULL)
    {
        VAR4->VAR16 = FUN10(VAR6->VAR16);
        VAR10 = true;
    }
    FUN11(VAR4, VAR10);
    return 0;
}