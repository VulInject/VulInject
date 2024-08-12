#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define VAR5 ''
int VAR6 = 5;
void FUN1()
{
    char * VAR7;
    VAR7 = (char *)malloc(100*sizeof(char));
    if (VAR7 == NULL) {FUN2(-1);}
    VAR7[0] = '';
    {
        size_t VAR8 = strlen(VAR7);
        char * VAR9 = FUN3(VAR4);
        if (VAR9 != NULL)
        {
            strncat(VAR7+VAR8, VAR9, 100-VAR8-1);
        }
    }
    if(VAR6==5)
    {
        for (; *VAR7 != ''; VAR7++)
        {
            if (*VAR7 == VAR5)
            {
                break;
            }
        }
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}