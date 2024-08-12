static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    for (VAR13 = 0; VAR13 < VAR9->VAR15; VAR13++)
        if (VAR2 == VAR6->VAR16[VAR13])
            break;
    VAR14 = FUN2(VAR9->VAR17[VAR13].VAR18, (void **)VAR4->VAR19, VAR4->VAR20);
    FUN3(&VAR4);
    if (VAR14 < 0)
        return VAR14;
    VAR11 = FUN4(VAR9->VAR17[VAR13].VAR18);
    VAR12 = 65536;
    if (VAR11 > VAR12)
    {
        FUN5(VAR6, VAR21, "", VAR11, VAR12);
        return FUN6(VAR22);
    }
    VAR9->VAR17[VAR13].VAR11 = VAR11;
    VAR9->VAR11 = FUN7(VAR11, VAR9->VAR11);
    return 0;
}