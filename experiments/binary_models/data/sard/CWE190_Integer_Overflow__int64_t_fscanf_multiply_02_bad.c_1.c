#VAR1 <VAR2.VAR3>
#VAR1 ""
void FUN1()
{
    int64_t VAR4;
    VAR4 = 0LL;
    if(1)
    {
        fscanf (stdin, "" VAR5, &VAR4);
    }
    if(1)
    {
        if(VAR4 > 0) 
        {
            int64_t VAR6 = VAR4 * 2;
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}