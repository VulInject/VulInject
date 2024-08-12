static struct VAR1 *FUN1(int VAR2, abi_ulong VAR3, int VAR4, int copy)
{
    struct VAR5 *VAR6;
    struct VAR1 *VAR7;
    abi_ulong VAR8, VAR9;
    int VAR10;
    int VAR11 = 0;
    bool VAR12 = false;
    if (VAR4 == 0)
    {
        VAR13 = 0;
        return NULL;
        if (VAR4 < 0 || VAR4 > VAR14)
        {
            VAR13 = VAR15;
            return NULL;
            VAR7 = calloc(VAR4, sizeof(struct VAR1));
            if (VAR7 == NULL)
            {
                VAR13 = VAR16;
                return NULL;
                VAR6 = FUN2(VAR17, VAR3, VAR4 * sizeof(struct VAR5), 1);
                if (VAR6 == NULL)
                {
                    VAR11 = VAR18;
                    goto VAR19;
                    VAR9 = 0x7fffffff & VAR20;
                    VAR8 = 0;
                    for (VAR10 = 0; VAR10 < VAR4; VAR10++)
                    {
                        abi_ulong VAR21 = FUN3(VAR6[VAR10].VAR22);
                        abi_long VAR23 = FUN3(VAR6[VAR10].VAR24);
                        if (VAR23 < 0)
                        {
                            VAR11 = VAR15;
                            goto VAR25;
                        }
                        else if (VAR23 == 0)
                        {
                            VAR7[VAR10].VAR22 = 0;
                        }
                        else
                        {
                            VAR7[VAR10].VAR22 = FUN2(VAR2, VAR21, VAR23, copy);
                            if (!VAR7[VAR10].VAR22)
                            {
                                if (VAR10 == 0)
                                {
                                    VAR11 = VAR18;
                                    goto VAR25;
                                }
                                else
                                {
                                    VAR12 = true;
                                    if (VAR12)
                                    {
                                        VAR23 = 0;
                                        if (VAR23 > VAR9 - VAR8)
                                        {
                                            VAR23 = VAR9 - VAR8;
                                            VAR7[VAR10].VAR24 = VAR23;
                                            VAR8 += VAR23;
                                            FUN4(VAR6, VAR3, 0);
                                            return VAR7;
                                        VAR25:
                                            FUN4(VAR6, VAR3, 0);
                                        VAR19:
                                            free(VAR7);
                                            VAR13 = VAR11;
                                            return NULL;