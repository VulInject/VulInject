#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char * VAR7 = (char *)FUN2(100*sizeof(char));
    memset(VAR7, '', 100-1);
    VAR7[100-1] = '';
    if(VAR4)
    {
        VAR6 = VAR7 - 8;
    }
    {
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        strncpy(VAR8, VAR6, strlen(VAR8));
        VAR8[100-1] = '';
        FUN3(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}