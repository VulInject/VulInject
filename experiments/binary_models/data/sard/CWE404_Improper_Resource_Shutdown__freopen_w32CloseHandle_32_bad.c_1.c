#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR4 * *VAR6 = &VAR5;
    VAR4 * *VAR7 = &VAR5;
    VAR5 = NULL;
    {
        VAR4 * VAR5 = *VAR6;
        VAR5 = FUN2("","",stdin);
        *VAR6 = VAR5;
    }
    {
        VAR4 * VAR5 = *VAR7;
        if (VAR5 != NULL)
        {
            FUN3((VAR8)VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}