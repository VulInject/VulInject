void FUN1(VAR1 *VAR2)
{
    switch (VAR2->VAR3)
    {
    case VAR4:
    case VAR5:
        FUN2(VAR2);
        break;
    case VAR6:
    case VAR7:
        FUN3(VAR2);
        break;
    case VAR8:
        FUN4(VAR2, "");
        break;
    case VAR9:
        FUN4(VAR2, "");
        break;
    case VAR10:
        FUN5(VAR2, 1);
        break;
    case VAR11:
        FUN6(VAR2, -1, 0);
        break;
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
        FUN5(VAR2, 1);
        break;
    default:
        FUN4(VAR2, "");
        break;
    }