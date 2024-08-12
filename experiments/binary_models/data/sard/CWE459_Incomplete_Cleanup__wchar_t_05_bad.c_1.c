#VAR1 ""
#define UNLINK VAR2
#define FOPEN _wfopen
#define MKTEMP VAR3
#VAR1 <VAR4.VAR5>
#define UNLINK unlink
#define FOPEN fopen
#define MKTEMP VAR6
int VAR7 = 1; 
int VAR8 = 0; 
void FUN1()
{
    if(VAR7)
    {
        {
            wchar_t * VAR9;
            wchar_t VAR10[] = VAR11;
            VAR12 *VAR13;
            VAR9 = FUN2(VAR10);
            if (VAR9 != NULL)
            {
                VAR13 = FUN3(VAR9, VAR14"");
                if (VAR13 != NULL)
                {
                    fprintf(VAR13, "");
                    fclose(VAR13);
                }
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