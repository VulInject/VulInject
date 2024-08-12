static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, uint32_t VAR6, uint64_t VAR7, uint64_t VAR8)
{
    QEMUSGList VAR9;
    QEMUIOVector VAR10;
    uint16_t VAR11 = VAR12;
    if (FUN2(&VAR9, &VAR10, VAR7, VAR8, VAR6, VAR3))
    {
        return VAR13 | VAR14;
    }
    if (VAR9.VAR15 > 0)
    {
        if (FUN3(VAR5, VAR6, &VAR9))
        {
            VAR11 = VAR13 | VAR14;
        }
        FUN4(&VAR9);
    }
    else
    {
        if (FUN5(&VAR10, 0, VAR5, VAR6) != VAR6)
        {
            VAR11 = VAR13 | VAR14;
        }
        FUN6(&VAR10);
    }
    return VAR11;
}