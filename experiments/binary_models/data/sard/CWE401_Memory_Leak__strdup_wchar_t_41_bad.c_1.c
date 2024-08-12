#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    ; 
}
void FUN2()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    {
        wchar_t VAR5[] = VAR6"";
        VAR4 = FUN3(VAR5);
        FUN4(VAR4);
    }
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}