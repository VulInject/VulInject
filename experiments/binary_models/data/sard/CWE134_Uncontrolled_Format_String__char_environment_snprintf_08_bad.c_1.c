#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    if(FUN1())
    {
        {
            size_t VAR7 = strlen(VAR5);
            char * VAR8 = FUN4(VAR4);
            if (VAR8 != NULL)
            {
                strncat(VAR5+VAR7, VAR8, 100-VAR7-1);
            }
        }
    }
    if(FUN1())
    {
        {
            char VAR9[100] = "";
            FUN5(VAR9, 100-1, VAR5);
            FUN6(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN3();
    return 0;
}