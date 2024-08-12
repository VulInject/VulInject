static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    switch (VAR6)
    {
    case 2048:
        FUN2(FUN3(VAR2->VAR8), &VAR2->VAR9, 4 * VAR10, VAR11);
        VAR7 = FUN4(VAR2->VAR8, (VAR12)VAR3 << 2, VAR5, 4);
        FUN5(FUN3(VAR2->VAR8), &VAR2->VAR9);
        break;
    case 2352:
        FUN2(FUN3(VAR2->VAR8), &VAR2->VAR9, 4 * VAR10, VAR11);
        VAR7 = FUN4(VAR2->VAR8, (VAR12)VAR3 << 2, VAR5 + 16, 4);
        FUN5(FUN3(VAR2->VAR8), &VAR2->VAR9);
        if (VAR7 < 0)
            return VAR7;
        FUN6(VAR5, VAR3);
        break;
    default:
        VAR7 = -VAR13;
        break;
    }
    return VAR7;
}