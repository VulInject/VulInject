static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7;
    FUN2("", VAR8, VAR2, VAR3);
    if (VAR2 & 0xF)
        return;
    VAR7 = (VAR2 >> 6) & 0x3;
    VAR2 = VAR2 & 0x30;
    if (VAR2 == 0x0)
    {
        VAR6->VAR9 = VAR3;
        return;
    }
    switch (VAR2 & 0x30)
    {
    case 0x00:
        break;
    case 0x10:
        if ((VAR6->VAR10[VAR7].VAR11 & VAR12) != 0 && (VAR3 & VAR13) == 0 && (VAR6->VAR10[VAR7].VAR14 & VAR13) != 0)
        {
            VAR6->VAR10[VAR7].VAR11 &= ~VAR12;
        }
        VAR6->VAR10[VAR7].VAR14 = VAR3;
        break;
    case 0x20:
        FUN3(VAR6, VAR6->VAR15 + VAR7, VAR3);
        break;
    case 0x30:
        FUN4(VAR6, VAR6->VAR15 + VAR7, VAR3);
        break;
    }
}