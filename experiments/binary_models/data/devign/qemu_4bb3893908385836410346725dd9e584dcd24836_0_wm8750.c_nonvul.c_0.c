VAR1 FUN1(void *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR1 *VAR5;
    if (VAR4->VAR6 >= sizeof(VAR4->VAR7))
    {
        FUN2(VAR4);
        if (VAR4->VAR6 >= sizeof(VAR4->VAR7))
        {
            return 0x80008000;
        }
    }
    VAR5 = (VAR1 *)&VAR4->VAR7[VAR4->VAR6];
    VAR4->VAR8 -= 4;
    VAR4->VAR6 += 4;
    return *VAR5;
}