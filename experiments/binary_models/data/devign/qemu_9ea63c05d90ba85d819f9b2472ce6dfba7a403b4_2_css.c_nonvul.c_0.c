int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR6;
    if (VAR4->VAR7 & VAR8)
    {
        FUN2(VAR2);
    }
    else if (VAR4->VAR7 & VAR9)
    {
        FUN3(VAR2);
    }
    else if (VAR4->VAR7 & VAR10)
    {
        FUN4(VAR2);
    }
    FUN5(VAR2);
    return 0;
}