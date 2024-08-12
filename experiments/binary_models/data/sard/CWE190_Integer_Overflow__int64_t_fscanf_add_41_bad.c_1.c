#VAR1 <VAR2.VAR3>
#VAR1 ""
void FUN1(int64_t VAR4)
{
    {
        int64_t VAR5 = VAR4 + 1;
        FUN2(VAR5);
    }
}
void FUN3()
{
    int64_t VAR4;
    VAR4 = 0LL;
    fscanf (stdin, "" VAR6, &VAR4);
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}