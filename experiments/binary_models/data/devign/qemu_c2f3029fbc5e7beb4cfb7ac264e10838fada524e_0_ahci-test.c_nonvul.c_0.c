static VAR1 *FUN1(VAR1 *VAR2, void **VAR3)
{
    *VAR3 = FUN2(VAR2, 5, &VAR4);
    FUN3(VAR2);
    return VAR2;
}