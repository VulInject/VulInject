#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    long * VAR5;
    VAR5 = NULL; 
    if(VAR4==5)
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