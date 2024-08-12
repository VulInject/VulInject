static inline VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    TCGv VAR5 = FUN2();
    FUN3(VAR3, VAR5, VAR4);
    return VAR5;
}