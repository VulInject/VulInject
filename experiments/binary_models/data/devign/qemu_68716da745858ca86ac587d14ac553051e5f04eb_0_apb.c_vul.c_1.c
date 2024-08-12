static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    FUN2("" VAR7 "" VAR8 "", VAR2, VAR3, VAR4);
    switch (VAR2)
    {
    case VAR9:
        if (VAR4 == 4)
        {
            VAR6->VAR10[VAR9 >> 3] &= 0xffffffffULL;
            VAR6->VAR10[VAR9 >> 3] |= VAR3 << 32;
        }
        else
        {
            VAR6->VAR10[VAR9] = VAR3;
        }
        break;
    case VAR9 + 0x4:
        VAR6->VAR10[VAR9 >> 3] &= 0xffffffff00000000ULL;
        VAR6->VAR10[VAR9 >> 3] |= VAR3 & 0xffffffffULL;
        break;
    case VAR11:
        if (VAR4 == 4)
        {
            VAR6->VAR10[VAR11 >> 3] &= 0xffffffffULL;
            VAR6->VAR10[VAR11 >> 3] |= VAR3 << 32;
        }
        else
        {
            VAR6->VAR10[VAR11] = VAR3;
        }
        break;
    case VAR11 + 0x4:
        VAR6->VAR10[VAR11 >> 3] &= 0xffffffff00000000ULL;
        VAR6->VAR10[VAR11 >> 3] |= VAR3 & 0xffffffffULL;
        break;
    default:
        FUN3(VAR12, ""
                                 "" VAR7 "" VAR8 "",
                      VAR2, VAR4, VAR3);
        break;
    }
}