static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR2->VAR5.VAR6; VAR4++)
    {
        VAR7 *VAR8 = &VAR2->VAR5.VAR9[VAR4];
        GetBitContext VAR10;
        switch (VAR8->VAR11)
        {
        case VAR12:
        case VAR13:
            VAR3 = VAR4;
            break;
        case VAR14:
        case VAR15:
        case VAR16:
            FUN2(&VAR10, VAR8->VAR17 + 1, (VAR8->VAR18 - 1) * 8);
            if (!FUN3(&VAR10))
                VAR3 = VAR4;
        }
    }
    return VAR3;
}