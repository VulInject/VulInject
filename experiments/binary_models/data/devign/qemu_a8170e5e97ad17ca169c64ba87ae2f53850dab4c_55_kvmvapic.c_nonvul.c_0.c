static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    hwaddr VAR5;
    target_ulong VAR6;
    if (VAR2->VAR7 == VAR8)
    {
        return 0;
    }
    for (VAR6 = 0xfffff000; VAR6 >= 0x80000000; VAR6 -= VAR9)
    {
        VAR5 = FUN2(VAR4, VAR6);
        if (VAR5 != VAR10)
        {
            continue;
        }
        VAR2->VAR11 = VAR6 + 0x80;
        FUN3(VAR2);
        return 0;
    }
    return -1;
}