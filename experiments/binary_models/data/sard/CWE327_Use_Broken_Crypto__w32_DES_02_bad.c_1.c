#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#pragma FUN1 (VAR5, "")
void FUN2()
{
    if(1)
    {
        {
            VAR6 *VAR7;
            HCRYPTPROV VAR8;
            HCRYPTKEY VAR9;
            HCRYPTHASH VAR10;
            char VAR11[100];
            size_t VAR12;
            char VAR13[100];
            DWORD VAR14 = sizeof(VAR13)-1;
            if (fgets(VAR11, 100, stdin) == NULL)
            {
                VAR11[0] = '';
            }
            VAR12 = strlen(VAR11);
            if (VAR12 > 0)
            {
                VAR11[VAR12-1] = '';
            }
            VAR7 = fopen("", "");
            if (VAR7 == NULL)
            {
                FUN3(1);
            }
            if (fread(VAR13, sizeof(char), 100, VAR7) != 100)
            {
                fclose(VAR7);
                FUN3(1);
            }
            VAR13[99] = '';
            if(!FUN4(&VAR8, NULL, VAR15, VAR16, 0))
            {
                if(!FUN4(&VAR8, NULL, VAR15, VAR16, VAR17))
                {
                    FUN3(1);
                }
            }
            if(!FUN5(VAR8, VAR18, 0, 0, &VAR10))
            {
                FUN3(1);
            }
            if(!FUN6(VAR10, (VAR19 *) VAR11, VAR12, 0))
            {
                FUN3(1);
            }
            if(!FUN7(VAR8, VAR20, VAR10, 0, &VAR9))
            {
                FUN3(1);
            }
            if(!FUN8(VAR9, 0, 1, 0, (VAR19 *)VAR13, &VAR14))
            {
                FUN3(1);
            }
            VAR13[VAR14] = '';
            FUN9(VAR13);
            if (VAR9)
            {
                FUN10(VAR9);
            }
            if (VAR10)
            {
                FUN11(VAR10);
            }
            if (VAR8)
            {
                FUN12(VAR8, 0);
            }
            if (VAR7)
            {
                fclose(VAR7);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN13(NULL) );
    FUN2();
    return 0;
}