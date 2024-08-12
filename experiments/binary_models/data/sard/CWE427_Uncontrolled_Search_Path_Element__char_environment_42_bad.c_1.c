#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define GETENV getenv
#define GETENV getenv
char * FUN1(char * VAR8)
{
    {
        size_t VAR9 = strlen(VAR8);
        char * VAR10 = FUN2(VAR7);
        if (VAR10 != NULL)
        {
            strncat(VAR8+VAR9, VAR10, 250-VAR9-1);
        }
    }
    return VAR8;
}
void FUN3()
{
    char * VAR8;
    char VAR11[250] = "";
    VAR8 = VAR11;
    VAR8 = FUN1(VAR8);
    FUN4(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}