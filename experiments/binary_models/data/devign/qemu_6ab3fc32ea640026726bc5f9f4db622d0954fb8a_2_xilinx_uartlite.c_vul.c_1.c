FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR3;
    unsigned char VAR8 = VAR7;
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR9:
        FUN2("");
        break;
    case VAR10:
        if (VAR7 & VAR11)
        {
            VAR6->VAR12 = 0;
            VAR6->VAR13 = 0;
        }
        VAR6->VAR14[VAR2] = VAR7;
        break;
    case VAR15:
        if (VAR6->VAR16)
            FUN3(VAR6->VAR16, &VAR8, 1);
        VAR6->VAR14[VAR2] = VAR7;
        VAR6->VAR14[VAR9] |= VAR17;
        break;
    default:
        FUN4(FUN5("", VAR18, VAR2, VAR7));
        if (VAR2 < FUN6(VAR6->VAR14))
            VAR6->VAR14[VAR2] = VAR7;
        break;
    }
    FUN7(VAR6);
    FUN8(VAR6);
}