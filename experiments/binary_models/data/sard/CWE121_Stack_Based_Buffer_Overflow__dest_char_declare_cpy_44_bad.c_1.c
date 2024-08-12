#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        strcpy(VAR4, VAR5);
        FUN2(VAR4);
    }
}
void FUN3()
{
    char * VAR4;
    void (*VAR6) (char *) = VAR7;
    char VAR8[50];
    char VAR9[100];
    VAR4 = VAR8;
    VAR4[0] = ''; 
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}