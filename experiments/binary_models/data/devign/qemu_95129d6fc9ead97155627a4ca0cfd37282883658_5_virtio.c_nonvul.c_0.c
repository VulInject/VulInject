static bool FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    assert(VAR3->VAR4 != VAR5);
    if (!FUN2(VAR3, VAR6))
    {
        return VAR3->VAR4 != FUN3();
    }
    return VAR3->VAR4 != VAR7;
}