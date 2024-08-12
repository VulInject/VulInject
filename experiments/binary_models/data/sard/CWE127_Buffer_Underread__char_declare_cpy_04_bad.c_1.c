#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char VAR7[100];
    memset(VAR7, '', 100-1);
    VAR7[100-1] = '';
    if(VAR4)
    {
        VAR6 = VAR7 - 8;
    }
    {
        char VAR8[100*2];
        memset(VAR8, '', 100*2-1); 
        VAR8[100*2-1] = ''; 
        strcpy(VAR8, VAR6);
        FUN2(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}