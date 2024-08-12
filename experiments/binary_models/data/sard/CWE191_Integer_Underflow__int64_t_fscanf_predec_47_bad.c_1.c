#VAR1 <VAR2.VAR3>
#VAR1 ""
void FUN1()
{
    int64_t VAR4;
    VAR4 = 0LL;
    if(FUN2())
    {
        fscanf (stdin, "" VAR5, &VAR4);
    }
    else
    {
        VAR4 = -2;
    }
    if(FUN2())
    {
        {
            --VAR4;
            int64_t VAR6 = VAR4;
            FUN3(VAR6);
        }
    }
    else
    {
        if (VAR4 > VAR7)
        {
            --VAR4;
            int64_t VAR6 = VAR4;
            FUN3(VAR6);
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