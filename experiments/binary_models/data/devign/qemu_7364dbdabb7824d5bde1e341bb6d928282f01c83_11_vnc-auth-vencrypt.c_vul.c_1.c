static void FUN1(VAR1 *VAR2)
{
    switch (VAR2->VAR3)
    {
    case VAR4:
    case VAR5:
        FUN2("");
        FUN3(VAR2, 0);
        FUN4(VAR2);
        break;
    case VAR6:
    case VAR7:
        FUN2("");
        FUN5(VAR2);
        break;
    case VAR8:
    case VAR9:
        FUN2("");
        FUN6(VAR2);
        break;
    default:
        FUN2("", VAR2->VAR10);
        FUN7(VAR2, 1);
        if (VAR2->VAR11 >= 8)
        {
            static const char VAR12[] = "";
            FUN3(VAR2, sizeof(VAR12));
            FUN8(VAR2, VAR12, sizeof(VAR12));
        }
        FUN9(VAR2);
    }
}