#VAR1 <VAR2.VAR3>
#VAR1 ""
void FUN1()
{
    int64_t VAR4;
    VAR4 = 0LL;
    goto VAR5;
VAR5:
    fscanf (stdin, "" VAR6, &VAR4);
    goto VAR7;
VAR7:
    {
        int64_t VAR8 = VAR4 + 1;
        FUN2(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}