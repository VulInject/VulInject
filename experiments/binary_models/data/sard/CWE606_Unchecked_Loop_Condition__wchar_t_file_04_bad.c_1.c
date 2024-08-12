#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR9"";
    VAR7 = VAR8;
    if(VAR5)
    {
        {
            size_t VAR10 = wcslen(VAR7);
            VAR11 * VAR12;
            if (100-VAR10 > 1)
            {
                VAR12 = fopen(VAR4, "");
                if (VAR12 != NULL)
                {
                    if (FUN2(VAR7+VAR10, (int)(100-VAR10), VAR12) == NULL)
                    {
                        VAR7[VAR10] = VAR9'';
                    }
                    fclose(VAR12);
                }
            }
        }
    }
    if(VAR5)
    {
        {
            int VAR13, VAR14, VAR15;
            if (swscanf(VAR7, VAR9"", &VAR14) == 1)
            {
                VAR15 = 0;
                for (VAR13 = 0; VAR13 < VAR14; VAR13++)
                {
                    VAR15++; 
                }
                FUN3(VAR15);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}