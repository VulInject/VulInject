static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint32_t VAR7 = VAR3;
    uint8_t VAR8;
    switch (VAR2)
    {
    case VAR9:
        VAR6->VAR10[0] = VAR7;
        if (!(VAR7 & (1 << 4)))
            VAR6->VAR11 = VAR6->VAR12 = 0;
        if (!(VAR7 & (1 << 3)))
        {
        }
        VAR6->VAR13 = VAR7 & 1;
        if (!VAR6->VAR13)
            VAR6->VAR14[0] = 0;
        FUN2(VAR6);
        break;
    case VAR15:
        VAR6->VAR10[1] = VAR7;
        break;
    case VAR16:
        VAR6->VAR10[2] = VAR7 & 0x3f;
        FUN2(VAR6);
        break;
    case VAR17:
        if (VAR6->VAR10[2] & (1 << 2))
        {
            VAR8 = VAR7;
        }
        else
        {
            VAR8 = ~VAR7;
        }
        if (VAR6->VAR13 && (VAR6->VAR10[0] & (1 << 3)))
        {
            FUN3(&VAR6->VAR18, &VAR8, 1);
        }
        break;
    case VAR19:
        VAR6->VAR14[0] &= ~(VAR7 & 0x66);
        FUN2(VAR6);
        break;
    case VAR20:
        break;
    default:
        FUN4("" VAR21 "", VAR22, VAR2);
    }
}