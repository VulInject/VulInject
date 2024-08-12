static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    int VAR9 = 0;
    int64_t VAR10;
    int32_t VAR11;
    VAR10 = (VAR4 & 0xffffffff) | ((VAR12)(VAR3->VAR13) << 32);
    VAR11 = (VAR5 & 0xffffffff);
    if (VAR11 == 0)
    {
        FUN3(FUN4(VAR8), FUN5());
        FUN6(VAR3, VAR14);
    }
    VAR10 = VAR10 / VAR11;
    if ((VAR15)VAR10 != VAR10)
    {
        VAR10 = VAR10 < 0 ? 0x80000000 : 0x7fffffff;
        VAR9 = 1;
    }
    if (VAR6)
    {
        VAR3->VAR16 = VAR10;
        VAR3->VAR17 = VAR9;
        VAR3->VAR18 = VAR19;
    }
    return VAR10;
}