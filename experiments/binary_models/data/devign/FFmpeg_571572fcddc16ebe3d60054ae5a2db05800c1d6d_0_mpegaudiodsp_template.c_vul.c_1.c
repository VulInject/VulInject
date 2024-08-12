void FUN1(VAR1)(void)
{
    int VAR2, VAR3;
    for (VAR2 = 0; VAR2 < 36; VAR2++)
    {
        for (VAR3 = 0; VAR3 < 4; VAR3++)
        {
            double VAR4;
            if (VAR3 == 2 && VAR2 % 3 != 1)
                continue;
            VAR4 = FUN2(VAR5 * (VAR2 + 0.5) / 36.0);
            if (VAR3 == 1)
            {
                if (VAR2 >= 30)
                    VAR4 = 0;
                else if (VAR2 >= 24)
                    VAR4 = FUN2(VAR5 * (VAR2 - 18 + 0.5) / 12.0);
                else if (VAR2 >= 18)
                    VAR4 = 1;
            }
            else if (VAR3 == 3)
            {
                if (VAR2 < 6)
                    VAR4 = 0;
                else if (VAR2 < 12)
                    VAR4 = FUN2(VAR5 * (VAR2 - 6 + 0.5) / 12.0);
                else if (VAR2 < 18)
                    VAR4 = 1;
            }
            VAR4 *= 0.5 / FUN3(VAR5 * (2 * VAR2 + 19) / 72);
            if (VAR3 == 2)
                FUN1(VAR6)
                [VAR3][VAR2 / 3] = FUN4((VAR4 / (1 << 5)));
            else
            {
                int VAR7 = VAR2 < 18 ? VAR2 : VAR2 + (VAR8 / 2 - 18);
                FUN1(VAR6)
                [VAR3][VAR7] = FUN4((VAR4 / (1 << 5)));
            }
        }
    }
    for (VAR3 = 0; VAR3 < 4; VAR3++)
    {
        for (VAR2 = 0; VAR2 < VAR8; VAR2 += 2)
        {
            FUN1(VAR6)
            [VAR3 + 4][VAR2] = FUN1(VAR6)[VAR3][VAR2];
            FUN1(VAR6)
            [VAR3 + 4][VAR2 + 1] = -FUN1(VAR6)[VAR3][VAR2 + 1];
        }
    }
}