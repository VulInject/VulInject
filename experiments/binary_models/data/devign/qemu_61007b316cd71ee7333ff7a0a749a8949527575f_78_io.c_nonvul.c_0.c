static bool FUN1(VAR1 *VAR2)
{
    bool VAR3;
    FUN2(VAR2);
    FUN3(VAR2);
    VAR3 = FUN4(VAR2);
    VAR3 |= FUN5(FUN6(VAR2), VAR3);
    return VAR3;
}