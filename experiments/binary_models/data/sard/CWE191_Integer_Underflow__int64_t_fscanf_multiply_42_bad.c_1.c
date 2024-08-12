#VAR1 <VAR2.VAR3>
#VAR1 ""
VAR4 FUN1(int64_t VAR5)
{
    fscanf (stdin, "" VAR6, &VAR5);
    return VAR5;
}
void FUN2()
{
    int64_t VAR5;
    VAR5 = 0LL;
    VAR5 = FUN1(VAR5);
    if(VAR5 < 0) 
    {
        int64_t VAR7 = VAR5 * 2;
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}