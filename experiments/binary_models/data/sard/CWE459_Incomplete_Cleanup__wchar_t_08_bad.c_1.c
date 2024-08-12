#VAR1 ""
#define UNLINK VAR2
#define FOPEN _wfopen
#define MKTEMP VAR3
#VAR1 <VAR4.VAR5>
#define UNLINK unlink
#define FOPEN fopen
#define MKTEMP VAR6
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            wchar_t * VAR7;
            wchar_t VAR8[] = VAR9;
            VAR10 *VAR11;
            VAR7 = FUN4(VAR8);
            if (VAR7 != NULL)
            {
                VAR11 = FUN5(VAR7, VAR12"");
                if (VAR11 != NULL)
                {
                    fprintf(VAR11, "");
                    fclose(VAR11);
                }
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}