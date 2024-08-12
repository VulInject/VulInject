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
    char VAR6[100] = "";
    VAR5 = VAR6;
    if(FUN2())
    {
        {
            size_t VAR7 = strlen(VAR5);
            char * VAR8 = FUN3(VAR4);
            if (VAR8 != NULL)
            {
                strncat(VAR5+VAR7, VAR8, 100-VAR7-1);
            }
        }
    }
    if(FUN2())
    {
        {
            char VAR9[100] = "";
            FUN4(VAR9, 100-1, VAR5);
            FUN5(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}