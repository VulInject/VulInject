#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR8)
{
    FUN2(VAR8);
}
void FUN3()
{
    char * VAR8;
    void (*VAR9) (char *) = VAR10;
    char VAR11[250] = "";
    VAR8 = VAR11;
    {
        size_t VAR12 = strlen(VAR8);
        char * VAR13 = FUN4(VAR7);
        if (VAR13 != NULL)
        {
            strncat(VAR8+VAR12, VAR13, 250-VAR12-1);
        }
    }
    FUN5(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}