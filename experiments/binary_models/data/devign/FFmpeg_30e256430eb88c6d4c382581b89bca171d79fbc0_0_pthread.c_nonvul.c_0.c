int FUN1(VAR1 *VAR2)
{
    FUN2();
    FUN3(VAR2);
    if (VAR2->VAR3 & VAR4)
        return FUN4(VAR2);
    else if (VAR2->VAR3 & VAR5)
        return FUN5(VAR2);
    return 0;
}