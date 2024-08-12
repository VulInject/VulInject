void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 **VAR5 = &(VAR2->VAR6);
    while (*VAR5)
    {
        uint32_t VAR7 = (*VAR5)->VAR3;
        if ((VAR7 & ~0x1F) == (VAR3 & ~0x1F))
        {
            VAR4 *VAR8 = (*VAR5)->VAR8;
            FUN2(VAR2, VAR7, (*VAR5)->VAR9);
            if (VAR8 == NULL)
            {
                VAR2->VAR10 = VAR5;
            }
            free(*VAR5);
            *VAR5 = VAR8;
            break;
        }
    }
}