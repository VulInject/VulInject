#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char VAR6[100];
    memset(VAR6, '', 100-1);
    VAR6[100-1] = '';
    if(VAR4==5)
    {
        VAR5 = VAR6 - 8;
    }
    {
        char VAR7[100*2];
        memset(VAR7, '', 100*2-1); 
        VAR7[100*2-1] = ''; 
        strcpy(VAR7, VAR5);
        FUN2(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}