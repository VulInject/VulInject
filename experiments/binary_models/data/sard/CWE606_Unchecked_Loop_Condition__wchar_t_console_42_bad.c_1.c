#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
wchar_t * FUN1(wchar_t * VAR4)
{
    {
        size_t VAR5 = wcslen(VAR4);
        if (100-VAR5 > 1)
        {
            if (FUN2(VAR4+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                VAR5 = wcslen(VAR4);
                if (VAR5 > 0 && VAR4[VAR5-1] == VAR6'')
                {
                    VAR4[VAR5-1] = VAR6'';
                }
            }
            else
            {
                VAR4[VAR5] = VAR6'';
            }
        }
    }
    return VAR4;
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t VAR7[100] = VAR6"";
    VAR4 = VAR7;
    VAR4 = FUN1(VAR4);
    {
        int VAR8, VAR9, VAR10;
        if (swscanf(VAR4, VAR6"", &VAR9) == 1)
        {
            VAR10 = 0;
            for (VAR8 = 0; VAR8 < VAR9; VAR8++)
            {
                VAR10++; 
            }
            FUN4(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}