static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8[VAR2 >> 2] &= ~(VAR3 & 0x2a);
        VAR6->VAR8[VAR2 >> 2] &= ~0x15;
        VAR6->VAR8[VAR2 >> 2] |= VAR3 & 0x15;
        break;
    case VAR9:
    case VAR10:
    case VAR11:
        VAR6->VAR8[VAR2 >> 2] &= ~VAR3;
        break;
    default:
        if (!(VAR2 & 3))
        {
            VAR6->VAR8[VAR2 >> 2] = VAR3;
            break;
        }
        FUN2("" VAR12 "", VAR13, VAR2);
        break;
    }
}