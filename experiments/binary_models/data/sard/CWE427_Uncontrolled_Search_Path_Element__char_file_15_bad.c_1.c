#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
void FUN1()
{
    char * VAR8;
    char VAR9[250] = "";
    VAR8 = VAR9;
    switch(6)
    {
    case 6:
    {
        size_t VAR10 = strlen(VAR8);
        VAR11 * VAR12;
        if (250-VAR10 > 1)
        {
            VAR12 = fopen(VAR7, "");
            if (VAR12 != NULL)
            {
                if (fgets(VAR8+VAR10, (int)(250-VAR10), VAR12) == NULL)
                {
                    VAR8[VAR10] = '';
                }
                fclose(VAR12);
            }
        }
    }
    break;
    default:
        break;
    }
    FUN2(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}