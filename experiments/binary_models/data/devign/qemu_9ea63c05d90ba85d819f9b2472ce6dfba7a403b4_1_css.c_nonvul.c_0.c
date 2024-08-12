int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    VAR4 *VAR5 = &VAR2->VAR6.VAR7;
    if (VAR5->VAR8 & VAR9)
    {
        FUN2(VAR2);
    }
    else if (VAR5->VAR8 & VAR10)
    {
        FUN3(VAR2);
    }
    else if (VAR5->VAR8 & VAR11)
    {
        VAR3 = FUN4(VAR2);
    }
    return VAR3;
}