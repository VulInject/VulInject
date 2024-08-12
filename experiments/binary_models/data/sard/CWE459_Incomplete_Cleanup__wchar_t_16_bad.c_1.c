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
    while(1)
    {
        {
            wchar_t * VAR7;
            wchar_t VAR8[] = VAR9;
            VAR10 *VAR11;
            VAR7 = FUN2(VAR8);
            if (VAR7 != NULL)
            {
                VAR11 = FUN3(VAR7, VAR12"");
                if (VAR11 != NULL)
                {
                    fprintf(VAR11, "");
                    fclose(VAR11);
                }
            }
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}