static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    switch (VAR2->VAR4)
    {
    case VAR5:
        VAR3 = VAR2->VAR6;
        break;
    case VAR7:
        VAR3 = VAR2->VAR8 && VAR2->VAR9 != VAR10;
        break;
    default:
        VAR3 = 1;
        break;
    }
    return (VAR2->VAR11 != VAR12 && VAR3 != 0);
}