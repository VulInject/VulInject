#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR4;
    char VAR5[100] = "";
    VAR4 = VAR5;
    switch(6)
    {
    case 6:
    {
        size_t VAR6 = strlen(VAR4);
        if (100-VAR6 > 1)
        {
            if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
            {
                VAR6 = strlen(VAR4);
                if (VAR6 > 0 && VAR4[VAR6-1] == '')
                {
                    VAR4[VAR6-1] = '';
                }
            }
            else
            {
                VAR4[VAR6] = '';
            }
        }
    }
    break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        char VAR7[100] = "";
        FUN2(VAR7, 100-1, VAR4);
        FUN3(VAR7);
    }
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