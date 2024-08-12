static inline void FUN1(TCGv_i64 VAR1, TCGv VAR2, TCGv VAR3, int VAR4, int VAR5)
{
    TCGv_i64 VAR6;
    switch ((VAR4 << 1) | VAR5)
    {
    case 0:
        FUN2(VAR1, VAR2, VAR3);
        break;
    case 1:
        FUN3(VAR1, VAR2, VAR3);
        break;
    case 2:
        FUN4(VAR1, VAR2, VAR3);
        break;
    case 3:
        FUN5(VAR1, VAR2, VAR3);
        break;
    case 4:
        VAR6 = FUN6(VAR2, VAR3);
        FUN7(VAR1, VAR6);
        break;
    case 5:
        VAR6 = FUN8(VAR2, VAR3);
        FUN7(VAR1, VAR6);
        break;
    default:
        FUN9();
    }
    if (VAR4 < 2)
    {
        FUN10(VAR2);
        FUN10(VAR3);
    }