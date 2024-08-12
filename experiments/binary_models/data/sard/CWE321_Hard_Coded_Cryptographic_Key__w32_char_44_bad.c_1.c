#VAR1 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#pragma FUN1 (VAR6, "")
void FUN2(char * VAR7)
{
    {
        HCRYPTPROV VAR8;
        HCRYPTKEY VAR9;
        HCRYPTHASH VAR10;
        char VAR11[] = "";
        DWORD VAR12 = strlen(VAR11)*sizeof(char);
        BYTE VAR13[200];    
        memcpy(VAR13, VAR11, VAR12);
        if(!FUN3(&VAR8, NULL, VAR14, VAR15, 0))
        {
            if(!FUN3(&VAR8, NULL, VAR14, VAR15, VAR16))
            {
                FUN4(1);
            }
        }
        if(!FUN5(VAR8, VAR17, 0, 0, &VAR10))
        {
            FUN4(1);
        }
        if(!FUN6(VAR10, (VAR18 *) VAR7, strlen(VAR7)*sizeof(char), 0))
        {
            FUN4(1);
        }
        if(!FUN7(VAR8, VAR19, VAR10, 0, &VAR9))
        {
            FUN4(1);
        }
        if(!FUN8(VAR9, (VAR20)NULL, 1, 0, VAR13, &VAR12, sizeof(VAR13)))
        {
            FUN4(1);
        }
        FUN9(VAR13, VAR12);
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
    }
}
void FUN13()
{
    char * VAR7;
    void (*VAR21) (char *) = VAR22;
    char VAR23[100] = "";
    VAR7 = VAR23;
    strcpy(VAR7, VAR2);
    FUN14(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN15(NULL) );
    FUN13();
    return 0;
}