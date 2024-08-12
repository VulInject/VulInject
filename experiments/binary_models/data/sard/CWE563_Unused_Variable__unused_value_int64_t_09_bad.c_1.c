#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int64_t VAR4;
    if(VAR5)
    {
        VAR4 = 5LL;
    }
    if(VAR5)
    {
        VAR4 = 10LL;
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}