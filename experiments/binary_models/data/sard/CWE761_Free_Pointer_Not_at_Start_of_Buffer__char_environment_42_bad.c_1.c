#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define VAR5 ''
char * FUN1(char * VAR6)
{
    {
        size_t VAR7 = strlen(VAR6);
        char * VAR8 = FUN2(VAR4);
        if (VAR8 != NULL)
        {
            strncat(VAR6+VAR7, VAR8, 100-VAR7-1);
        }
    }
    return VAR6;
}
void FUN3()
{
    char * VAR6;
    VAR6 = (char *)malloc(100*sizeof(char));
    if (VAR6 == NULL) {FUN4(-1);}
    VAR6[0] = '';
    VAR6 = FUN1(VAR6);
    for (; *VAR6 != ''; VAR6++)
    {
        if (*VAR6 == VAR5)
        {
            break;
        }
    }
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}