static int FUN1(VAR1 *VAR2)
{
    while (VAR2->VAR3 < VAR2->VAR4)
    {
        int VAR5 = FUN2(&VAR2->VAR3);
        FUN3(VAR2->VAR6, "", VAR5, VAR5);
        switch (VAR5)
        {
        case '':
            if (FUN4(VAR2) < 0)
                return -1;
            return 0;
        case '':
            return -1;
        case '':
            if (FUN5(VAR2) < 0)
                return -1;
            break;
        default:
            return -1;
        }
    }
}