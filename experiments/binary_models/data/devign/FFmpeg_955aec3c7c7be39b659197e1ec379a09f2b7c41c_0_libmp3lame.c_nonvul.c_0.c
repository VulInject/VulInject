static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    MPADecodeHeader VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15;
    uint32_t VAR16;
    if (VAR6)
    {
        switch (VAR2->VAR17)
        {
        case VAR18:
            FUN2(VAR19, VAR20, VAR6->VAR21);
            break;
        case VAR22:
            FUN2(VAR23, VAR24, VAR6->VAR21);
            break;
        case VAR25:
            if (VAR6->VAR26[0] < 4 * FUN3(VAR6->VAR27, 8))
            {
                FUN4(VAR2, VAR28, "");
                return FUN5(VAR29);
            }
            for (VAR14 = 0; VAR14 < VAR2->VAR30; VAR14++)
            {
                VAR9->VAR31.FUN6(VAR9->VAR32[VAR14], (const float *)VAR6->VAR21[VAR14], 32768.0f, FUN3(VAR6->VAR27, 8));
            }
            FUN2(VAR33, float, VAR9->VAR32);
            break;
        default:
            return VAR34;
        }
    }
    else
    {
        VAR15 = FUN7(VAR9->VAR35, VAR9->VAR36 + VAR9->VAR37, VAR9->VAR38 - VAR9->VAR37);
    }
    if (VAR15 < 0)
    {
        if (VAR15 == -1)
        {
            FUN4(VAR2, VAR28, "", VAR9->VAR37, VAR9->VAR38 - VAR9->VAR37);
        }
        return -1;
    }
    VAR9->VAR37 += VAR15;
    VAR13 = FUN8(VAR9);
    if (VAR13 < 0)
    {
        FUN4(VAR2, VAR28, "");
        return VAR13;
    }
    if (VAR6)
    {
        if ((VAR13 = FUN9(&VAR9->VAR39, VAR6)) < 0)
            return VAR13;
    }
    if (VAR9->VAR37 < 4)
        return 0;
    VAR16 = FUN10(VAR9->VAR36);
    VAR13 = FUN11(&VAR11, VAR16);
    if (VAR13 < 0)
    {
        FUN4(VAR2, VAR28, "");
        return VAR34;
    }
    else if (VAR13)
    {
        FUN4(VAR2, VAR28, "");
        return -1;
    }
    VAR12 = VAR11.VAR40;
    FUN12(VAR2, "", VAR2->VAR40, VAR12, VAR9->VAR37);
    if (VAR12 <= VAR9->VAR37)
    {
        if ((VAR13 = FUN13(VAR4, VAR12)))
        {
            FUN4(VAR2, VAR28, "");
            return VAR13;
        }
        memcpy(VAR4->VAR21, VAR9->VAR36, VAR12);
        VAR9->VAR37 -= VAR12;
        memmove(VAR9->VAR36, VAR9->VAR36 + VAR12, VAR9->VAR37);
        FUN14(&VAR9->VAR39, VAR2->VAR40, &VAR4->VAR41, &VAR4->VAR42);
        VAR4->VAR43 = VAR12;
        *VAR7 = 1;
    }
    return 0;
}