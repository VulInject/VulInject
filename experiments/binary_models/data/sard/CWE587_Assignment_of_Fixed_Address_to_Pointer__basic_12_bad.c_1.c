#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            char *VAR2 = (char*)0x400000;
            FUN3(*VAR2);
        }
    }
    else
    {
        {
            char VAR3 = '';
            char *VAR2 = &VAR3;
            FUN3(*VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}