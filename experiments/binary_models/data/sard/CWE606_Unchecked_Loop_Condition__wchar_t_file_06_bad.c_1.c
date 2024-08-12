#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
static const int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR8"";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        {
            size_t VAR9 = wcslen(VAR6);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (FUN2(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR6[VAR9] = VAR8'';
                    }
                    fclose(VAR11);
                }
            }
        }
    }
    if(VAR5==5)
    {
        {
            int VAR12, VAR13, VAR14;
            if (swscanf(VAR6, VAR8"", &VAR13) == 1)
            {
                VAR14 = 0;
                for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                {
                    VAR14++; 
                }
                FUN3(VAR14);
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