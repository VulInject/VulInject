#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char VAR7[50];
    char VAR8[100];
    if(VAR4)
    {
        VAR6 = VAR7;
        VAR6[0] = ''; 
    }
    {
        char VAR9[100];
        memset(VAR9, '', 100-1); 
        VAR9[100-1] = ''; 
        strcat(VAR6, VAR9);
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}