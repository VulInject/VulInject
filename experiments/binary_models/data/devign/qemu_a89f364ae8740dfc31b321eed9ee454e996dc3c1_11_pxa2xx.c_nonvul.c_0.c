static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7 ... VAR8:
        if (VAR3 & 3)
            goto VAR9;
        return VAR6->VAR10[VAR3 >> 2];
    default:
    VAR9:
        FUN2("" VAR11 "", VAR12, VAR3);
        break;
    }
    return 0;
}