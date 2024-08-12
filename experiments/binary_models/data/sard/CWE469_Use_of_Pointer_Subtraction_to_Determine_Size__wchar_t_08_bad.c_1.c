#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SOURCE_STRING VAR4""
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
            wchar_t VAR5[] = VAR6;
            wchar_t VAR7[] = VAR6;
            wchar_t * VAR8;
            size_t VAR9;
            VAR8 = FUN4(VAR5, VAR4'');
            if (VAR8 == NULL)
            {
                FUN5(1);
            }
            VAR9 = (VAR10)(VAR8 - VAR7);
            FUN6(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN3();
    return 0;
}