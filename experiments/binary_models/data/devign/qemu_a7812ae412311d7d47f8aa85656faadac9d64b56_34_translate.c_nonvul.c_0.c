static void FUN1(int VAR1, int VAR2, TCGv VAR3, TCGv VAR4)
{
    TCGv_ptr VAR5;
    switch (VAR1)
    {
    case 1:
        VAR5 = FUN2();
        FUN3(VAR5, VAR6, FUN4(VAR7, VAR8));
        FUN5(VAR9)
        break;
    case 5:
        VAR5 = FUN2();
        FUN3(VAR5, VAR6, FUN4(VAR7, VAR8));
        FUN5(VAR10)
        break;
    case 2:
        FUN5(VAR11);
        break;
    case 3:
        FUN5(VAR12);
        break;
    case 6:
        FUN5(VAR13);
        break;
    case 7:
        FUN5(VAR14);
        break;
    }
}