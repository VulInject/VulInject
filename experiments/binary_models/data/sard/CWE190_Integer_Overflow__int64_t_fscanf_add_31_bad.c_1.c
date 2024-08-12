#VAR1 <VAR2.VAR3>
#VAR1 ""
void FUN1()
{
    int64_t VAR4;
    VAR4 = 0LL;
    fscanf (stdin, "" VAR5, &VAR4);
    {
        int64_t VAR6 = VAR4;
        int64_t VAR4 = VAR6;
        {
            int64_t VAR7 = VAR4 + 1;
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}