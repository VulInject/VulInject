#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int64_t VAR3;
    VAR3 = 0LL;
    if(VAR2==5)
    {
        VAR3 = (VAR4)FUN2();
    }
    if(VAR2==5)
    {
        {
            ++VAR3;
            int64_t VAR5 = VAR3;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}