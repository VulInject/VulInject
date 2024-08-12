VAR1 FUN1(target_ulong VAR2, target_ulong VAR3)
{
    int64_t VAR4;
    int32_t VAR5;
    VAR4 = (VAR2 & 0xffffffff) | ((VAR6)(VAR7->VAR8) << 32);
    VAR5 = (VAR3 & 0xffffffff);
    if (VAR5 == 0)
    {
        FUN2(VAR9);
    }
    VAR4 = VAR4 / VAR5;
    if ((VAR10)VAR4 != VAR4)
    {
        VAR7->VAR11 = 1;
        return VAR4 < 0 ? 0x80000000 : 0x7fffffff;
    }
    else
    {
        VAR7->VAR11 = 0;
        return VAR4;
    }
}