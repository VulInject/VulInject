FUN1(int VAR1, abi_long VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        if (VAR5[VAR3].VAR6 == VAR1)
        {
            if (VAR5[VAR3].VAR7 != NULL)
            {
                VAR5[VAR3].FUN2(&VAR5[VAR3], VAR2);
            }
            else
            {
                if (VAR2 < 0)
                {
                    FUN3("" VAR8 "", -VAR2, FUN4(-VAR2));
                }
                else
                {
                    FUN3("" VAR8 "", VAR2);
                }
            }
            break;
        }
}