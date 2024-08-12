static int FUN1(int VAR1, int VAR2, int VAR3, int VAR4)
{
    TCGv VAR5, VAR6;
    if (VAR3 == 3 || (!VAR4 && VAR3 == 2))
    {
        return 1;
    }
    VAR5 = FUN2(VAR1);
    VAR6 = FUN2(VAR2);
    if (VAR4)
    {
        switch (VAR3)
        {
        case 0:
            FUN3(VAR5, VAR6);
            break;
        case 1:
            FUN4(VAR5, VAR6);
            break;
        case 2:
            FUN5(VAR5, VAR6);
            break;
        default:
            FUN6();
        }
    }
    else
    {
        switch (VAR3)
        {
        case 0:
            FUN7(VAR5, VAR6);
            break;
        case 1:
            FUN8(VAR5, VAR6);
            break;
        default:
            FUN6();
        }
    }
    FUN9(VAR5);
    FUN9(VAR6);
    return 0;
}