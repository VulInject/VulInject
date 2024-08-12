static int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3->VAR4)
    {
        MPEG4AudioConfig VAR5;
        int VAR6 = FUN2(&VAR5, VAR2->VAR3->VAR4, VAR2->VAR3->VAR7 * 8, 1);
        if (VAR6 < 0)
        {
            FUN3(VAR2, VAR8, "");
            return VAR6;
        }
    }
    return 0;
}