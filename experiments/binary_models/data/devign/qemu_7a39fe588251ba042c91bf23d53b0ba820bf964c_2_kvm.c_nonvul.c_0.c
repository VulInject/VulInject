int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    unsigned VAR6;
    if (!VAR7 && VAR4->VAR8 && (VAR2->VAR9 & VAR10) && (VAR2->VAR11 & (1 << VAR12)))
    {
        VAR6 = VAR13;
        FUN2("", VAR6);
        VAR5 = FUN3(VAR2, VAR14, &VAR6);
        if (VAR5 < 0)
            FUN4("", VAR2->VAR15, VAR6);
        FUN5(VAR16, FUN6(VAR17) + (FUN7() / 50));
    }
    return 0;
}