static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint64_t VAR7 = VAR3 >> 3;
    uint64_t VAR8 = 0;
    switch (VAR7)
    {
    case 0 ... VAR9:
        VAR8 = VAR6->VAR10[VAR7];
        break;
    default:
        FUN2(VAR11, "" VAR12 "", VAR3);
        break;
    }
    return VAR8;
}