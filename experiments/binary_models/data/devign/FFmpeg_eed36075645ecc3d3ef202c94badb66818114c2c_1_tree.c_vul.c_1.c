void *FUN1(VAR1 **VAR2, void *VAR3, int (*VAR4)(void *VAR3, const void *VAR5), VAR1 **VAR6)
{
    VAR1 *VAR7 = *VAR2;
    if (VAR7)
    {
        unsigned int VAR8 = FUN2(VAR7->VAR9, VAR3);
        void *VAR10;
        if (!VAR8)
        {
            if (*VAR6)
                return VAR7->VAR9;
            else if (VAR7->VAR11[0] || VAR7->VAR11[1])
            {
                int VAR12 = !VAR7->VAR11[0];
                void *VAR13[2];
                FUN3(VAR7->VAR11[VAR12], VAR3, VAR4, VAR13);
                VAR3 = VAR7->VAR9 = VAR13[VAR12];
                VAR8 = -VAR12;
            }
            else
            {
                *VAR6 = VAR7;
                *VAR2 = NULL;
                return NULL;
            }
        }
        VAR10 = FUN1(&VAR7->VAR11[VAR8 >> 31], VAR3, VAR4, VAR6);
        if (!VAR10)
        {
            int VAR12 = (VAR8 >> 31) ^ !!*VAR6;
            VAR1 **VAR11 = &VAR7->VAR11[VAR12];
            VAR7->VAR14 += 2 * VAR12 - 1;
            if (!(VAR7->VAR14 & 1))
            {
                if (VAR7->VAR14)
                {
                    if ((*VAR11)->VAR14 * 2 == -VAR7->VAR14)
                    {
                        *VAR2 = (*VAR11)->VAR11[VAR12 ^ 1];
                        (*VAR11)->VAR11[VAR12 ^ 1] = (*VAR2)->VAR11[VAR12];
                        (*VAR2)->VAR11[VAR12] = *VAR11;
                        *VAR11 = (*VAR2)->VAR11[VAR12 ^ 1];
                        (*VAR2)->VAR11[VAR12 ^ 1] = VAR7;
                        (*VAR2)->VAR11[0]->VAR14 = -((*VAR2)->VAR14 > 0);
                        (*VAR2)->VAR11[1]->VAR14 = (*VAR2)->VAR14 < 0;
                        (*VAR2)->VAR14 = 0;
                    }
                    else
                    {
                        *VAR2 = *VAR11;
                        *VAR11 = (*VAR11)->VAR11[VAR12 ^ 1];
                        (*VAR2)->VAR11[VAR12 ^ 1] = VAR7;
                        if ((*VAR2)->VAR14)
                            VAR7->VAR14 = 0;
                        else
                            VAR7->VAR14 >>= 1;
                        (*VAR2)->VAR14 = -VAR7->VAR14;
                    }
                }
            }
            if (!(*VAR2)->VAR14 ^ !!*VAR6)
                return VAR3;
        }
        return VAR10;
    }
    else
    {
        *VAR2 = *VAR6;
        *VAR6 = NULL;
        (*VAR2)->VAR9 = VAR3;
        return NULL;
    }
}