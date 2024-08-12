#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = NULL;
    if(VAR4==5)
    {
        {
            wchar_t VAR6[] = VAR7"";
            VAR5 = FUN2(VAR6);
            FUN3(VAR5);
        }
    }
    if(VAR4==5)
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}