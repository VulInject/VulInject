FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    struct VAR5 *VAR6 = VAR1;
    struct VAR7 *VAR8;
    unsigned int VAR9;
    uint32_t VAR10 = VAR3;
    VAR2 >>= 2;
    VAR9 = FUN2(VAR2);
    VAR8 = &VAR6->VAR11[VAR9];
    FUN3(fprintf(VAR12, "", VAR13, VAR2 * 4, VAR10, VAR9, VAR2 & 3));
    VAR2 &= 3;
    switch (VAR2)
    {
    case VAR14:
        if (VAR10 & VAR15)
            VAR10 &= ~VAR15;
        VAR8->VAR16[VAR2] = VAR10 & 0x7ff;
        if (VAR10 & VAR17)
            FUN4(VAR8);
        break;
    default:
        if (VAR2 < FUN5(VAR8->VAR16))
            VAR8->VAR16[VAR2] = VAR10;
        break;
    }
    FUN6(VAR6);
}