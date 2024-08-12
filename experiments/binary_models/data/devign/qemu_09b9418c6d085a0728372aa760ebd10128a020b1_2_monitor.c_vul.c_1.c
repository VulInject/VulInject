static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    const VAR4 *VAR5;
    void *VAR6;
    for (VAR5 = VAR7; VAR5->VAR3 != NULL; VAR5++)
    {
        if (FUN2(VAR3, VAR5->VAR3))
        {
            if (VAR5->VAR8)
            {
                *VAR2 = VAR5->FUN3(VAR5, VAR5->VAR9);
            }
            else
            {
                VAR10 *VAR11 = FUN4();
                if (!VAR11)
                    return -2;
                VAR6 = (VAR12 *)VAR11 + VAR5->VAR9;
                switch (VAR5->VAR13)
                {
                case VAR14:
                    *VAR2 = *(VAR15 *)VAR6;
                    break;
                case VAR16:
                    *VAR2 = *(VAR1 *)VAR6;
                    break;
                default:
                    *VAR2 = 0;
                    break;
                }
            }
            return 0;
        }
    }
    return -1;
}