static const VAR1 *FUN1(const VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR4[VAR3]; VAR3++)
    {
        if (VAR4[VAR3]->VAR5 == VAR2)
        {
            VAR3++;
            break;
        }
    }
    for (; VAR4[VAR3]; VAR3++)
        if (VAR4[VAR3]->VAR5)
            return VAR4[VAR3]->VAR5;
    return NULL;
}