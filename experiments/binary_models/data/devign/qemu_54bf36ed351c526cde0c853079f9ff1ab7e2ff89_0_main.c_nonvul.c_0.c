FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    uint32_t VAR4;
    uint32_t VAR5;
    switch (VAR2->VAR6[15])
    {
    case 0xffff0fa0:
        break;
    case 0xffff0fc0:
        FUN2();
        VAR4 = FUN3(VAR2);
        VAR3 = VAR2->VAR6[2];
        if (FUN4(VAR5, VAR3))
            VAR5 = ~VAR2->VAR6[0];
        if (VAR5 == VAR2->VAR6[0])
        {
            VAR5 = VAR2->VAR6[1];
            FUN5(VAR5, VAR3);
            VAR2->VAR6[0] = 0;
            VAR4 |= VAR7;
        }
        else
        {
            VAR2->VAR6[0] = -1;
            VAR4 &= ~VAR7;
        }
        FUN6(VAR2, VAR4, VAR7);
        FUN7();
        break;
    case 0xffff0fe0:
        VAR2->VAR6[0] = VAR2->VAR8.VAR9[0];
        break;
    case 0xffff0f60:
        FUN8(VAR2);
        break;
    default:
        return 1;
    }
    VAR3 = VAR2->VAR6[14];
    if (VAR3 & 1)
    {
        VAR2->VAR10 = 1;
        VAR3 &= ~1;
    }
    VAR2->VAR6[15] = VAR3;
    return 0;
}