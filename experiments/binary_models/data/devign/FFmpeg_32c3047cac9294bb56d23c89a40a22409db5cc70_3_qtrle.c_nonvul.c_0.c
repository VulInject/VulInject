static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR4->VAR2 = VAR2;
    switch (VAR2->VAR6)
    {
    case 1:
    case 2:
    case 4:
    case 8:
    case 33:
    case 34:
    case 36:
    case 40:
        VAR2->VAR7 = VAR8;
        break;
    case 16:
        VAR2->VAR7 = VAR9;
        break;
    case 24:
        VAR2->VAR7 = VAR10;
        break;
    case 32:
        VAR2->VAR7 = VAR11;
        break;
    default:
        FUN2(VAR2, VAR12, "", VAR2->VAR6);
        break;
    }
    VAR4->VAR13.VAR14[0] = NULL;
    return 0;
}