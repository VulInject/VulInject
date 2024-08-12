static void FUN1(VAR1 **VAR2, uint64_t VAR3, uint32_t VAR4)
{
    hwaddr VAR5 = VAR4;
    if (*VAR2)
    {
        FUN2(*VAR2, VAR5, 1, VAR5);
    }
    *VAR2 = FUN3(VAR3, &VAR5, 1);
    if (VAR5 < VAR4)
    {
        FUN2(*VAR2, VAR5, 1, VAR5);
        *VAR2 = NULL;
    }
}