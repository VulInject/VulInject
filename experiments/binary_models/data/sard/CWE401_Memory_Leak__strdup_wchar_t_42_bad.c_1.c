#VAR1 ""
#VAR1 <VAR2.VAR3>
wchar_t * FUN1(wchar_t * VAR4)
{
    {
        wchar_t VAR5[] = VAR6"";
        VAR4 = FUN2(VAR5);
        FUN3(VAR4);
    }
    return VAR4;
}
void FUN4()
{
    wchar_t * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}