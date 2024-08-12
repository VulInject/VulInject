static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    switch (VAR3)
    {
    case VAR4:
        break;
    case VAR5:
        if (FUN2(VAR2) != VAR6)
        {
            FUN3("", FUN2(VAR2), VAR6);
        }
        FUN4(VAR2, VAR7);
        VAR2->VAR8 = VAR2->VAR9;
        FUN5(VAR2);
        break;
    case VAR10:
        if (FUN2(VAR2) != VAR11)
        {
            FUN3("", FUN2(VAR2));
            FUN4(VAR2, VAR11);
        }
        if (FUN2(VAR2) == VAR11)
        {
            FUN6(VAR12, FUN3(""));
            FUN4(VAR2, VAR7);
            FUN5(VAR2);
        }
        break;
    case VAR13:
        VAR2->VAR14 = VAR2->VAR9;
        FUN6(VAR12, FUN3("", VAR3));
        break;
    case VAR15:
        FUN6(VAR12, FUN3("", VAR3));
        FUN7(VAR2);
        break;
    case VAR16:
        FUN6(VAR12, FUN3("", VAR3));
        VAR2->VAR17 = VAR2->VAR9;
        break;
    case VAR18:
        FUN6(VAR12, FUN3("", VAR3));
        FUN7(VAR2);
        memset(&VAR2->VAR19, 0, sizeof(VAR2->VAR19));
        break;
    case VAR20:
        FUN8("");
        break;
    default:
        FUN8("");
    }
}