static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    switch (VAR3)
    {
    case VAR8:
        VAR7 = VAR6->VAR9 & ~7;
        break;
    default:
        VAR7 = VAR6->VAR10[VAR3 >> 2];
    }
    FUN2(VAR3 + VAR6->VAR11, FUN3(VAR3), VAR7);
    return VAR7;
}