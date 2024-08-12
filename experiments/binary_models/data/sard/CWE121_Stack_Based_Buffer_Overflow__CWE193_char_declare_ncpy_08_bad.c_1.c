#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
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
    char * VAR5;
    char VAR6[10];
    char VAR7[10+1];
    if(FUN1())
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR8[10+1] = VAR4;
        strncpy(VAR5, VAR8, strlen(VAR8) + 1);
        FUN4(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}