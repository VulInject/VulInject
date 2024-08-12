void *FUN1(size_t VAR1, size_t VAR2)
{
    size_t VAR3;
    void *VAR4;
    FUN2(VAR1);
    FUN2(VAR2);
    VAR3 = VAR1 * VAR2;
    VAR4 = FUN3(VAR2);
    FUN4(VAR4);
    FUN5(VAR4, "");
    return VAR4;
}