static void *FUN1(unsigned int VAR1)
{
    void *VAR2 = FUN2(VAR1);
    if (VAR2)
    {
        VAR3 = FUN3(VAR3, &VAR4, sizeof(void *) * (VAR5 + 1));
        if (!VAR3)
            return NULL;
        VAR3[VAR5++] = VAR2;
    }
    return VAR2;
}