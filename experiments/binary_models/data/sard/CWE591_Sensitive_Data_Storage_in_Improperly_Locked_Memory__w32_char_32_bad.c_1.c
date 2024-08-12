#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    char * VAR7;
    char * *VAR8 = &VAR7;
    char * *VAR9 = &VAR7;
    VAR7 = "";
    {
        char * VAR7 = *VAR8;
        VAR7 = (char *)malloc(100*sizeof(char));
        if (VAR7 == NULL)
        {
            FUN3(1);
        }
        strcpy(VAR7, "");
        *VAR8 = VAR7;
    }
    {
        char * VAR7 = *VAR9;
        {
            HANDLE VAR10;
            char * VAR11 = "";
            char * VAR12 = "";
            if (FUN4(
                        VAR11,
                        VAR12,
                        VAR7,
                        VAR13,
                        VAR14,
                        &VAR10) != 0)
            {
                FUN5(VAR10);
            }
            else
            {
            }
            free(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}