static VAR1 *FUN1(tb_page_addr_t VAR2, int VAR3)
{
    VAR1 *VAR4;
    void **VAR5;
    int VAR6;
    VAR5 = VAR7 + ((VAR2 >> VAR8) & (VAR9 - 1));
    for (VAR6 = VAR8 / VAR10 - 1; VAR6 > 0; VAR6--)
    {
        void **VAR11 = *VAR5;
        if (VAR11 == NULL)
        {
            if (!VAR3)
            {
                return NULL;
            }
            VAR11 = FUN2(void *, VAR12);
            *VAR5 = VAR11;
        }
        VAR5 = VAR11 + ((VAR2 >> (VAR6 * VAR10)) & (VAR12 - 1));
    }
    VAR4 = *VAR5;
    if (VAR4 == NULL)
    {
        if (!VAR3)
        {
            return NULL;
        }
        VAR4 = FUN2(VAR1, VAR12);
        *VAR5 = VAR4;
    }
    return VAR4 + (VAR2 & (VAR12 - 1));
}