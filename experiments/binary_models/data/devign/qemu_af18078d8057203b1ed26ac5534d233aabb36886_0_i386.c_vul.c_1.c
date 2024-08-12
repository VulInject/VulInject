FUN1(char *VAR1, size_t VAR2, int VAR3, bfd_vma VAR4)
{
    if (VAR5 == VAR6)
    {
        if (VAR3)
        {
            char VAR7[30];
            int VAR8;
            VAR1[0] = '';
            VAR1[1] = '';
            FUN2(VAR7, sizeof(VAR7), VAR4);
            for (VAR8 = 0; VAR7[VAR8] == '' && VAR7[VAR8 + 1]; VAR8++)
                ;
            FUN3(VAR1 + 2, VAR2 - 2, VAR7 + VAR8);
        }
        else
        {
            bfd_signed_vma VAR9 = VAR4;
            char VAR7[30];
            int VAR8;
            if (VAR9 < 0)
            {
                *(VAR1++) = '';
                VAR9 = -VAR4;
                if (VAR9 < 0)
                {
                    FUN3(VAR1, VAR2, "");
                    return;
                }
            }
            if (!VAR9)
            {
                FUN3(VAR1, VAR2, "");
                return;
            }
            VAR8 = 0;
            VAR7[29] = 0;
            while (VAR9)
            {
                VAR7[28 - VAR8] = (VAR9 % 10) + '';
                VAR9 /= 10;
                VAR8++;
            }
            FUN3(VAR1, VAR2, VAR7 + 29 - VAR8);
        }
    }
    else
    {
        if (VAR3)
            snprintf(VAR1, VAR2, "", (unsigned int)VAR4);
        else
            snprintf(VAR1, VAR2, "", (int)VAR4);
    }
}