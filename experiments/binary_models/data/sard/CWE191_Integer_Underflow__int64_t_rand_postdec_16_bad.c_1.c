#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    while(1)
    {
        VAR2 = (VAR3)FUN2();
        break;
    }
    while(1)
    {
        {
            VAR2--;
            int64_t VAR4 = VAR2;
            FUN3(VAR4);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}