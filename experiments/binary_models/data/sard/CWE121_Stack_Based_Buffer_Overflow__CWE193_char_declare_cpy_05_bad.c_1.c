#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    char VAR8[10];
    char VAR9[10+1];
    if(VAR5)
    {
        VAR7 = VAR8;
        VAR7[0] = ''; 
    }
    {
        char VAR10[10+1] = VAR4;
        strcpy(VAR7, VAR10);
        FUN2(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}