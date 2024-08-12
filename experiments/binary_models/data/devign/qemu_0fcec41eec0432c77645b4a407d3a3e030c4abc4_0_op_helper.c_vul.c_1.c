VAR1 FUN1(target_ulong VAR2, target_ulong VAR3)
{
    uint64_t VAR4;
    uint32_t VAR5;
    VAR4 = (VAR2 & 0xffffffff) | ((VAR6)(VAR7->VAR8) << 32);
    VAR5 = (VAR3 & 0xffffffff);
    if (VAR5 == 0)
    {
        FUN2(VAR9);
    }
    VAR4 = VAR4 / VAR5;
    if (VAR4 > 0xffffffff)
    {
        VAR7->VAR10 = 1;
        return 0xffffffff;
    }
    else
    {
        VAR7->VAR10 = 0;
        return VAR4;
    }
}