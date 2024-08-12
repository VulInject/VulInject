#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1(int64_t VAR5)
{
    {
        int64_t VAR6 = VAR5 * VAR5;
        FUN2(VAR6);
    }
}
void FUN3()
{
    int64_t VAR5;
    VAR5 = 0LL;
    fscanf (stdin, "" VAR7, &VAR5);
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}