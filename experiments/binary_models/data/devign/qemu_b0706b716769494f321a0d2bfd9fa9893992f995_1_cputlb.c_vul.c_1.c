static bool FUN1(VAR1 *VAR2, size_t VAR3, size_t VAR4, size_t VAR5, target_ulong VAR6)
{
    size_t VAR7;
    for (VAR7 = 0; VAR7 < VAR8; ++VAR7)
    {
        VAR9 *VAR10 = &VAR2->VAR11[VAR3][VAR7];
        target_ulong VAR12 = *(VAR13 *)((VAR14)VAR10 + VAR5);
        if (VAR12 == VAR6)
        {
            CPUTLBEntry VAR15, *VAR16 = &VAR2->VAR17[VAR3][VAR4];
            CPUIOTLBEntry VAR18, *VAR19 = &VAR2->VAR20[VAR3][VAR4];
            VAR21 *VAR22 = &VAR2->VAR23[VAR3][VAR7];
            VAR15 = *VAR16;
            *VAR16 = *VAR10;
            *VAR10 = VAR15;
            VAR18 = *VAR19;
            *VAR19 = *VAR22;
            *VAR22 = VAR18;
            return true;
        }
    }
    return false;
}