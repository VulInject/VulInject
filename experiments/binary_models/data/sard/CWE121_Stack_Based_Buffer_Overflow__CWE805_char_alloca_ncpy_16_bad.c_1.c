#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(50*sizeof(char));
    char * VAR6 = (char *)FUN2(100*sizeof(char));
    while(1)
    {
        VAR4 = VAR5;
        VAR4[0] = ''; 
        break;
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        strncpy(VAR4, VAR7, 100-1);
        VAR4[100-1] = ''; 
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}