#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
static const int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        {
            size_t VAR8 = strlen(VAR6);
            char * VAR9 = FUN2(VAR4);
            if (VAR9 != NULL)
            {
                strncat(VAR6+VAR8, VAR9, 100-VAR8-1);
            }
        }
    }
    if(VAR5==5)
    {
        {
            int VAR10, VAR11, VAR12;
            if (sscanf(VAR6, "", &VAR11) == 1)
            {
                VAR12 = 0;
                for (VAR10 = 0; VAR10 < VAR11; VAR10++)
                {
                    VAR12++; 
                }
                FUN3(VAR12);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}