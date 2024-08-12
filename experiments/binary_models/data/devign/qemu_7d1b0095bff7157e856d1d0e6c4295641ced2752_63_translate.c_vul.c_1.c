static inline VAR1 FUN1(int VAR2)
{
    TCGv VAR3 = FUN2();
    FUN3(VAR3, VAR4, FUN4(VAR5, VAR6.VAR7[VAR2]));
    return VAR3;
}