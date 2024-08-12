#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    if(VAR4==5)
    {
        VAR5 = NULL;
    }
    if(VAR4==5)
    {
        FUN2(VAR5[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}