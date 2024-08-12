#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(VAR5)
    {
        {
            size_t VAR9 = strlen(VAR7);
            char * VAR10 = FUN2(VAR4);
            if (VAR10 != NULL)
            {
                strncat(VAR7+VAR9, VAR10, 100-VAR9-1);
            }
        }
    }
    if(VAR5)
    {
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}