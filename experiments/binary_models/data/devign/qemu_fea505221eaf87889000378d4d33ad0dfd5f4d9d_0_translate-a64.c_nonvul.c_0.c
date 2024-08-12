static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR4 = FUN2(VAR3, 21, 1);
    VAR5 = FUN2(VAR3, 19, 2);
    VAR6 = FUN2(VAR3, 16, 3);
    VAR7 = FUN2(VAR3, 12, 4);
    VAR8 = FUN2(VAR3, 8, 4);
    VAR9 = FUN2(VAR3, 5, 3);
    VAR10 = FUN2(VAR3, 0, 5);
    if (VAR5 == 0)
    {
        if (VAR4 || VAR10 != 31)
        {
            FUN3(VAR2);
            return;
        }
        switch (VAR7)
        {
        case 2:
            FUN4(VAR2, VAR3, VAR6, VAR9, VAR8);
            break;
        case 3:
            FUN5(VAR2, VAR3, VAR6, VAR9, VAR8);
            break;
        case 4:
            FUN6(VAR2, VAR3, VAR6, VAR9, VAR8);
            break;
        default:
            FUN3(VAR2);
            break;
        }
        return;
    }
    FUN7(VAR2, VAR3, VAR4, VAR5, VAR6, VAR9, VAR7, VAR8, VAR10);
}