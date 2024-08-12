#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    switch(6)
    {
    case 6:
    {
        size_t VAR7 = strlen(VAR5);
        char * VAR8 = FUN2(VAR4);
        if (VAR8 != NULL)
        {
            strncat(VAR5+VAR7, VAR8, 100-VAR7-1);
        }
    }
    break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        FUN3(VAR5);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}