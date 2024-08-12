static void FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR4 != VAR5)
    {
        FUN2(VAR6);
        FUN3(VAR3);
        FUN3(VAR2->VAR7);
        switch (VAR2->VAR7)
        {
        case VAR8:
            FUN4(VAR2->VAR9);
            break;
        case VAR10:
            FUN5(VAR2->VAR11);
            break;
        case VAR12:
            break;
        case VAR13:
            FUN6(VAR2->VAR11);
            break;
        default:
            FUN7("", VAR14);
            FUN8(1);
        }
    }
}