#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char VAR6[10];
    char VAR7[10+1];
    if(1)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR8[10+1] = VAR4;
        strncpy(VAR5, VAR8, strlen(VAR8) + 1);
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}