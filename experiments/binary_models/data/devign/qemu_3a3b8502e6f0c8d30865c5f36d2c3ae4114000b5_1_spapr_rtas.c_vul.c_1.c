VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, uint32_t VAR6, uint32_t VAR7, target_ulong VAR8, uint32_t VAR9, target_ulong VAR10)
{
    if ((VAR6 >= VAR11) && ((VAR6 - VAR11) < VAR12))
    {
        struct VAR13 *VAR14 = VAR15 + (VAR6 - VAR11);
        if (VAR14->VAR16)
        {
            VAR14->FUN2(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10);
            return VAR17;
        }
    }
    if (VAR6 == 0xa)
    {
        FUN3(VAR3, VAR5, 0xa, VAR7, VAR8, VAR9, VAR10);
        return VAR17;
    }
    FUN4("", VAR6);
    FUN5(VAR10, 0, VAR18);
    return VAR19;
}