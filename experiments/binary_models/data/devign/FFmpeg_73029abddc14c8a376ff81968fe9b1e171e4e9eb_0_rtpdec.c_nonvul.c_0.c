static int FUN1(VAR1 *VAR2, const unsigned char *VAR3, int VAR4)
{
    int VAR5;
    while (VAR4 >= 4)
    {
        VAR5 = FUN2(VAR4, (FUN3(VAR3 + 2) + 1) * 4);
        switch (VAR3[1])
        {
        case VAR6:
            if (VAR5 < 20)
            {
                FUN4(NULL, VAR7, "");
                return VAR8;
            }
            VAR2->VAR9 = FUN5();
            VAR2->VAR10 = FUN6(VAR3 + 8);
            VAR2->VAR11 = FUN7(VAR3 + 16);
            if (VAR2->VAR12 == VAR13)
            {
                VAR2->VAR12 = VAR2->VAR10;
                if (!VAR2->VAR14)
                    VAR2->VAR14 = VAR2->VAR11;
                VAR2->VAR15 = (VAR16)(VAR2->VAR11 - VAR2->VAR14);
            }
            break;
        case VAR17:
            return -VAR17;
        }
        VAR3 += VAR5;
        VAR4 -= VAR5;
    }
    return -1;
}