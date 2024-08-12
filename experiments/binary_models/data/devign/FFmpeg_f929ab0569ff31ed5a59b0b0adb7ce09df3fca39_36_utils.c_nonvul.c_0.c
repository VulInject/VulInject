VAR1 *FUN1(void)
{
    VAR1 *VAR2 = FUN2(sizeof(VAR1));
    if (!VAR2)
        return NULL;
    VAR3 FUN3(VAR2);
    FF_ENABLE_DEPRECATION_WARNINGS return VAR2;
}