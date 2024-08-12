static int FUN1(VAR1 *VAR2, const unsigned char *VAR3, int VAR4)
{
    int VAR5;
    while (VAR4 >= 2)
    {
        switch (VAR3[1])
        {
        case VAR6:
            if (VAR4 < 16)
            {
                FUN2(NULL, VAR7, "");
                return VAR8;
            }
            VAR5 = (FUN3(VAR3 + 2) + 1) * 4;
            VAR2->VAR9 = FUN4(VAR3 + 8);
            VAR2->VAR10 = FUN5(VAR3 + 16);
            if (VAR2->VAR11 == VAR12)
            {
                VAR2->VAR11 = VAR2->VAR9;
                if (!VAR2->VAR13)
                    VAR2->VAR13 = VAR2->VAR10;
                VAR2->VAR14 = VAR2->VAR10 - VAR2->VAR13;
            }
            VAR3 += VAR5;
            VAR4 -= VAR5;
            break;
        case VAR15:
            return -VAR15;
        default:
            return -1;
        }
    }
    return -1;
}