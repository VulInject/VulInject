#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#pragma FUN1 (VAR5, "")
void FUN2()
{
    if(VAR6)
    {
        {
            VAR7 *VAR8;
            HCRYPTPROV VAR9;
            HCRYPTKEY VAR10;
            HCRYPTHASH VAR11;
            char VAR12[100];
            size_t VAR13;
            char VAR14[100];
            DWORD VAR15 = sizeof(VAR14)-1;
            if (fgets(VAR12, 100, stdin) == NULL)
            {
                VAR12[0] = '';
            }
            VAR13 = strlen(VAR12);
            if (VAR13 > 0)
            {
                VAR12[VAR13-1] = '';
            }
            VAR8 = fopen("", "");
            if (VAR8 == NULL)
            {
                FUN3(1);
            }
            if (fread(VAR14, sizeof(char), 100, VAR8) != 100)
            {
                fclose(VAR8);
                FUN3(1);
            }
            VAR14[99] = '';
            if(!FUN4(&VAR9, NULL, VAR16, VAR17, 0))
            {
                if(!FUN4(&VAR9, NULL, VAR16, VAR17, VAR18))
                {
                    FUN3(1);
                }
            }
            if(!FUN5(VAR9, VAR19, 0, 0, &VAR11))
            {
                FUN3(1);
            }
            if(!FUN6(VAR11, (VAR20 *) VAR12, VAR13, 0))
            {
                FUN3(1);
            }
            if(!FUN7(VAR9, VAR21, VAR11, 0, &VAR10))
            {
                FUN3(1);
            }
            if(!FUN8(VAR10, 0, 1, 0, (VAR20 *)VAR14, &VAR15))
            {
                FUN3(1);
            }
            VAR14[VAR15] = '';
            FUN9(VAR14);
            if (VAR10)
            {
                FUN10(VAR10);
            }
            if (VAR11)
            {
                FUN11(VAR11);
            }
            if (VAR9)
            {
                FUN12(VAR9, 0);
            }
            if (VAR8)
            {
                fclose(VAR8);
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