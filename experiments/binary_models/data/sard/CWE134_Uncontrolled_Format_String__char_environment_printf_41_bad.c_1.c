#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR5)
{
    FUN2(VAR5);
}
void FUN3()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    {
        size_t VAR7 = strlen(VAR5);
        char * VAR8 = FUN4(VAR4);
        if (VAR8 != NULL)
        {
            strncat(VAR5+VAR7, VAR8, 100-VAR7-1);
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}