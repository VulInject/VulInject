void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    if (VAR8 && VAR8->VAR10 & VAR11)
    {
        VAR2->VAR9 = NULL;
        VAR6->VAR12 = VAR6->VAR13.VAR14;
        VAR6->VAR15 |= VAR16 | FUN3(VAR6);
        VAR6->VAR15 |= VAR6->VAR13.VAR17 & (VAR18) >> 46;
        FUN4(VAR2, VAR11);
        FUN5(VAR2);
    }
}