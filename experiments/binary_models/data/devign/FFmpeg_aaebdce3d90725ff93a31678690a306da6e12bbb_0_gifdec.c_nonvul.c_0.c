static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    if (FUN2(&VAR2->VAR7) < 2)
        return VAR8;
    VAR3 = FUN3(&VAR2->VAR7);
    VAR4 = FUN3(&VAR2->VAR7);
    FUN4(VAR2->VAR9, "", VAR3, VAR4);
    switch (VAR3)
    {
    case VAR10:
        if (VAR4 != 4)
            goto VAR11;
        if (FUN2(&VAR2->VAR7) < 5)
            return VAR8;
        VAR5 = FUN3(&VAR2->VAR7);
        FUN5(&VAR2->VAR7, 2);
        VAR6 = FUN3(&VAR2->VAR7);
        if (VAR5 & 0x01)
            VAR2->VAR12 = VAR6;
        else
            VAR2->VAR12 = -1;
        VAR2->VAR13 = (VAR5 >> 2) & 0x7;
        FUN4(VAR2->VAR9, "", VAR5, VAR2->VAR12, VAR2->VAR13);
        if (VAR2->VAR13 > 3)
        {
            VAR2->VAR13 = VAR14;
            FUN4(VAR2->VAR9, "", VAR4);
        }
        VAR4 = FUN3(&VAR2->VAR7);
        break;
    }
VAR11:
    while (VAR4)
    {
        if (FUN2(&VAR2->VAR7) < VAR4 + 1)
            return VAR8;
        FUN5(&VAR2->VAR7, VAR4);
        VAR4 = FUN3(&VAR2->VAR7);
        FUN4(VAR2->VAR9, "", VAR4);
    }
    return 0;
}