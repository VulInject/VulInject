static const VAR1 *FUN1(enum TpmType VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR4 && VAR5[VAR3] != NULL; VAR3++)
    {
        if (VAR5[VAR3]->VAR2 == VAR2)
        {
            return VAR5[VAR3];
        }
    }
    return NULL;
}