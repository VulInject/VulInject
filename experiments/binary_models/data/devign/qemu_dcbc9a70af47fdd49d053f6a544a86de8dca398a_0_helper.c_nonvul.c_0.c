int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    if (VAR4 == 2)
    {
        VAR7 = VAR9;
        VAR8 = 0x40000000;
    }
    else
    {
        VAR7 = VAR10;
        VAR8 = 0x40000000;
        if (VAR4)
            VAR8 |= 0x02000000;
        VAR2->VAR11[VAR12] = VAR3;
        VAR2->VAR11[VAR13] = VAR8;
    }
    VAR2->VAR14 = VAR7;
    VAR2->VAR8 = VAR8;
    return 1;
}