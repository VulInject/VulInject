#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define GETENV getenv
#define GETENV getenv
void FUN1()
{
    char * VAR8;
    char VAR9[250] = "";
    VAR8 = VAR9;
    if(VAR10==5)
    {
        {
            size_t VAR11 = strlen(VAR8);
            char * VAR12 = FUN2(VAR7);
            if (VAR12 != NULL)
            {
                strncat(VAR8+VAR11, VAR12, 250-VAR11-1);
            }
        }
    }
    FUN3(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}