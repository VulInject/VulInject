static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR10 *const VAR11 = &VAR2->VAR11;
    int VAR12 = 1;
    VAR4 -= VAR7;
    VAR5 -= VAR8;
    VAR6 -= VAR8;
    if (!VAR9 && VAR13)
    {
        if (VAR11->VAR14 & 1)
        {
            if (!VAR15)
            {
                *(VAR16 *)(VAR2->VAR17[0][VAR11->VAR18] + 0) = *(VAR16 *)(VAR4 + 15 * VAR7);
                *(VAR16 *)(VAR2->VAR17[0][VAR11->VAR18] + 8) = *(VAR16 *)(VAR4 + 8 + 15 * VAR7);
                if (VAR9 || !VAR19 || !(VAR11->VAR20 & VAR21))
                {
                    *(VAR16 *)(VAR2->VAR17[0][VAR11->VAR18] + 16) = *(VAR16 *)(VAR5 + 7 * VAR8);
                    *(VAR16 *)(VAR2->VAR17[0][VAR11->VAR18] + 24) = *(VAR16 *)(VAR6 + 7 * VAR8);
                }
            }
        }
        else if (VAR15)
        {
            VAR12 = 0;
        }
        else
            return;
    }
    *(VAR16 *)(VAR2->VAR17[VAR12][VAR11->VAR18] + 0) = *(VAR16 *)(VAR4 + 16 * VAR7);
    *(VAR16 *)(VAR2->VAR17[VAR12][VAR11->VAR18] + 8) = *(VAR16 *)(VAR4 + 8 + 16 * VAR7);
    if (VAR9 || !VAR19 || !(VAR11->VAR20 & VAR21))
    {
        *(VAR16 *)(VAR2->VAR17[VAR12][VAR11->VAR18] + 16) = *(VAR16 *)(VAR5 + 8 * VAR8);
        *(VAR16 *)(VAR2->VAR17[VAR12][VAR11->VAR18] + 24) = *(VAR16 *)(VAR6 + 8 * VAR8);
    }
}