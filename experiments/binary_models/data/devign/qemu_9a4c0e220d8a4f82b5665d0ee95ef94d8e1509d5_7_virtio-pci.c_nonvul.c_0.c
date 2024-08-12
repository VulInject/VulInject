static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    if (!(VAR8->VAR11 & VAR12) && FUN4(VAR8))
    {
        VAR10->VAR13 |= VAR14;
    }
    VAR6->FUN5(VAR2, VAR4);
}