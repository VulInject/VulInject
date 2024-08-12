static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    static const enum AVPixelFormat VAR4[] = {
        VAR5,
        VAR6,
        VAR7,
        VAR8,
    };
    static const enum AVPixelFormat VAR9[] = {
        VAR10,
        VAR8,
    };
    VAR11 *VAR12 = FUN2(VAR4);
    VAR11 *VAR13 = FUN2(VAR9);
    VAR3 = FUN3(VAR12, &VAR2->VAR14[0]->VAR15);
    if (VAR3 < 0)
        return VAR3;
    VAR3 = FUN3(VAR13, &VAR2->VAR16[0]->VAR17);
    if (VAR3 < 0)
        return VAR3;
    return 0;
}