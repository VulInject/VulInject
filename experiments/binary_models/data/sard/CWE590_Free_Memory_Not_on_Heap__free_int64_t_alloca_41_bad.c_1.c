#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(VAR4 * VAR5)
{
    FUN2(VAR5[0]);
    free(VAR5);
}
void FUN3()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    {
        VAR4 * VAR6 = (VAR4 *)FUN4(100*sizeof(VAR4));
        {
            size_t VAR7;
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR6[VAR7] = 5LL;
            }
        }
        VAR5 = VAR6;
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}