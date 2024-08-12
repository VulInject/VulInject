static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (FUN2(VAR6))
        FUN3(VAR6, 8);
    if ((VAR4->VAR8 = FUN2(VAR6)))
    {
        if (FUN4(VAR2, VAR4, VAR6, &VAR4->VAR9[0]))
            return -1;
        FUN5(&VAR4->VAR9[1], &VAR4->VAR9[0]);
        FUN6(VAR4, VAR6, &VAR4->VAR9[0]);
        FUN6(VAR4, VAR6, &VAR4->VAR9[1]);
        FUN7(VAR4, VAR6, &VAR4->VAR9[0]);
        memcpy(VAR4->VAR9[1].VAR10[1], VAR4->VAR9[1].VAR10[0], sizeof(VAR4->VAR9[1].VAR10[0]));
        memcpy(VAR4->VAR9[1].VAR10[0], VAR4->VAR9[0].VAR10[0], sizeof(VAR4->VAR9[1].VAR10[0]));
        FUN8(VAR4, VAR6, &VAR4->VAR9[0], 0);
        if ((VAR7 = FUN9(VAR2, VAR4, VAR6, &VAR4->VAR9[0], 0)) < 0)
            return VAR7;
        FUN8(VAR4, VAR6, &VAR4->VAR9[1], 1);
        if ((VAR7 = FUN9(VAR2, VAR4, VAR6, &VAR4->VAR9[1], 1)) < 0)
            return VAR7;
    }
    else
    {
        if (FUN4(VAR2, VAR4, VAR6, &VAR4->VAR9[0]) || FUN4(VAR2, VAR4, VAR6, &VAR4->VAR9[1]))
            return -1;
        FUN6(VAR4, VAR6, &VAR4->VAR9[0]);
        FUN6(VAR4, VAR6, &VAR4->VAR9[1]);
        FUN7(VAR4, VAR6, &VAR4->VAR9[0]);
        FUN7(VAR4, VAR6, &VAR4->VAR9[1]);
        FUN8(VAR4, VAR6, &VAR4->VAR9[0], 0);
        FUN8(VAR4, VAR6, &VAR4->VAR9[1], 1);
        if ((VAR7 = FUN9(VAR2, VAR4, VAR6, &VAR4->VAR9[0], 0)) < 0)
            return VAR7;
        if ((VAR7 = FUN9(VAR2, VAR4, VAR6, &VAR4->VAR9[1], 1)) < 0)
            return VAR7;
    }
    if ((VAR4->VAR9[0].VAR11 = FUN2(VAR6)))
        FUN10(VAR6, VAR4->VAR9[0].VAR12, VAR4->VAR13[1]);
    if ((VAR4->VAR9[1].VAR11 = FUN2(VAR6)))
        FUN10(VAR6, VAR4->VAR9[1].VAR12, VAR4->VAR13[1]);
    return 0;
}