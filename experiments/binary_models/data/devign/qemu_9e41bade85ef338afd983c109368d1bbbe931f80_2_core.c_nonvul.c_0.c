static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    if (VAR6->VAR7)
    {
        return VAR6->FUN4(VAR4);
    }
    return 0;
}