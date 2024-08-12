#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char * VAR6 = (char *)FUN2(50*sizeof(char));
    char * VAR7 = (char *)FUN2(100*sizeof(char));
    memset(VAR6, '', 50-1); 
    VAR6[50-1] = ''; 
    memset(VAR7, '', 100-1); 
    VAR7[100-1] = ''; 
    if(VAR4==5)
    {
        VAR5 = VAR6;
    }
    {
        char VAR8[100];
        memset(VAR8, '', 100-1);
        VAR8[100-1] = ''; 
        memcpy(VAR8, VAR5, strlen(VAR8)*sizeof(char));
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