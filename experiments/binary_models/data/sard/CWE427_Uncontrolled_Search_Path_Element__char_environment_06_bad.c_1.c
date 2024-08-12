#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define GETENV getenv
#define GETENV getenv
static const int VAR8 = 5;
void FUN1()
{
    char * VAR9;
    char VAR10[250] = "";
    VAR9 = VAR10;
    if(VAR8==5)
    {
        {
            size_t VAR11 = strlen(VAR9);
            char * VAR12 = FUN2(VAR7);
            if (VAR12 != NULL)
            {
                strncat(VAR9+VAR11, VAR12, 250-VAR11-1);
            }
        }
    }
    FUN3(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}