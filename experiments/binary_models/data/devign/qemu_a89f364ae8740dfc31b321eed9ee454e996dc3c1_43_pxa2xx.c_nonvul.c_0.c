static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7 ... VAR8:
        if ((VAR3 & 3) == 0)
            return VAR6->VAR9[VAR3 >> 2];
    default:
        FUN2("" VAR10 "", VAR11, VAR3);
        break;
    }
    return 0;
}