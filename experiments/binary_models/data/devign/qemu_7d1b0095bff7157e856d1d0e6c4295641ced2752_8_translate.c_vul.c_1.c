static inline void FUN1(TCGv_i64 VAR1, TCGv VAR2, int VAR3, int VAR4)
{
    if (VAR4)
    {
        switch (VAR3)
        {
        case 0:
            FUN2(VAR1, VAR2);
            break;
        case 1:
            FUN3(VAR1, VAR2);
            break;
        case 2:
            FUN4(VAR1, VAR2);
            break;
        default:
            FUN5();
        }
    }
    else
    {
        switch (VAR3)
        {
        case 0:
            FUN6(VAR1, VAR2);
            break;
        case 1:
            FUN7(VAR1, VAR2);
            break;
        case 2:
            FUN8(VAR1, VAR2);
            break;
        default:
            FUN5();
        }
    }
    FUN9(VAR2);
}