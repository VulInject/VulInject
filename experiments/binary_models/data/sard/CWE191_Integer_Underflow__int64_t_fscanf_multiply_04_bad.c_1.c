#VAR1 <VAR2.VAR3>
#VAR1 ""
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    int64_t VAR6;
    VAR6 = 0LL;
    if(VAR4)
    {
        fscanf (stdin, "" VAR7, &VAR6);
    }
    if(VAR4)
    {
        if(VAR6 < 0) 
        {
            int64_t VAR8 = VAR6 * 2;
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}