static inline VAR1 FUN1(int VAR2)
{
    TCGv VAR3 = FUN2();
    FUN3(VAR3, VAR4, VAR2);
    return VAR3;
}