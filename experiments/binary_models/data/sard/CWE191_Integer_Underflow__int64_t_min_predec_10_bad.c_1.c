#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    if(VAR3)
    {
        VAR2 = VAR4;
    }
    if(VAR3)
    {
        {
            --VAR2;
            int64_t VAR5 = VAR2;
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}