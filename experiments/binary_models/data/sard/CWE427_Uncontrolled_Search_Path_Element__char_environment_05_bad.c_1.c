#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define GETENV getenv
#define GETENV getenv
int VAR8 = 1; 
int VAR9 = 0; 
void FUN1()
{
    char * VAR10;
    char VAR11[250] = "";
    VAR10 = VAR11;
    if(VAR8)
    {
        {
            size_t VAR12 = strlen(VAR10);
            char * VAR13 = FUN2(VAR7);
            if (VAR13 != NULL)
            {
                strncat(VAR10+VAR12, VAR13, 250-VAR12-1);
            }
        }
    }
    FUN3(VAR10);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}