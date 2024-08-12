#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    goto VAR4;
VAR4:
    {
        wchar_t VAR5[100] = VAR6"";
        wchar_t * VAR7 = VAR5;
        if (FUN2(VAR7, 100, stdin) < 0)
        {
            FUN3(1);
        }
        FUN4(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}