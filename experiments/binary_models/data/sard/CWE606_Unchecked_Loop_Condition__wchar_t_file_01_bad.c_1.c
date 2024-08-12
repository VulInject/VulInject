#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    {
        size_t VAR8 = wcslen(VAR5);
        VAR9 * VAR10;
        if (100-VAR8 > 1)
        {
            VAR10 = fopen(VAR4, "");
            if (VAR10 != NULL)
            {
                if (FUN2(VAR5+VAR8, (int)(100-VAR8), VAR10) == NULL)
                {
                    VAR5[VAR8] = VAR7'';
                }
                fclose(VAR10);
            }
        }
    }
    {
        int VAR11, VAR12, VAR13;
        if (swscanf(VAR5, VAR7"", &VAR12) == 1)
        {
            VAR13 = 0;
            for (VAR11 = 0; VAR11 < VAR12; VAR11++)
            {
                VAR13++; 
            }
            FUN3(VAR13);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}