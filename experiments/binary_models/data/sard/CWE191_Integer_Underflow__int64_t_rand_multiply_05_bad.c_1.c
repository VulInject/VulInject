#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int64_t VAR4;
    VAR4 = 0LL;
    if(VAR2)
    {
        VAR4 = (VAR5)FUN2();
    }
    if(VAR2)
    {
        if(VAR4 < 0) 
        {
            int64_t VAR6 = VAR4 * 2;
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}