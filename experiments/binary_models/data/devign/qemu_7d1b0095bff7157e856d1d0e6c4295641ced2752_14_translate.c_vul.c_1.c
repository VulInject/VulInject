static inline VAR1 FUN1(TCGv VAR2, int VAR3)
{
    TCGv VAR4 = FUN2();
    FUN3(VAR4, VAR2, VAR3);
    return VAR4;
}