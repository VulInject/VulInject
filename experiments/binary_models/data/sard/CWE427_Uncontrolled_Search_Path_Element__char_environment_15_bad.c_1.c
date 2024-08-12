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
    switch(6)
    {
    case 6:
    {
        size_t VAR10 = strlen(VAR8);
        char * VAR11 = FUN2(VAR7);
        if (VAR11 != NULL)
        {
            strncat(VAR8+VAR10, VAR11, 250-VAR10-1);
        }
    }
    break;
    default:
        break;
    }
    FUN3(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}