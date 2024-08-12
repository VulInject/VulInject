#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR5)
{
    fprintf(VAR6, VAR5);
}
void FUN2()
{
    char * VAR5;
    char VAR7[100] = "";
    VAR5 = VAR7;
    {
        size_t VAR8 = strlen(VAR5);
        char * VAR9 = FUN3(VAR4);
        if (VAR9 != NULL)
        {
            strncat(VAR5+VAR8, VAR9, 100-VAR8-1);
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}