void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint64_t VAR5;
    VAR5 = FUN2(VAR2);
    if (VAR5 != -1)
    {
        FUN3(VAR4, VAR5);
    }
    else
    {
        FUN4(VAR4);
    }
}