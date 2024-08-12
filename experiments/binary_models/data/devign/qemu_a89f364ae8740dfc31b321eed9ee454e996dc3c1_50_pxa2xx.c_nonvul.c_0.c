static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7:
    case VAR8:
    case VAR9:
        return VAR6->VAR10[VAR3 >> 2];
    case VAR11:
        return VAR6->VAR10[VAR7 >> 2] | (3 << 28);
    default:
        FUN2("" VAR12 "", VAR13, VAR3);
        break;
    }
    return 0;
}