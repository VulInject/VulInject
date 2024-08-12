int FUN1(VAR1 *VAR2, uint32_t VAR3, int *VAR4, int *VAR5, int *VAR6, int *VAR7)
{
    MPADecodeHeader VAR8, *VAR9 = &VAR8;
    if (FUN2(VAR9, VAR3) != 0)
    {
        return -1;
    }
    switch (VAR9->VAR10)
    {
    case 1:
        VAR2->VAR11 = VAR12;
        *VAR6 = 384;
        break;
    case 2:
        VAR2->VAR11 = VAR13;
        *VAR6 = 1152;
        break;
    default:
    case 3:
        if (VAR2->VAR11 != VAR14)
            VAR2->VAR11 = VAR15;
        if (VAR9->VAR16)
            *VAR6 = 576;
        else
            *VAR6 = 1152;
        break;
    }
    *VAR4 = VAR9->VAR4;
    *VAR5 = VAR9->VAR17;
    *VAR7 = VAR9->VAR7;
    return VAR9->VAR6;
}