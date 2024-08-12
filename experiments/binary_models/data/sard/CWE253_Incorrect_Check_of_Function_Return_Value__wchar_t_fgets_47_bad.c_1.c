#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR4[100] = VAR5"";
            wchar_t * VAR6 = VAR4;
            if (FUN3(VAR6, 100, stdin) < 0)
            {
                FUN4(1);
            }
            FUN5(VAR6);
        }
    }
    else
    {
        {
            wchar_t VAR4[100] = VAR5"";
            wchar_t * VAR6 = VAR4;
            if (FUN3(VAR6, 100, stdin) == NULL)
            {
                FUN4(1);
            }
            FUN5(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}