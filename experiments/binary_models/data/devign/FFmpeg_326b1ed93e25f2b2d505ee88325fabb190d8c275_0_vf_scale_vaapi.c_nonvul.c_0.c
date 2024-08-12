static int FUN1(VAR1 *VAR2)
{
    enum AVPixelFormat VAR3[] = {
        VAR4,
        VAR5,
    };
    int VAR6;
    if ((VAR6 = FUN2(FUN3(VAR3), &VAR2->VAR7[0]->VAR8)) < 0)
        return VAR6;
    if ((VAR6 = FUN2(FUN3(VAR3), &VAR2->VAR9[0]->VAR10)) < 0)
        return VAR6;
    return 0;
}