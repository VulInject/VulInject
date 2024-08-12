#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR4;
    char * VAR5 = (char *)FUN4(50*sizeof(char));
    char * VAR6 = (char *)FUN4(100*sizeof(char));
    if(FUN1())
    {
        VAR4 = VAR5;
        VAR4[0] = ''; 
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        strcpy(VAR4, VAR7);
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}