int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    FUN2(!VAR2->VAR4 && !VAR2->VAR5 && !VAR2->VAR6);
    VAR2->VAR4 = FUN3(VAR3->VAR4);
    VAR2->VAR5 = FUN3(VAR3->VAR5);
    VAR2->VAR6 = FUN3(VAR3->VAR6);
    if ((VAR3->VAR4 && !VAR2->VAR4) || (VAR3->VAR5 && !VAR2->VAR5) || (VAR3->VAR6 && !VAR2->VAR6))
    {
        FUN4(VAR2, VAR7, "");
        return FUN5(VAR8);
    }
    return 0;
}