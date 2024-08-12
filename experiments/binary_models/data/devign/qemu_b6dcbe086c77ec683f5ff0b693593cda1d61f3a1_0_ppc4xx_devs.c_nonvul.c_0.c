static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        if (VAR2->VAR5[VAR3] != 0)
        {
            FUN2(VAR2, &VAR2->VAR6[VAR3], FUN3(VAR2->VAR7[VAR3], VAR2->VAR5[VAR3]), 1);
        }
        else
        {
            FUN2(VAR2, &VAR2->VAR6[VAR3], 0x00000000, 0);
        }
    }
}