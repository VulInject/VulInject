void FUN1(void)
{
    static VAR1 *VAR2;
    VAR2 = FUN2(VAR3, VAR4, &VAR2);
    FUN3(&VAR2);
}