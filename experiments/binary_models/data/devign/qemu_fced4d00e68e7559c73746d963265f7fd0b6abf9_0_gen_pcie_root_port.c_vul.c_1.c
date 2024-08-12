static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10 = FUN4(VAR6);
    VAR10->FUN5(VAR2, VAR4);
    int VAR11 = FUN6(VAR6, 0, VAR8->VAR12, VAR8->VAR13, VAR8->VAR14, VAR8->VAR15, VAR8->VAR16, VAR4);
    if (VAR11 < 0)
    {
        VAR10->VAR17.FUN7(VAR6);
        return;
    }
    if (!VAR8->VAR13)
    {
        FUN8(VAR6->VAR18 + VAR19, VAR20);
        VAR6->VAR18[VAR21] = 0;
        VAR6->VAR18[VAR22] = 0;
    }
}