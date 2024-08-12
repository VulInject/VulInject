#VAR1 ""
#define UNLINK VAR2
#define FOPEN _wfopen
#define MKTEMP VAR3
#VAR1 <VAR4.VAR5>
#define UNLINK unlink
#define FOPEN fopen
#define MKTEMP VAR6
void FUN1()
{
    if(VAR7==5)
    {
        {
            wchar_t * VAR8;
            wchar_t VAR9[] = VAR10;
            VAR11 *VAR12;
            VAR8 = FUN2(VAR9);
            if (VAR8 != NULL)
            {
                VAR12 = FUN3(VAR8, VAR13"");
                if (VAR12 != NULL)
                {
                    fprintf(VAR12, "");
                    fclose(VAR12);
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