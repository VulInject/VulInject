static VAR1 FUN1(VAR2 *VAR3)
{
    switch (VAR3->VAR4)
    {
    case VAR5:
        return VAR6;
    case VAR7:
        break;
    case VAR8:
        return VAR9;
    default:
        FUN2();
    }
    VAR3->VAR4 = VAR5;
    if (VAR3->VAR10)
    {
        uint32_t VAR11 = FUN3(VAR3);
        FUN4(VAR11);
        FUN5(VAR3);
    }
    return VAR6;
}