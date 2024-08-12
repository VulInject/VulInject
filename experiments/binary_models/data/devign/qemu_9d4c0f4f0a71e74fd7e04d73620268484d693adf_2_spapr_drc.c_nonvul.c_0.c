static VAR1 FUN1(VAR2 *VAR3)
{
    switch (VAR3->VAR4)
    {
    case VAR5:
        return VAR6;
    case VAR7:
    case VAR8:
    case VAR9:
        FUN2(VAR3->VAR10);
        return VAR11;
    default:
        FUN3();
    }
}