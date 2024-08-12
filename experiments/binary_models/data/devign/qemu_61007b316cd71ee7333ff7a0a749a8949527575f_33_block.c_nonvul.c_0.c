VAR1 FUN1(VAR2 *VAR3, bool VAR4, int VAR5)
{
    BlockdevOnError VAR6 = VAR4 ? VAR3->VAR7 : VAR3->VAR8;
    switch (VAR6)
    {
    case VAR9:
        return (VAR5 == VAR10) ? VAR11 : VAR12;
    case VAR13:
        return VAR11;
    case VAR14:
        return VAR12;
    case VAR15:
        return VAR16;
    default:
        FUN2();
    }
}