#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char * VAR6 = (char *)FUN2(50*sizeof(char));
    char * VAR7 = (char *)FUN2(100*sizeof(char));
    if(VAR4==5)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        memmove(VAR5, VAR8, 100*sizeof(char));
        VAR5[100-1] = ''; 
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}