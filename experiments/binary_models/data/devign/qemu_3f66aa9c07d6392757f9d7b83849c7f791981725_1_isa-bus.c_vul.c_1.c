VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    VAR3 = FUN2(VAR2);
    if (FUN3(&VAR3->VAR4) != 0)
    {
        return NULL;
    }
    return VAR3;
}