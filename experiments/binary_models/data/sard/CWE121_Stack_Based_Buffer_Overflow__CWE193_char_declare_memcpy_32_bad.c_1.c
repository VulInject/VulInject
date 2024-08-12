#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char * *VAR6 = &VAR5;
    char * *VAR7 = &VAR5;
    char VAR8[10];
    char VAR9[10+1];
    {
        char * VAR5 = *VAR6;
        VAR5 = VAR8;
        VAR5[0] = ''; 
        *VAR6 = VAR5;
    }
    {
        char * VAR5 = *VAR7;
        {
            char VAR10[10+1] = VAR4;
            memcpy(VAR5, VAR10, (strlen(VAR10) + 1) * sizeof(char));
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}