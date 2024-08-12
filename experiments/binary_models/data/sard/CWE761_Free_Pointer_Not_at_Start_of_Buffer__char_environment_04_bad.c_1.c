#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define VAR5 ''
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1()
{
    char * VAR8;
    VAR8 = (char *)malloc(100*sizeof(char));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR8[0] = '';
    {
        size_t VAR9 = strlen(VAR8);
        char * VAR10 = FUN3(VAR4);
        if (VAR10 != NULL)
        {
            strncat(VAR8+VAR9, VAR10, 100-VAR9-1);
        }
    }
    if(VAR6)
    {
        for (; *VAR8 != ''; VAR8++)
        {
            if (*VAR8 == VAR5)
            {
                break;
            }
        }
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}