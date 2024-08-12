static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    int VAR5, VAR6, VAR7;
    uint32_t VAR8;
    VAR9 *VAR10, *VAR11, *VAR12;
    AVCodecContext VAR13;
    if (FUN2(VAR2->VAR10))
        return VAR14 / 2 + 1;
    VAR3 = 0;
    VAR10 = VAR2->VAR10;
    VAR12 = VAR10 + VAR2->VAR15 - sizeof(VAR16);
    for (; VAR10 < VAR12; VAR10 = VAR11 + 1)
    {
        VAR11 = VAR10;
        for (VAR6 = 0; VAR11 < VAR12; VAR6++)
        {
            VAR8 = FUN3(VAR11);
            VAR5 = FUN4(&VAR13, VAR8, &VAR7, &VAR7, &VAR7, &VAR7);
            if (VAR5 < 0)
                break;
            VAR11 += VAR5;
        }
        VAR3 = FUN5(VAR3, VAR6);
        if (VAR10 == VAR2->VAR10)
            VAR4 = VAR6;
    }
    if (VAR4 >= 3)
        return VAR14 / 2 + 1;
    else if (VAR3 > 500)
        return VAR14 / 2;
    else if (VAR3 >= 3)
        return VAR14 / 4;
    else if (VAR3 >= 1)
        return 1;
    else
        return 0;
}