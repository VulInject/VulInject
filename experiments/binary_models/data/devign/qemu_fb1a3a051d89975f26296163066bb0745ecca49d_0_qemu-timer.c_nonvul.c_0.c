VAR1 FUN1(QEMUClockType VAR2)
{
    int64_t VAR3, VAR4;
    VAR5 *VAR6 = FUN2(VAR2);
    switch (VAR2)
    {
    case VAR7:
        return FUN3();
    default:
    case VAR8:
        if (VAR9)
        {
            return FUN4();
        }
        else
        {
            return FUN5();
        }
    case VAR10:
        VAR3 = FUN6();
        VAR4 = VAR6->VAR4;
        VAR6->VAR4 = VAR3;
        if (VAR3 < VAR4 || VAR3 > (VAR4 + FUN7()))
        {
            FUN8(&VAR6->VAR11, &VAR3);
        }
        return VAR3;
    case VAR12:
        return FUN5();
    }
}