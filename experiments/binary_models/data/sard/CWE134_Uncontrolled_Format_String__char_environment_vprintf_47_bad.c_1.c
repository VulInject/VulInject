#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5(char * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3("", VAR7);
        FUN4(VAR7);
    }
}
void FUN6()
{
    char * VAR6;
    char VAR8[100] = "";
    VAR6 = VAR8;
    if(FUN7())
    {
        {
            size_t VAR9 = strlen(VAR6);
            char * VAR10 = FUN8(VAR5);
            if (VAR10 != NULL)
            {
                strncat(VAR6+VAR9, VAR10, 100-VAR9-1);
            }
        }
    }
    else
    {
        strcpy(VAR6, "");
    }
    if(FUN7())
    {
        FUN1(VAR6, VAR6);
    }
    else
    {
        FUN5(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN6();
    return 0;
}