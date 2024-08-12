#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    char VAR7[10];
    char VAR8[10+1];
    if(VAR5==5)
    {
        VAR6 = VAR7;
        VAR6[0] = ''; 
    }
    {
        char VAR9[10+1] = VAR4;
        strcpy(VAR6, VAR9);
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}