#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    {
        int VAR5, VAR6, VAR7;
        if (swscanf(VAR4, VAR8"", &VAR6) == 1)
        {
            VAR7 = 0;
            for (VAR5 = 0; VAR5 < VAR6; VAR5++)
            {
                VAR7++; 
            }
            FUN2(VAR7);
        }
    }
}
void FUN3()
{
    wchar_t * VAR4;
    void (*VAR9) (wchar_t *) = VAR10;
    wchar_t VAR11[100] = VAR8"";
    VAR4 = VAR11;
    {
        size_t VAR12 = wcslen(VAR4);
        if (100-VAR12 > 1)
        {
            if (FUN4(VAR4+VAR12, (int)(100-VAR12), stdin) != NULL)
            {
                VAR12 = wcslen(VAR4);
                if (VAR12 > 0 && VAR4[VAR12-1] == VAR8'')
                {
                    VAR4[VAR12-1] = VAR8'';
                }
            }
            else
            {
                VAR4[VAR12] = VAR8'';
            }
        }
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}