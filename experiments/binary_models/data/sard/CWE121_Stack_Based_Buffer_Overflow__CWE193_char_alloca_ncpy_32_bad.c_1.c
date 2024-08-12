#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char * *VAR6 = &VAR5;
    char * *VAR7 = &VAR5;
    char * VAR8 = (char *)FUN2((10)*sizeof(char));
    char * VAR9 = (char *)FUN2((10+1)*sizeof(char));
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
            strncpy(VAR5, VAR10, strlen(VAR10) + 1);
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}