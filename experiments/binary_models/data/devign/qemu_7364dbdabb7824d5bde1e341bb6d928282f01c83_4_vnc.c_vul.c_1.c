static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    if (VAR4[0] != VAR2->VAR6)
    {
        FUN2("", (int)VAR4[0]);
        FUN3(VAR2, 1);
        if (VAR2->VAR7 >= 8)
        {
            static const char VAR8[] = "";
            FUN3(VAR2, sizeof(VAR8));
            FUN4(VAR2, VAR8, sizeof(VAR8));
        }
        FUN5(VAR2);
    }
    else
    {
        FUN2("", (int)VAR4[0]);
        switch (VAR2->VAR6)
        {
        case VAR9:
            FUN2("");
            if (VAR2->VAR7 >= 8)
            {
                FUN3(VAR2, 0);
                FUN6(VAR2);
            }
            FUN7(VAR2);
            break;
        case VAR10:
            FUN2("");
            FUN8(VAR2);
            break;
        case VAR11:
            FUN2("");
            FUN9(VAR2);
            break;
        case VAR12:
            FUN2("");
            FUN10(VAR2);
            break;
        default:
            FUN2("", VAR2->VAR6);
            FUN11(VAR2, 1);
            if (VAR2->VAR7 >= 8)
            {
                static const char VAR8[] = "";
                FUN3(VAR2, sizeof(VAR8));
                FUN4(VAR2, VAR8, sizeof(VAR8));
            }
            FUN5(VAR2);
        }
    }
    return 0;
}