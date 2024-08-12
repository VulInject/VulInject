static void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4.VAR5;
    int VAR6 = VAR2->VAR7;
    switch (VAR3)
    {
    case VAR8:
        switch (VAR6)
        {
        case VAR9:
            FUN2(VAR2);
            break;
        case VAR10:
            FUN3(VAR2);
            break;
        }
        break;
    case VAR11:
        switch (VAR6)
        {
        case VAR10:
            FUN4(VAR2);
            break;
        }
        break;
    case VAR12:
        switch (VAR6)
        {
        case VAR9:
            FUN5(VAR2);
            break;
        }
        break;
    case VAR13:
        switch (VAR6)
        {
        case VAR9:
            FUN6(VAR2);
            break;
        case VAR10:
            FUN7(VAR2);
            break;
        }
        break;
    case VAR14:
        switch (VAR6)
        {
        case VAR9:
            FUN8(VAR2);
            break;
        case VAR10:
            FUN9(VAR2);
            break;
        case VAR15:
            FUN10(VAR2);
            break;
        }
        break;
    case VAR16:
        switch (VAR6)
        {
        case VAR9:
            FUN11(VAR2);
            break;
        case VAR10:
            FUN12(VAR2);
            break;
        case VAR15:
            FUN13(VAR2);
            break;
        }
        break;
    case VAR17:
        switch (VAR6)
        {
        case VAR9:
            FUN14(VAR2);
            break;
        case VAR10:
            FUN15(VAR2);
            break;
        case VAR15:
            FUN16(VAR2);
            break;
        }
        break;
    case VAR18:
        switch (VAR6)
        {
        case VAR9:
            FUN17(VAR2);
            break;
        case VAR10:
            FUN18(VAR2);
            break;
        case VAR15:
            FUN19(VAR2);
            break;
        }
        break;
    }
}