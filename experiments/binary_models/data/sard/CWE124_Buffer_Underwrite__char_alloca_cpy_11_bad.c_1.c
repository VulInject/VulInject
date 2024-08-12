#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    if(FUN3())
    {
        VAR4 = VAR5 - 8;
    }
    {
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        strcpy(VAR4, VAR6);
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}