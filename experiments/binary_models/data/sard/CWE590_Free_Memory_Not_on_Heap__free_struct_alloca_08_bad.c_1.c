#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    if(FUN1())
    {
        {
            VAR4 * VAR6 = (VAR4 *)FUN4(100*sizeof(VAR4));
            {
                size_t VAR7;
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR6[VAR7].VAR8 = 1;
                    VAR6[VAR7].VAR9 = 1;
                }
            }
            VAR5 = VAR6;
        }
    }
    FUN5(&VAR5[0]);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}