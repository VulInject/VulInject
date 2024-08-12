FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR3;
    unsigned char VAR8 = VAR3;
    FUN2(FUN3("" VAR9 "", VAR10, VAR2, VAR7));
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR11:
        FUN4(VAR6->VAR12, &VAR8, 1);
        VAR6->VAR13[VAR14] |= 3;
        VAR6->VAR15 = 1;
        VAR6->VAR13[VAR2] = VAR7;
        break;
    case VAR16:
        if (VAR6->VAR15)
        {
            VAR7 &= ~1;
            VAR6->VAR15 = 0;
            FUN2(FUN3("", VAR7, VAR6->VAR13[VAR14]));
        }
        VAR6->VAR13[VAR2] = VAR7;
        VAR6->VAR13[VAR14] &= ~VAR7;
        FUN2(FUN5("", VAR6->VAR13[VAR14]));
        break;
    default:
        VAR6->VAR13[VAR2] = VAR7;
        break;
    }
    FUN6(VAR6);
}