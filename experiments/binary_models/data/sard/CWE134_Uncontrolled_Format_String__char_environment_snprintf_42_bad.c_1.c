#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
char * FUN1(char * VAR5)
{
    {
        size_t VAR6 = strlen(VAR5);
        char * VAR7 = FUN2(VAR4);
        if (VAR7 != NULL)
        {
            strncat(VAR5+VAR6, VAR7, 100-VAR6-1);
        }
    }
    return VAR5;
}
void FUN3()
{
    char * VAR5;
    char VAR8[100] = "";
    VAR5 = VAR8;
    VAR5 = FUN1(VAR5);
    {
        char VAR9[100] = "";
        FUN4(VAR9, 100-1, VAR5);
        FUN5(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}