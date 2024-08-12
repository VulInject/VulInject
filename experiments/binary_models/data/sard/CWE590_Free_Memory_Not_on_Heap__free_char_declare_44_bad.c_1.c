#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    FUN2(VAR4);
    free(VAR4);
}
void FUN3()
{
    char * VAR4;
    void (*VAR5) (char *) = VAR6;
    VAR4 = NULL; 
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        VAR4 = VAR7;
    }
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}