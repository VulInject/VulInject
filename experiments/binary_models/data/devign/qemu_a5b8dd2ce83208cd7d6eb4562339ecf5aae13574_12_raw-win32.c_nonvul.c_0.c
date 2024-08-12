static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    DWORD VAR8, VAR9, VAR10, VAR11;
    DISK_GEOMETRY_EX VAR12;
    BOOL VAR13;
    if (VAR6->VAR14 == VAR15)
    {
        VAR2->VAR16.VAR17 = 2048;
        return;
    }
    if (VAR6->VAR14 == VAR18)
    {
        VAR13 = FUN2(VAR6->VAR19, VAR20, NULL, 0, &VAR12, sizeof(VAR12), &VAR11, NULL);
        if (VAR13 != 0)
        {
            VAR2->VAR16.VAR17 = VAR12.VAR21.VAR22;
            return;
        }
    }
    if (VAR6->VAR23[0])
    {
        FUN3(VAR6->VAR23, &VAR8, &VAR12.VAR21.VAR22, &VAR9, &VAR10);
        VAR2->VAR16.VAR17 = VAR12.VAR21.VAR22;
    }
}