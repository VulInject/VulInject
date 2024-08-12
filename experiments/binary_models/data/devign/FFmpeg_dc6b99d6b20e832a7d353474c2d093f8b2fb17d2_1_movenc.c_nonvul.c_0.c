static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int64_t VAR6 = FUN2(VAR2);
    FUN3(VAR2, 0);
    FUN4(VAR2, VAR4->VAR7);
    VAR4->VAR8->VAR9 = FUN5(VAR4->VAR7 >> 16);
    if ((VAR5 = FUN6(VAR2, VAR4->VAR8, 0)) < 0)
        return VAR5;
    return FUN7(VAR2, VAR6);
}