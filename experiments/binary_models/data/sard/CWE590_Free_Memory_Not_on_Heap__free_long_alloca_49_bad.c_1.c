#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL; 
    if(VAR5==5)
    {
        {
            long * VAR6 = (long *)FUN2(100*sizeof(long));
            {
                size_t VAR7;
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR6[VAR7] = 5L;
                }
            }
            VAR4 = VAR6;
        }
    }
    FUN3(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}