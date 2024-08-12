int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    unsigned VAR6;
    if (VAR4->VAR7 && (VAR2->VAR8 & VAR9) && (VAR2->VAR10 & (1 << VAR11)))
    {
        VAR6 = -1U;
        FUN2("", VAR6);
        VAR5 = FUN3(VAR2, VAR12, &VAR6);
        if (VAR5 < 0)
            FUN4("", VAR2->VAR13, VAR6);
        return 0