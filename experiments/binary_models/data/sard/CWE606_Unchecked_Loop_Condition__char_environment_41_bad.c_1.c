#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR5)
{
    {
        int VAR6, VAR7, VAR8;
        if (sscanf(VAR5, "", &VAR7) == 1)
        {
            VAR8 = 0;
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR8++; 
            }
            FUN2(VAR8);
        }
    }
}
void FUN3()
{
    char * VAR5;
    char VAR9[100] = "";
    VAR5 = VAR9;
    {
        size_t VAR10 = strlen(VAR5);
        char * VAR11 = FUN4(VAR4);
        if (VAR11 != NULL)
        {
            strncat(VAR5+VAR10, VAR11, 100-VAR10-1);
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}