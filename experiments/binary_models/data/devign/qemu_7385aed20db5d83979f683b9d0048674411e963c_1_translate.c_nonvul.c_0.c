static inline void FUN1(int VAR1, TCGv_i64 VAR2, TCGv_i64 VAR3)
{
    switch (VAR1)
    {
    case 0:
        FUN2(VAR4, VAR5, VAR2, VAR3);
        break;
    case 1:
        FUN3(VAR4, VAR5, VAR2, VAR3);
        break;
    case 2:
        FUN4(VAR4, VAR5, VAR2, VAR3);
        break;
    case 3:
        FUN5(VAR4, VAR5, VAR2, VAR3);
        break;
    }
}