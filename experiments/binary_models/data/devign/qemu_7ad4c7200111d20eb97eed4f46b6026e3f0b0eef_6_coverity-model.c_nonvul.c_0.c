void *FUN1(void *VAR1, size_t VAR2, size_t VAR3)
{
    size_t VAR4;
    FUN2(VAR2);
    FUN2(VAR3);
    VAR4 = VAR2 * VAR3;
    FUN3(VAR1);
    VAR1 = FUN4(VAR3);
    FUN5(VAR1);
    FUN6(VAR1, "");
    return VAR1;
}