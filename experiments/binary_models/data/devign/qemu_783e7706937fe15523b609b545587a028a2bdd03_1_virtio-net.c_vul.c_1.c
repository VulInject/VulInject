static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (FUN3(VAR6->VAR7))
    {
        return;
    }
    FUN4(VAR4, 0);
    FUN5(VAR6->VAR8);
    VAR6->VAR7 = 1;
}