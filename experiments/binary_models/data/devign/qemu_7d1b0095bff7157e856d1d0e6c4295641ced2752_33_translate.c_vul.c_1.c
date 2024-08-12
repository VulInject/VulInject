static VAR1 FUN1(int VAR2, int VAR3)
{
    TCGv VAR4 = FUN2();
    FUN3(VAR4, VAR5, FUN4(VAR2, VAR3));
    return VAR4;
}