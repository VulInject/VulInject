#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
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
        int VAR9, VAR10, VAR11;
        if (sscanf(VAR5, "", &VAR10) == 1)
        {
            VAR11 = 0;
            for (VAR9 = 0; VAR9 < VAR10; VAR9++)
            {
                VAR11++; 
            }
            FUN4(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}