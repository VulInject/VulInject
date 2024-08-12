FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = FUN2(VAR2);
    VAR3 = FUN3(VAR5, FUN4(VAR2), VAR6, VAR7, VAR8);
    if (VAR3 < 0)
    {
        FUN5(VAR3);
        VAR2->VAR9 = false;
    }
    else
    {
        VAR2->VAR9 = true;
    }
}