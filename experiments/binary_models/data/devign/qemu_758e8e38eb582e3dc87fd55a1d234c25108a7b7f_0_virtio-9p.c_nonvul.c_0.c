static VAR1 *FUN1(VAR2 *VAR3, int32_t VAR4)
{
    VAR1 *VAR5;
    for (VAR5 = VAR3->VAR6; VAR5; VAR5 = VAR5->VAR7)
    {
        if (VAR5->VAR4 == VAR4)
        {
            return VAR5;
        }
    }
    return NULL;
}