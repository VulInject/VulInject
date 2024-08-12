void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4, VAR5;
    for (VAR4 = 0; VAR4 < VAR2->VAR6; VAR4++)
    {
        VAR7 *VAR8 = &VAR3->VAR9[VAR4];
        VAR8->VAR10[0] = 128;
        VAR8->VAR10[1] = 128;
        if (VAR3->VAR11 != VAR12)
        {
            if (VAR2->VAR13[VAR8->VAR14])
            {
                memcpy(VAR8->VAR15, VAR2->VAR13[VAR8->VAR14], VAR16 * VAR8->VAR17);
            }
            else
                memset(VAR8->VAR15, 128, VAR16 * VAR8->VAR17);
        }
        else
        {
            for (VAR5 = 0; VAR5 < VAR8->VAR17; VAR5++)
            {
                VAR8->VAR18[VAR5].VAR19 = 0;
                VAR8->VAR18[VAR5].VAR20 = 4;
                VAR8->VAR18[VAR5].VAR21 = 0;
                VAR8->VAR18[VAR5].VAR22 = 1;
            }
        }
    }
}