static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    while (VAR3 < 64 && FUN2(VAR2))
    {
        ++VAR3;
    }
    if (!VAR3)
    {
        FUN3("", VAR2->VAR4);
    }
    else
    {
        VAR2->VAR5 |= VAR6;
        FUN4(VAR2);
    }
}