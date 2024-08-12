#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    int64_t VAR6 = 5LL;
    if(FUN2())
    {
        VAR5 = NULL;
    }
    else
    {
        {
            VAR5 = &VAR6;
        }
    }
    if(FUN2())
    {
        FUN3(*VAR5);
    }
    else
    {
        if (VAR5 != NULL)
        {
            FUN3(*VAR5);
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