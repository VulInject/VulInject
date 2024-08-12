static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, unsigned VAR5)
{
    uint64_t VAR6 = 0;
    if (!FUN2(VAR3, VAR4, VAR5, false))
    {
        return FUN3(VAR3, VAR4, VAR5);
    }
    if (!VAR3->VAR7->read)
    {
        return VAR3->VAR7->VAR8.read[FUN4(VAR5)](VAR3->VAR9, VAR4);
    }
    FUN5(VAR4, &VAR6, VAR5, VAR3->VAR7->VAR10.VAR11, VAR3->VAR7->VAR10.VAR12, VAR13, VAR3);
    return VAR6;
}