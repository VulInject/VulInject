static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned char VAR7 = VAR3;
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR8:
        if (VAR6->VAR9)
        {
            FUN2(VAR6->VAR9, &VAR7, 1);
        }
        break;
    case VAR10:
        break;
    default:
        FUN3(VAR11, "" VAR12, VAR2 << 2);
    }