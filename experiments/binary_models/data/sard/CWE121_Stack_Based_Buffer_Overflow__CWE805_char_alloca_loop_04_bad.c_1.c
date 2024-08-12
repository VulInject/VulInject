#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char * VAR7 = (char *)FUN2(50*sizeof(char));
    char * VAR8 = (char *)FUN2(100*sizeof(char));
    if(VAR4)
    {
        VAR6 = VAR7;
        VAR6[0] = ''; 
    }
    {
        size_t VAR9;
        char VAR10[100];
        memset(VAR10, '', 100-1); 
        VAR10[100-1] = ''; 
        for (VAR9 = 0; VAR9 < 100; VAR9++)
        {
            VAR6[VAR9] = VAR10[VAR9];
        }
        VAR6[100-1] = ''; 
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}