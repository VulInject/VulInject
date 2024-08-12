#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SOURCE_STRING VAR4""
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR5[] = VAR6;
            wchar_t VAR7[] = VAR6;
            wchar_t * VAR8;
            size_t VAR9;
            VAR8 = FUN3(VAR5, VAR4'');
            if (VAR8 == NULL)
            {
                FUN4(1);
            }
            VAR9 = (VAR10)(VAR8 - VAR7);
            FUN5(VAR9);
        }
    }
    else
    {
        {
            wchar_t VAR5[] = VAR6;
            wchar_t * VAR8;
            size_t VAR9;
            VAR8 = FUN3(VAR5, VAR4'');
            if (VAR8 == NULL)
            {
                FUN4(1);
            }
            VAR9 = (VAR10)(VAR8 - VAR5);
            FUN5(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}