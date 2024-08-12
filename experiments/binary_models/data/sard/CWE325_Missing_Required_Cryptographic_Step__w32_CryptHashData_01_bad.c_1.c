#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define VAR7 "" 
#define VAR8 ""
void FUN2()
{
    {
        BYTE VAR9[100];
        DWORD VAR10 = strlen(VAR8);
        HCRYPTPROV VAR11 = (VAR12)NULL;
        HCRYPTHASH VAR13 = (VAR14)NULL;
        HCRYPTKEY VAR15 = (VAR16)NULL;
        char VAR17[100] = VAR7;
        do
        {
            memcpy(VAR9, VAR8, VAR10);
            if(!FUN3(&VAR11, NULL, VAR18, VAR19, 0))
            {
                break;
            }
            if(!FUN4(VAR11, VAR20, 0, 0, &VAR13))
            {
                break;
            }
            if(!FUN5(VAR11, VAR21, VAR13, 0, &VAR15))
            {
                break;
            }
            if(!FUN6(VAR15, 0, 1, 0, VAR9, &VAR10, sizeof(VAR9)))
            {
                break;
            }
        }
        while (0);
        if (VAR15)
        {
            FUN7(VAR15);
        }
        if (VAR13)
        {
            FUN8(VAR13);
        }
        if (VAR11)
        {
            FUN9(VAR11, 0);
        }
        FUN10(VAR9, VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN11(NULL) );
    FUN2();
    return 0;
}