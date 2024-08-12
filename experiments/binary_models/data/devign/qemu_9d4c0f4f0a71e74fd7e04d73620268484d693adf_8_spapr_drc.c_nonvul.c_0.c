static VAR1 FUN1(VAR2 *VAR3)
{
    switch (VAR3->VAR4)
    {
    case VAR5:
    case VAR6:
        return VAR7;
    case VAR8:
        break;
    case VAR9:
        return VAR10;
    default:
        FUN2();
    }
    FUN3(VAR3->VAR11);
    VAR3->VAR4 = VAR5;
    return VAR7;
}