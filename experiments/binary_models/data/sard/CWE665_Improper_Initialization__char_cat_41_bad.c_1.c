#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        strcat(VAR4, VAR5);
        FUN2(VAR4);
    }
}
void FUN3()
{
    char * VAR4;
    char VAR6[100];
    VAR4 = VAR6;
    ; 
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}