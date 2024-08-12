static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (FUN2(VAR6))
        FUN3(VAR6, 4);
    if (FUN4(VAR2, VAR4, VAR6, &VAR4->VAR8[0]))
        return -1;
    FUN5(VAR4, VAR6, &VAR4->VAR8[0]);
    FUN6(VAR4, VAR6, &VAR4->VAR8[0]);
    if ((VAR7 = FUN7(VAR2, VAR4, VAR6, &VAR4->VAR8[0], 0)) < 0)
        return VAR7;
    if ((VAR7 = FUN8(VAR2, VAR4, VAR6, &VAR4->VAR8[0], 0)) < 0)
        return VAR7;
    if ((VAR4->VAR8[0].VAR9 = FUN2(VAR6)))
        FUN9(VAR6, VAR4->VAR8[0].VAR10, VAR4->VAR11[1]);
    return 0;
}