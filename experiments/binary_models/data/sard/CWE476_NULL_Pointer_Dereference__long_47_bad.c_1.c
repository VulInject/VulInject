#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    long VAR5 = 5L;
    if(FUN2())
    {
        VAR4 = NULL;
    }
    else
    {
        {
            VAR4 = &VAR5;
        }
    }
    if(FUN2())
    {
        FUN3(*VAR4);
    }
    else
    {
        if (VAR4 != NULL)
        {
            FUN3(*VAR4);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}