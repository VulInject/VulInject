static VAR1 FUN1(VAR2 *VAR3)
{
    switch (VAR3->VAR4)
    {
    case VAR5:
    case VAR6:
        return VAR7;
    case VAR8:
        break;
    default:
        FUN2();
    }
    if (!VAR3->VAR9)
    {
        return VAR10;
    }
    VAR3->VAR4 = VAR5;
    return VAR7;
}