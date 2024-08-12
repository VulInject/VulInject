void *FUN1(struct VAR1 *VAR2, qht_lookup_func_t VAR3, const void *VAR4, uint32_t VAR5)
{
    struct VAR1 *VAR6 = VAR2;
    int VAR7;
    do
    {
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            if (VAR6->VAR9[VAR7] == VAR5)
            {
                void *VAR10 = FUN2(&VAR6->VAR11[VAR7]);
                if (FUN3(VAR10) && FUN3(FUN4(VAR10, VAR4)))
                {
                    return VAR10;
                }
            }
        }
        VAR6 = FUN2(&VAR6->VAR12);
    } while (VAR6);
    return NULL;
}