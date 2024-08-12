#VAR1 <VAR2.VAR3>
#VAR1 ""
void FUN1()
{
    int64_t VAR4;
    VAR5 *VAR6 = &VAR4;
    VAR5 *VAR7 = &VAR4;
    VAR4 = 0LL;
    {
        int64_t VAR4 = *VAR6;
        fscanf (stdin, "" VAR8, &VAR4);
        *VAR6 = VAR4;
    }
    {
        int64_t VAR4 = *VAR7;
        {
            VAR4++;
            int64_t VAR9 = VAR4;
            FUN2(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}