static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned char VAR7 = 0;
    VAR2 &= 0xff;
    switch (VAR2)
    {
    case VAR8:
    case VAR8 + 3:
        if ((VAR6->VAR9) && (VAR6->VAR10 & VAR11))
        {
            VAR7 = VAR3 & 0xFF;
            FUN2(VAR6->VAR9, &VAR7, 1);
            if (VAR6->VAR10 & VAR12)
            {
                FUN3(VAR6->VAR13);
            }
        }
        return;
    case VAR14:
        return;
    case VAR15:
        VAR6->VAR10 = VAR3;
        return;
    case VAR16:
        return;
    default:
        break;
    }
    FUN4(VAR2, VAR3);
}