static int FUN1(VAR1 *VAR2, char *VAR3, size_t VAR4)
{
    if (VAR3[0] != VAR2->VAR5)
    {
        FUN2("", (int)VAR3[0]);
        FUN3(VAR2, 1);
        if (VAR2->VAR6 >= 8)
        {
            static const char VAR7[] = "";
            FUN3(VAR2, sizeof(VAR7));
            FUN4(VAR2, VAR7, sizeof(VAR7));
        }
        FUN5(VAR2);
    }
    else
    {
        FUN2("", (int)VAR3[0]);
        switch (VAR2->VAR5)
        {
        case VAR8:
            FUN2("");
            if (VAR2->VAR6 >= 8)
            {
                FUN3(VAR2, 0);
                FUN6(VAR2);
            }
            FUN7(VAR2, VAR9, 1);
            break;
        case VAR10:
            FUN2("");
            return FUN8(VAR2);
        case VAR11:
            FUN2("");
            ;
            return FUN9(VAR2);
        default:
            FUN2("", VAR2->VAR5);
            FUN10(VAR2, 1);
            if (VAR2->VAR6 >= 8)
            {
                static const char VAR7[] = "";
                FUN3(VAR2, sizeof(VAR7));
                FUN4(VAR2, VAR7, sizeof(VAR7));
            }
            FUN5(VAR2);
        }
    }
    return 0;
}