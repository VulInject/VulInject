#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1(char * VAR5)
{
    {
        char VAR6[10+1] = VAR4;
        memmove(VAR5, VAR6, (strlen(VAR6) + 1) * sizeof(char));
        FUN2(VAR5);
    }
}
void FUN3()
{
    char * VAR5;
    char VAR7[10];
    char VAR8[10+1];
    VAR5 = VAR7;
    VAR5[0] = ''; 
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}