#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    if(FUN2())
    {
        {
            int64_t VAR6[100];
            {
                size_t VAR7;
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR6[VAR7] = 5LL;
                }
            }
            VAR5 = VAR6;
        }
    }
    FUN3(VAR5[0]);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}