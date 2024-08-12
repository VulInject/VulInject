#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    {
        size_t VAR7 = strlen(VAR5);
        char * VAR8 = FUN2(VAR4);
        if (VAR8 != NULL)
        {
            strncat(VAR5+VAR7, VAR8, 100-VAR7-1);
        }
    }
    {
        int VAR9, VAR10, VAR11;
        if (sscanf(VAR5, "", &VAR10) == 1)
        {
            VAR11 = 0;
            for (VAR9 = 0; VAR9 < VAR10; VAR9++)
            {
                VAR11++; 
            }
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}