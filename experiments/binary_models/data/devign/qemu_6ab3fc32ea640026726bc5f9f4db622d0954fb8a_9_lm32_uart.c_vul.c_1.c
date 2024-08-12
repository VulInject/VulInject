static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned char VAR7 = VAR3;
    FUN2(VAR2, VAR3);
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR8:
        if (VAR6->VAR9)
        {
            FUN3(VAR6->VAR9, &VAR7, 1);
        }
        break;
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
        VAR6->VAR14[VAR2] = VAR3;
        break;
    case VAR15:
    case VAR16:
    case VAR17:
        FUN4("" VAR18, VAR2 << 2);
        break;
    default:
        FUN4("" VAR18, VAR2 << 2);
        break;
    }
    FUN5(VAR6);