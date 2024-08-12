#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    int64_t VAR7;
    VAR7 = 0LL;
    if(VAR5)
    {
        VAR7 = (VAR8)FUN2();
    }
    if(VAR5)
    {
        {
            int64_t VAR9 = VAR7 * VAR7;
            FUN3(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}