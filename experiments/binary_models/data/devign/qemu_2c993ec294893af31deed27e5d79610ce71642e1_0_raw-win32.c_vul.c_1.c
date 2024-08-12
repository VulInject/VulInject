int FUN1(int VAR1, int64_t VAR2)
{
    LARGE_INTEGER VAR3;
    LONG VAR4;
    HANDLE VAR5;
    BOOL VAR6;
    if ((FUN2() & 0x80000000UL) && (VAR2 >> 32) != 0)
        return -1;
    VAR5 = (VAR7)FUN3(VAR1);
    VAR3.VAR8 = 0;
    VAR3.VAR9 = FUN4(VAR5, 0, &VAR3.VAR8, VAR10);
    if (VAR3.VAR9 == 0xffffffffUL && FUN5() != VAR11)
        return -1;
    VAR4 = VAR2 >> 32;
    if (!FUN4(VAR5, (VAR12)VAR2, &VAR4, VAR13))
        return -1;
    VAR6 = FUN6(VAR5);
    FUN4(VAR5, VAR3.VAR9, &VAR3.VAR8, VAR13);
    return VAR6 ? 0 : -1;
}