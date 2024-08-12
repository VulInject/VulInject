#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100];
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    VAR4 = VAR5 - 8;
    {
        char VAR6[100*2];
        memset(VAR6, '', 100*2-1); 
        VAR6[100*2-1] = ''; 
        strcpy(VAR6, VAR4);
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}