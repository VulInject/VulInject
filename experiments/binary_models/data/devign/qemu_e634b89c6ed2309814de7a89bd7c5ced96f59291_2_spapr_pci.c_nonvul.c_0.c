static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8 = VAR5;
    int VAR9;
    sPAPRFDT VAR10;
    VAR9 = FUN2(VAR8->VAR11, VAR4, VAR8->VAR12, VAR8->VAR13);
    if (!VAR9)
    {
        FUN3("");
        return;
    }
    if ((FUN4(VAR4, VAR14, 1) != VAR15))
    {
        return;
    }
    VAR6 = FUN5(FUN6(VAR4));
    if (!VAR6)
    {
        return;
    }
    VAR10.VAR12 = VAR8->VAR12;
    VAR10.VAR13 = VAR9;
    VAR10.VAR11 = VAR8->VAR11;
    FUN7(VAR6, FUN8(VAR6), VAR16, &VAR10);
}