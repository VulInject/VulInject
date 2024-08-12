#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1(wchar_t * VAR5)
{
    {
        int VAR6, VAR7, VAR8;
        if (swscanf(VAR5, VAR9"", &VAR7) == 1)
        {
            VAR8 = 0;
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR8++; 
            }
            FUN2(VAR8);
        }
    }
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR10[100] = VAR9"";
    VAR5 = VAR10;
    {
        size_t VAR11 = wcslen(VAR5);
        VAR12 * VAR13;
        if (100-VAR11 > 1)
        {
            VAR13 = fopen(VAR4, "");
            if (VAR13 != NULL)
            {
                if (FUN4(VAR5+VAR11, (int)(100-VAR11), VAR13) == NULL)
                {
                    VAR5[VAR11] = VAR9'';
                }
                fclose(VAR13);
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}