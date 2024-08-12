static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2)
    {
    case VAR7:
    case VAR8:
        VAR6->VAR9[VAR2 >> 2] = VAR3;
        break;
    case VAR10:
        VAR6->VAR9[VAR2 >> 2] &= ~0x6c;
        VAR6->VAR9[VAR2 >> 2] |= VAR3 & 0x6e;
        if ((VAR3 >> 1) & 1)
            VAR6->VAR9[VAR2 >> 2] |= 1 << 0;
        break;
    default:
        FUN2("" VAR11 "", VAR12, VAR2);
        break;
    }
}