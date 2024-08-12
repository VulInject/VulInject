static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, bool VAR6)
{
    if (VAR6)
    {
        TCGv_i64 VAR7 = FUN2(VAR2, VAR4);
        switch (VAR5)
        {
        case 0:
        {
            TCGv_i64 VAR8 = FUN3();
            FUN4(VAR8, VAR7);
            FUN5(VAR8, VAR9, FUN6(VAR2, VAR3, VAR10));
            FUN7(VAR8, 0);
            FUN5(VAR8, VAR9, FUN8(VAR2, VAR3));
            FUN9(VAR8);
            break;
        }
        case 1:
        {
            TCGv_i64 VAR8 = FUN10(0);
            FUN5(VAR7, VAR9, FUN6(VAR2, VAR3, VAR10));
            FUN5(VAR8, VAR9, FUN8(VAR2, VAR3));
            FUN9(VAR8);
            break;
        }
        case 2:
            FUN5(VAR7, VAR9, FUN8(VAR2, VAR3));
            break;
        }
    }
    else
    {
        TCGv_i64 VAR11 = FUN2(VAR2, VAR3);
        switch (VAR5)
        {
        case 0:
            FUN11(VAR11, VAR9, FUN6(VAR2, VAR4, VAR12));
            break;
        case 1:
            FUN12(VAR11, VAR9, FUN6(VAR2, VAR4, VAR10));
            break;
        case 2:
            FUN12(VAR11, VAR9, FUN8(VAR2, VAR4));
            break;
        }
    }
}