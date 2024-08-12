static void FUN1(void *VAR1)
{
    int VAR2;
    for (VAR2 = 0; VAR2 < VAR3; VAR2++)
    {
        if (VAR4[VAR2] & 0x80)
        {
            FUN2(0xe0);
        }
        FUN2(VAR4[VAR2] | 0x80);
    }
    FUN3();
}