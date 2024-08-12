#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR5;
    char * *VAR6 = &VAR5;
    char * *VAR7 = &VAR5;
    char VAR8[100] = "";
    VAR5 = VAR8;
    {
        char * VAR5 = *VAR6;
        {
            size_t VAR9 = strlen(VAR5);
            char * VAR10 = FUN2(VAR4);
            if (VAR10 != NULL)
            {
                strncat(VAR5+VAR9, VAR10, 100-VAR9-1);
            }
        }
        *VAR6 = VAR5;
    }
    {
        char * VAR5 = *VAR7;
        {
            char VAR11[100] = "";
            FUN3(VAR11, 100-1, VAR5);
            FUN4(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}