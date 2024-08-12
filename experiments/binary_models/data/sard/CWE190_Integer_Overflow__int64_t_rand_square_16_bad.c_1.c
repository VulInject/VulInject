#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    int64_t VAR5;
    VAR5 = 0LL;
    while(1)
    {
        VAR5 = (VAR6)FUN2();
        break;
    }
    while(1)
    {
        {
            int64_t VAR7 = VAR5 * VAR5;
            FUN3(VAR7);
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