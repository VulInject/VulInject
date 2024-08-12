VAR1 *FUN1(VAR2 *VAR3)
{
    while (VAR3->VAR4 < VAR5)
    {
        VAR1 *VAR6 = &(VAR7[VAR3->VAR4]);
        VAR3->VAR4++;
        if (!VAR3->VAR8 || FUN2(VAR3->VAR8, FUN3(VAR6)))
        {
            return VAR6;
        }
    }
    return NULL;
}