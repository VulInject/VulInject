void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(FUN4(VAR2));
    if (VAR2->VAR5)
    {
        FUN5(VAR2);
    }
    if (VAR2->VAR6)
    {
        VAR2->VAR7 = VAR4->VAR8;
    }
    else
    {
        VAR2->VAR7 = VAR4->VAR9;
    }
    VAR2->VAR10 = -1;
    VAR2->VAR11 = -1;
}