void FUN1(VAR1 *VAR2)
{
    bool VAR3 = true;
    FUN2(VAR2);
    while (VAR3)
    {
        FUN3(VAR2);
        VAR3 = FUN4(VAR2);
        VAR3 |= FUN5(FUN6(VAR2), VAR3);